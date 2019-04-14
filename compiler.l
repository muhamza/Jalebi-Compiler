%{
#include "y.tab.h"
#include <string.h>
char tempDataType[50] = "";
%}

%option nounput yylineno

%%
markazi	return markazi;
chalo return chalo;
se return se;
jabtak return jabtak;
agar return agar;
warna return warna;
agarwarna  return agarwarna;
likho return likho;
hindsa {strcpy(tempDataType, "hindsa"); return hindsa;}
jumla {strcpy(tempDataType, "jumla"); return jumla;}
booliyayi {strcpy(tempDataType, "booliyayi"); return booliyayi;}
aasharia {strcpy(tempDataType, "aasharia"); return aasharia;}
khaali return khaali;
sahih return sahih;
ghalat return ghalat;
\"(\\.|[^"\\])*\" {InsertValueTable(yytext, "stringliteral", yylineno); return stringliteral;}
[a-zA-Z][_a-zA-Z0-9]* {InsertHashTable(yytext, tempDataType, yylineno); return identifier;}
([0-9]+\.[0-9]+) {InsertValueTable(yytext, "decimal", yylineno); return decimal;}
([1-9][0-9]*) {InsertValueTable(yytext, "integer", yylineno); return integer;}
"=" return EA;
"+=" return AA;
"-=" return SA;
"*=" return MA;
"/=" return DA;
">" return GT;
"<" return LT;
">=" return GTE;
"<=" return LTE;
"==" return IEQ;
"!=" return NEQ;
"++" return INO;
"--" return DCO;
"+" return PLS;
"-" return MIS;
"*" return MUL;
"/" return DIV;
"%" return MOD;
"&" return AND;
"|" return OR;
"!" return NOT;
"(" return LRP;
")" return RRP;
"{" return LCP;
"}" return RCP;
"," return comma;
";" {strcpy(tempDataType, "none"); return semicolon;}
[ \t\n]+ ;

%%

struct ValueNode
{
	char value[50];
	char datatype[20];
	int lineno;
};

struct ValueNode valueTable[100];
int valueTableCount = 0;

void InsertValueTable(char *value, char *datatype, int lineno)
{
	strcpy(valueTable[valueTableCount].value, value);
	strcpy(valueTable[valueTableCount].datatype, datatype);
	valueTable[valueTableCount].lineno = lineno;
	valueTableCount++;
}

void PrintValueTable()
{
	int i;
	printf("\n\n------------------------------Value TABLE------------------------------\n");
	printf("--------------------------------------------------------------------------\n");
	printf("Value \t\t\t|\tData Type\t\t\t|\tLine no.\n");
	printf("--------------------------------------------------------------------------\n");
	for(i=0;i<valueTableCount;i++)
	{
		printf("%s\t\t\t\t", valueTable[i].value);
		printf("%s\t\t\t\t", valueTable[i].datatype);
		printf("%d\t\n", valueTable[i].lineno);
	}
	printf("\n\n");
}

struct HashNode
{
	char ident[50];
    	char datatype[50];
    	int lineno;
	struct HashNode *next;
};

struct Hash
{
	struct HashNode *head;
	int hashCount;
};

struct Hash hashTable[1000];
int totalElements = 1000;

struct HashNode * CreateNode(char *ident, char *datatype, int lineno)
{
	struct HashNode *node;
	node = (struct HashNode *) malloc(sizeof(struct HashNode));
	strcpy(node->ident, ident);
	strcpy(node->datatype, datatype);
	node->lineno = lineno; 
	node->next = NULL;
	return node;
}

int CalculateHash(char *ident)
{
	int hashValue = 0;
	for(int i=0; ident[i]!='\0'; i++)
	{
		hashValue = hashValue + (int)ident[i];
	}
	hashValue = hashValue % totalElements;
	return hashValue;
}

void InsertHashTable(char *ident, char *datatype, int lineno)
{
	int flag = 0;
	int hashValue;
	hashValue = CalculateHash(ident);
	struct HashNode *node = CreateNode(ident, datatype, lineno);
	if (hashTable[hashValue].head == NULL)
	{
		hashTable[hashValue].head = node;
	        hashTable[hashValue].hashCount = 1;
	        return;
	}
	struct HashNode *temp;
    	temp = hashTable[hashValue].head;
	//traversing the linked list
	while (temp != NULL)
    	{
        	if (strcmp(temp->ident, ident)==0)
        	{
            		flag = 1;
            		break;
        	}
        	temp = node->next;
    	}
	if(!flag)
	{
		node->next = (hashTable[hashValue].head);
		//updation of head
		hashTable[hashValue].head = node;
		hashTable[hashValue].hashCount++;
	}
	return;
}

void PrintHashTable()
{
    	struct HashNode *node;
    	printf("\n-----------------------------------------Symbol Table---------------------------------------------\n");
    	printf("--------------------------------------------------------------------------------------------------");
    	printf("\nToken \t\t\t|\t\Token Type \t\t\t|\t\Line no. \n");
        printf("--------------------------------------------------------------------------------------------------\n");
    	for (int i = 0; i < totalElements; i++)
    	{
        	if (hashTable[i].hashCount == 0)
            		continue;
        	node = hashTable[i].head;
        	if (!node)
            		continue;
        	while (node != NULL)
        	{
            		printf("%s\t\t\t\t", node->ident);
            		printf("%s\t\t\t\t", node->datatype);
			printf("%d\t\n", node->lineno);
            		node = node->next;
        	}
	}
	printf("--------------------------------------------------------------------------------------------------\n");
   	return;
}


int yywrap(void){
	return 1;
} 

