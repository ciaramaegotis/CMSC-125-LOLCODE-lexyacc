
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
	printf("ITO YUN HEHEHE %s\n\n\n\n\n\n\n\n", value);
	SYM *travel = var_linkedlist;
	while (travel != NULL){
		if (strcmp(varname, travel->variable_name) == 0 && (type == travel->type || travel->type == 0)){
			printf("DAPAT NAGMATCH NA SILA PLS \n\n\n\n\n\n");
			travel->yarnValue = value;
			printf("NAKUHA MO BA??? %s", travel->yarnValue);
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
					printf("NAIIYAK NA MEEEE\n\n\n\n");
					printf("PRINTING: %s\n", travel->yarnValue);
					printf("PRINTING: %s\n", travel->variable_name);
					printf("PRINTING: %i\n", travel->type);
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

void inputVariable(char *varname){
	int type = checkIfValidVariableWithoutType(varname);
	if (type != -1){
		if (type == 0 || type == 2 || type == 3){
			char inputString[100];
		    gets(inputString);
		    if (strcmp(inputString, "WIN") == 0){
		    	setTroofVar(varname, 3, 1);
		    }else if (strcmp(inputString, "FAIL") == 0){
		    	setTroofVar(varname, 3, 0);
		    }else{
		    	int charCounter = 0;
		    	int isString = 0;
		    	while (inputString[charCounter] != '\0'){
		    		int numCounterPart = inputString[charCounter] - '0';
		    		if (numCounterPart >= 0 && numCounterPart <= 9){
		    			charCounter++;
		    			continue;
		    		}else if (inputString[charCounter] == '.'){
		    			charCounter++;
		    			while (inputString[charCounter] != '\0'){
		    				int numCounterPart2 = inputString[charCounter] - '0';
		    				if (numCounterPart2 >= 0 && numCounterPart2 <= 9){
		    					charCounter++;
		    					continue;
		    				}else{
		    					isString = 1;
		    					break;
		    				}
		    				charCounter++;
		    			}
		    		}else{
		    			isString = 1;
		    			break;
		    		}
		    		charCounter++;
		    	}
		    	if (isString == 1){
		    		char *stringPointer = &inputString[0];
		    		setYarnVar(varname, 2, stringPointer);
		    	}else{
		    		float floatVar = atof(inputString);
		    		setNumbrVar(varname, 1, floatVar);
		    	}
		    }
		}else if (type == 1){
			float inputFloat;
			scanf("%f", &inputFloat);
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
