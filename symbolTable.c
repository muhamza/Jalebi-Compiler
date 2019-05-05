#include <stdbool.h>
int scopeOut = -1;
int count = 0; 

int stack[20];
int stackPointer = 0;

struct SymbolNode
{
	char ident[50];
    	char datatype[50];
    	int lineno;
	int scope;
	union{
		int iVal;
		float fVal;
		char * sVal;
	};
	int flag;
	struct SymbolNode *next;
};

struct Symbol
{
	struct SymbolNode *head;
	int symbolCount;
	int closed;
	int parentPointer;
};

struct Symbol symbolTable[100];

struct SymbolNode * CreateNode(char *ident, char *datatype, int lineno, int scope)
{
	struct SymbolNode *node;
	node = (struct SymbolNode *) malloc(sizeof(struct SymbolNode));
	strcpy(node->ident, ident);
	strcpy(node->datatype, datatype);
	node->lineno = lineno; 
	node->scope = scope;
	node->next = NULL;
	//printf("Node Created with %s %s, %d, %d\n", datatype, ident, lineno, scope);
	return node;
}


void InsertSymbolTable(char *ident, char *datatype, int lineno, int scope){
	int symbolValue = scope; 
	if(scope>=0){
		struct SymbolNode *node = CreateNode(ident, datatype, lineno, scopeOut);
		if (symbolTable[symbolValue].head == NULL){
			symbolTable[symbolValue].head = node;
			symbolTable[symbolValue].symbolCount = 1;
			return;
		}
		struct SymbolNode *temp;
	    	temp = symbolTable[symbolValue].head;

		while (temp->next != NULL){
			temp = temp->next;
	    	}
		temp->next = node;
		symbolTable[symbolValue].symbolCount++;
	}
	return;
}

void FindSymbolTable(char *ident, int scope){
	int symbolValue = scope, found = 0;
	if (symbolValue < 0){
		return;
	}
	if (symbolTable[symbolValue].head == NULL){
		return;
	}
	struct SymbolNode *temp;
    	temp = symbolTable[symbolValue].head;

	while (temp != NULL){
		if (strcmp(temp->ident, ident)==0){
			found = 1;
		    	break;
		}
		temp = temp->next;
	}
	if (found == 1){
		//return true;
		printf("Found = %d\n", 1);
	}
	else{
		//return false;
		printf("Found = %d\n", 0);
	}
}

bool FindVariableSymbolTable(char *ident){
	struct SymbolNode *temp;
	for (int i = 0; i <= count; i++){	
        	if (symbolTable[i].symbolCount == 0)
            		continue;
        	temp = symbolTable[i].head;
        	if (!temp)
            		continue;
        	while (temp != NULL){
			if (strcmp(temp->ident, ident)==0){
				return true;
			}
            		temp = temp->next;
        	}
	}
	return false;
}

bool IsVariableInteger(char *ident){
	struct SymbolNode *temp;
	for (int i = 0; i <= count; i++){	
        	if (symbolTable[i].symbolCount == 0)
            		continue;
        	temp = symbolTable[i].head;
        	if (!temp)
            		continue;
        	while (temp != NULL){
			if (strcmp(temp->ident, ident)==0 && strcmp(temp->datatype, "hindsa")==0){
				return true;
			}
            		temp = temp->next;
        	}
	}
	return false;
}

void RemoveSymbolTable(char *ident, int scope){
	int symbolValue = scope;
	if (symbolValue < 0){
		return;
	}
	if (symbolTable[symbolValue].head == NULL){
		return;
	}
	struct SymbolNode *temp, *temp2;
    	temp = symbolTable[symbolValue].head;
	while (temp != NULL){
		if (strcmp(temp->ident, ident) == 0){
			printf("%s\n","deleted");
			if(symbolTable[symbolValue].head == temp){
				symbolTable[symbolValue].head = temp->next;
				free(temp);
			}
			else if(temp == NULL){
				temp2->next = NULL;
				free(temp);
			}
			else{
				temp2->next = temp->next;
				free(temp);
			}
			break;
		}
		temp2 = temp;
		temp = temp->next;
	}
}

