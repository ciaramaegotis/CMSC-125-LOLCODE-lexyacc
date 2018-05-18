
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

int setTroofVar(char *varname, int type, int value){
	SYM *travel = var_linkedlist;
	while (travel != NULL){
		if (strcmp(varname, travel->variable_name) == 0 && (type == travel->type || travel->type == 0)){
			travel->troofValue = (value == 1)? "WIN": "FAIL";
			travel->type = type;
			break;
		}
		travel = travel->next;
	}
}

int checkIfValidVariableWithoutType(char *varname){
	int isFound = -1;
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

float getValueOfVariableNumber(char *varname){
	int floatValueVar = 0;
	int isFound = 0;
	SYM *travel = var_linkedlist;
	while (travel != NULL){
		if (strcmp(varname, travel->variable_name) == 0){
			isFound = 1;
			return travel->floatValue;
			break;
		}
		travel = travel->next;
	}
	if (isFound == 0){
		printf("Syntax error. No existing variable\n");
		return 0;
	}
}

void inputVariable(char *varname){
	int type = checkIfValidVariableWithoutType(varname);
	if (type != -1){
		if (type == 0 || type == 2 || type == 3){
			char *inputString;
			inputString = (char *)malloc(sizeof(char)*100);
			inputString[strlen(inputString) - 1] = '\0';
		    fflush(stdin);
		    fgets(inputString, 100, stdin);
		    fflush(stdin);
		    // scanf("%c", &flushChar);
		    if (strcmp(inputString, "WIN") == 0){
		    	setTroofVar(varname, 3, 1);
		    }else if (strcmp(inputString, "FAIL") == 0){
		    	setTroofVar(varname, 3, 0);
		    }else{
		    	int charCounter = 0;
		    	int isString = 0;
		    	int stringCounter = 0;
		    	while (stringCounter < strlen(inputString)){
		    		int numCounterPart = inputString[charCounter];
		    		if (numCounterPart >= '0' && numCounterPart <= '9'){
		    			stringCounter++;
		    			continue;
		    		}else if (inputString[charCounter] == '.'){
		    			stringCounter++;
		    			while (inputString[charCounter] != '\0'){
		    				int numCounterPart2 = inputString[charCounter];
		    				if (numCounterPart2 >= '0' && numCounterPart2 <= '9'){
		    					stringCounter++;
		    					continue;
		    				}else{
		    					isString = 1;
		    					break;
		    				}
		    				stringCounter++;
		    			}
		    		}else{

		    			isString = 1;
		    			break;
		    		}
		    		stringCounter++;
		    	}
		    	if (isString == 1){
		    		setYarnVar(varname, 2, inputString);
		    	}else{
		    		float floatVar = atof(inputString);
		    		setNumbrVar(varname, 1, floatVar);
		    	}
		    }
		}else if (type == 1){
			char *inputString;
			inputString = (char *)malloc(sizeof(char)*100);
		    fflush(stdin);
		    fgets(inputString, 100, stdin);
		    fflush(stdin);
		    float inputFloat = atof(inputString);
			setNumbrVar(varname, 1, inputFloat);
		}
	}else{
		printf("Syntax error. Variable not existing");
		exit(0);
	}
}



/*
0 - noob
1 - numbr or numbar
2 - yarn
3 - troof

*/
