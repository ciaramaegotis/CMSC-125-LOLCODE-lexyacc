
typedef struct symbol{
  char *variable_name;
  int type;
  float floatValue;
  char *yarnValue;
  char *troofValue;
  struct symbol *next;
  struct symbol *prev;
}SYM;

SYM *var_linkedlist;

void insertAtHead(SYM *new_var){
	int isFound = 0;
	SYM *travel = var_linkedlist;
	while (travel != NULL){
		if (strcmp(new_var->variable_name, travel->variable_name) == 0){
			isFound = 1;
			printf("Syntax error: variable redeclared");
			exit(0);
		}
		travel = travel->next;
	}
	if (isFound == 0){
		new_var->next = var_linkedlist;
        var_linkedlist = new_var;
        printf("New variable: %s", new_var->variable_name);
	}
}

int checkIfValidVariable(char *varToSearch, int type){
	int isFound = 0;
	SYM *travel = var_linkedlist;
	while (travel != NULL){
		if (strcmp(varToSearch, travel->variable_name) == 0 && (type == travel->type || travel->type == 0)){
			isFound = 1;
			break;
		}
		travel = travel->next;
	}
	if (isFound == 0){
		return 0;
	}
	return isFound;
}

int setNumbrVar(char *varname, int type, float value){
	SYM *travel = var_linkedlist;
	while (travel != NULL){
		if (strcmp(varname, travel->variable_name) == 0 && (type == travel->type || travel->type == 0)){
			travel->floatValue = value;
			travel->type = type;
			break;
		}
		travel = travel->next;
	}
}

int setYarnVar(char *varname, int type, char *value){
	SYM *travel = var_linkedlist;
	while (travel != NULL){
		if (strcmp(varname, travel->variable_name) == 0 && (type == travel->type || travel->type == 0)){
			travel->yarnValue = value;
			travel->type = type;
			break;
		}
		travel = travel->next;
	}
}

int setTroofVar(char *varname, int type, char *value){
	SYM *travel = var_linkedlist;
	while (travel != NULL){
		if (strcmp(varname, travel->variable_name) == 0 && (type == travel->type || travel->type == 0)){
			travel->troofValue = value;
			travel->type = type;
			break;
		}
		travel = travel->next;
	}
}

int checkIfValidVariableWithoutType(char *varname){
	int isFound = 0;
	SYM *travel = var_linkedlist;
	while (travel != NULL){
		if (strcmp(varname, travel->variable_name) == 0){
			isFound = travel->type;
			break;
		}
		travel = travel->next;
	}
	return isFound;
}

void printVariable(char *varname){
	int isFound = 0;
	SYM *travel = var_linkedlist;
	while (travel != NULL){
		if (strcmp(varname, travel->variable_name) == 0){
			if (travel->type == 0){
				printf("Syntax error. Variable not initialized");
				exit(0);
			}else{
				isFound = 1;
				if (travel->type == 1){
					printf("PRINTING: %f\n", travel->floatValue);
				}else if (travel->type == 2){
					printf("PRINTING: %s\n", travel->yarnValue);
				}else if (travel->type == 3){	
					printf("PRINTING: %s\n", travel->troofValue);
				}
			}
			isFound = travel->type;
			break;
		}
		travel = travel->next;
	}
	if (isFound == 0){
		printf(" Syntax error. Variable not found\n");
		exit(0);
	}
}




/*
0 - noob
1 - numbr or numbar
2 - yarn
3 - troof

*/
