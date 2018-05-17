
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

void insertAtHead(){
	SYM *travel = var_linkedlist;
	while (travel != NULL){
		travel = travel->next;
	}
}




/*
0 - noob
1 - numbr or numbar
2 - yarn
3 - troof

*/