void PrintSymbolTable()
{
    	struct SymbolNode *temp;
    	printf("\n-----------------------------------------Symbol Table------------------------------------------------------------------------------------------\n");
    	printf("-----------------------------------------------------------------------------------------------------------------------------------------------");
    	printf("\n|\tP.Scope \t|\tToken \t|\tToken Type \t|\tLine no. \t|\tScope \t|\tValue \n");
        printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n");
	for (int i = 0; i <= count; i++){	
        	if (symbolTable[i].symbolCount == 0)
            		continue;
		printf("%d ", symbolTable[i].parentPointer);
        	temp = symbolTable[i].head;
        	if (!temp)
            		continue;
        	while (temp != NULL){
            		printf("\t%s\t", temp->ident);
            		printf("\t%s\t", temp->datatype);
			printf("\t%d\t", temp->lineno);
			printf("\t%d\t", temp->scope);
			if(temp->flag == 0){
				printf("\t%d\n", temp->iVal);
			}
			else if(temp->flag == 1){
				printf("\t%f\n", temp->fVal);
			}
			else if(temp->flag == 2){
				printf("\t%s\n", temp->sVal);
			}
            		temp = temp->next;
        	}
	}
	printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n");
   	return;
}

void InitializeCloseScope(int scope){
	if (scope>=0){
		symbolTable[scope].closed = 0;
		symbolTable[scope].parentPointer = -1;
	}
}

void CloseScope(int scope){
	if (scope>=0){
		symbolTable[scope].closed = 1;
	}
	else{
		printf("Error: %s\n", "Scope cannot be less than 0.");
	}
}

void AddScopeList(){
	int scope = SecondStack();
	if (scopeOut>0){
		symbolTable[scopeOut].parentPointer = scope;
	}
}

void PushStack(int scope){
	stack[stackPointer] = scope;
	//printf("Stack value %d\n", stack[stackPointer]);
	stackPointer = stackPointer + 1;
	//PrintStack();
}

int PopStack(){
	stackPointer = stackPointer - 1;	
	if (stackPointer >=0){
		return stack[stackPointer];
	}
	else{
		return 0;
	}
}

int HeadStack(){
	return stack[stackPointer];
}

int SecondStack(){
	//printf("second stack = %d\n", stack[stackPointer-2]);
	return stack[stackPointer-2];
}

void PrintStack(){
	for (int i=0; i<stackPointer; i++){
		printf("%d ", stack[i]);
	}
	printf("\n");
}

void InsertIntValue(int scope, char* token, int value){
	struct SymbolNode *temp;
        if (symbolTable[scope].symbolCount == 0)
		return;
        temp = symbolTable[scope].head;
        while (temp != NULL){
		if (strcmp(temp->ident, token)==0){
			temp->iVal = value;
			temp->flag = 0;
			return;
		}
            	temp = temp->next;
        }
}

void InsertFloatValue(int scope, char* token, float value){
	struct SymbolNode *temp;
        if (symbolTable[scope].symbolCount == 0)
		return;
        temp = symbolTable[scope].head;
        while (temp != NULL){
		if (strcmp(temp->ident, token)==0){
			temp->fVal = value;
			temp->flag = 1;
			return;
		}
            	temp = temp->next;
        }
}

void InsertStringValue(int scope, char* token, char* value){
	struct SymbolNode *temp;
        if (symbolTable[scope].symbolCount == 0)
		return;
        temp = symbolTable[scope].head;
        while (temp != NULL){
		if (strcmp(temp->ident, token)==0){
			temp->sVal = strdup(value);
			temp->flag = 2;
			return;
		}
            	temp = temp->next;
        }
}

int GetVariableValue(char* ident){
	struct SymbolNode *temp;
	for (int i = 0; i <= count; i++){	
        	if (symbolTable[i].symbolCount == 0)
            		continue;
        	temp = symbolTable[i].head;
        	if (!temp)
            		continue;
        	while (temp != NULL){
			if (strcmp(temp->ident, ident)==0){
				return temp->iVal;	
			}
            		temp = temp->next;
        	}
	}
	return 0;
}

void UpdateVariableValue(char* ident, int value){
	struct SymbolNode *temp;
	for (int i = 0; i <= count; i++){	
        	if (symbolTable[i].symbolCount == 0)
            		continue;
        	temp = symbolTable[i].head;
        	if (!temp)
            		continue;
        	while (temp != NULL){
			if (strcmp(temp->ident, ident)==0){
				temp->iVal = value;
				return;	
			}
            		temp = temp->next;
        	}
	}
}


