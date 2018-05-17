%{
#include <stdio.h>
#include <stdlib.h>
#include "symboltable.h"
extern FILE *yyin;
int regs[26];
float ITValue[100];
int troof_IT[100];
int currentIndexofTroof = 0;
int currentIndexofIT = 0;
int isFirstVariable = 1;
%}


%token I OUTTA OF AN HAI KTHXBYE HAS A ITZ SUM DIFF QUOSHUNT PRODUKT MOD SMALLR BIGGR R SMOOSH VISIBLE BOTH EITHER NOT WON ANY ALL SAEM DIFFRINT MAEK IS NOW GIMMEH O RLY YA OMG OMGWTF MEBBE NO WAI OIC WILE TIL UPPIN NERFIN WTF IM IN YR RLY_Q WTF_Q
%union{
  int number;
  char *string;
  float floatnum;
}
%token <string> IDENTIFIER
%token <number> NUMBR
%token <floatnum> NUMBAR
%token <string> YARN_LITERAL
%token <string> TROOF_LITERAL
%token <string> TYPE_LITERAL

%left '|'
%left '&'
%left '+' '-'
%left '*' '/' '%'
%left UMINUS  /*supplies precedence for unary minus */
%%                   /* beginning of rules section */

program: HAI program_body KTHXBYE
         {
          printf("Note: valid program");
         };

variable_declaration: I HAS A IDENTIFIER
                      {
                        SYM *new_var = (SYM *) malloc(sizeof(SYM));
                        new_var->type = 0;
                        new_var->variable_name = $4;
                        new_var->next = NULL;

                        if (isFirstVariable == 1){
                          var_linkedlist = new_var;
                          isFirstVariable = 0;
                        }else{
                          insertAtHead(new_var);
                        }
                      }
                      |
                      I HAS A IDENTIFIER ITZ YARN_LITERAL
                      {
                        SYM *new_var = (SYM *) malloc(sizeof(SYM));
                        new_var->type = 2;
                        new_var->yarnValue = $6;
                        new_var->variable_name = $4;
                        new_var->next = NULL;

                        if (isFirstVariable == 1){
                          var_linkedlist = new_var;
                          isFirstVariable = 0;
                        }else{
                          insertAtHead(new_var);
                        }
                      }
                      |
                      I HAS A IDENTIFIER ITZ concatenation
                      |
                      I HAS A IDENTIFIER ITZ number_expression{
                          SYM *new_var = (SYM *) malloc(sizeof(SYM));
                          new_var->type = 1;
                          new_var->floatValue = ITValue[currentIndexofIT-1];
                          new_var->variable_name = $4;
                          new_var->next = NULL;

                          if (isFirstVariable == 1){
                            var_linkedlist = new_var;
                            isFirstVariable = 0;
                          }else{
                            insertAtHead(new_var);
                          }
                      }
                      |
                      I HAS A IDENTIFIER ITZ troof_expression{
                          SYM *new_var = (SYM *) malloc(sizeof(SYM));
                          new_var->type = 3;
                          new_var->floatValue = troof_IT[currentIndexofTroof-1];
                          new_var->variable_name = $4;
                          new_var->next = NULL;

                          if (isFirstVariable == 1){
                            var_linkedlist = new_var;
                            isFirstVariable = 0;
                          }else{
                            insertAtHead(new_var);
                          }
                      }
                      |
                      I HAS A IDENTIFIER ITZ A TYPE_LITERAL
                      {
                        if (strcmp($7, "YARN") == 0){
                          SYM *new_var = (SYM *) malloc(sizeof(SYM));
                          new_var->type = 2;
                          new_var->variable_name = $4;
                          new_var->next = NULL;

                          if (isFirstVariable == 1){
                            var_linkedlist = new_var;
                            isFirstVariable = 0;
                          }else{
                            insertAtHead(new_var);
                          }
                          
                        }else if(strcmp($7, "NUMBR") == 0 || strcmp($7, "NUMBAR") == 0){
                          SYM *new_var = (SYM *) malloc(sizeof(SYM));
                          new_var->type = 1;
                          new_var->variable_name = $4;
                          new_var->next = NULL;

                          if (isFirstVariable == 1){
                            var_linkedlist = new_var;
                            isFirstVariable = 0;
                          }else{
                            insertAtHead(new_var);
                          }
                        }else if(strcmp($7, "TROOF") == 0){
                          SYM *new_var = (SYM *) malloc(sizeof(SYM));
                          new_var->type = 3;
                          new_var->variable_name = $4;
                          new_var->next = NULL;

                          if (isFirstVariable == 1){
                            var_linkedlist = new_var;
                            isFirstVariable = 0;
                          }else{
                            insertAtHead(new_var);
                          }
                        }else if(strcmp($7, "NOOB") == 0){
                          SYM *new_var = (SYM *) malloc(sizeof(SYM));
                          new_var->type = 0;
                          new_var->variable_name = $4;
                          new_var->next = NULL;

                          if (isFirstVariable == 1){
                            var_linkedlist = new_var;
                            isFirstVariable = 0;
                          }else{
                            insertAtHead(new_var);
                          }
                        }
                      }

number_expression: SUM OF number_expression AN number_expression
                    {
                      printf("\nAnswer: %f\n", ITValue[currentIndexofIT-2] + ITValue[currentIndexofIT-1]);
                      ITValue[currentIndexofIT-2] = ITValue[currentIndexofIT-2] + ITValue[currentIndexofIT-1];
                      currentIndexofIT--;
                    }
                   |
                   DIFF OF number_expression AN number_expression
                   {
                      printf("\nAnswer: %f\n", ITValue[currentIndexofIT-2] - ITValue[currentIndexofIT-1]);
                      ITValue[currentIndexofIT-2] = ITValue[currentIndexofIT-2] - ITValue[currentIndexofIT-1];
                      currentIndexofIT--;
                   }
                   |
                   PRODUKT OF number_expression AN number_expression
                   {
                      printf("\nAnswer: %f\n", ITValue[currentIndexofIT-2] * ITValue[currentIndexofIT-1]);
                      ITValue[currentIndexofIT-2] = ITValue[currentIndexofIT-2] * ITValue[currentIndexofIT-1];
                      currentIndexofIT--;
                   }
                   |
                   QUOSHUNT OF number_expression AN number_expression
                   {
                      printf("\nAnswer: %f\n", ITValue[currentIndexofIT-2] / ITValue[currentIndexofIT-1]);
                      ITValue[currentIndexofIT-2] = ITValue[currentIndexofIT-2] / ITValue[currentIndexofIT-1];
                      currentIndexofIT--;
                   }
                   |
                   MOD OF number_expression AN number_expression
                   {
                      printf("\nAnswer: %f\n", (int)ITValue[currentIndexofIT-2] % (int)ITValue[currentIndexofIT-1]);
                      ITValue[currentIndexofIT-2] = (int) ITValue[currentIndexofIT-2] % (int) ITValue[currentIndexofIT-1];
                      currentIndexofIT--;               
                   }
                   |
                   BIGGR OF number_expression AN number_expression
                   {
                      printf("\nAnswer: %f\n", ITValue[currentIndexofIT-2] > ITValue[currentIndexofIT-1] ? ITValue[currentIndexofIT-2]: ITValue[currentIndexofIT-1]);
                      ITValue[currentIndexofIT-2] = ITValue[currentIndexofIT-2] > ITValue[currentIndexofIT-1] ? ITValue[currentIndexofIT-2]: ITValue[currentIndexofIT-1];
                      currentIndexofIT--;     
                   }
                   |
                   SMALLR OF number_expression AN number_expression
                   {
                      printf("\nAnswer: %f\n", ITValue[currentIndexofIT-2] < ITValue[currentIndexofIT-1] ? ITValue[currentIndexofIT-2]: ITValue[currentIndexofIT-1]);
                      ITValue[currentIndexofIT-2] = ITValue[currentIndexofIT-2] < ITValue[currentIndexofIT-1] ? ITValue[currentIndexofIT-2]: ITValue[currentIndexofIT-1];
                      currentIndexofIT--; 
                   }
                   |
                   NUMBR
                   {
                    ITValue[currentIndexofIT] = $1;
                    ++currentIndexofIT;
                   }
                   |
                   NUMBAR
                   {
                    ITValue[currentIndexofIT] = $1;
                    ++currentIndexofIT;
                   }

troof_expression: TROOF_LITERAL
                  {

                    troof_IT[currentIndexofTroof] = $1;
                    ++currentIndexofTroof;
                  }
                  |
                  BOTH OF troof_expression AN troof_expression
                  {
                    if (troof_IT[currentIndexofTroof-2] == troof_IT[currentIndexofTroof-1]){
                      troof_IT[currentIndexofTroof-2] = 1;
                    }else{
                      troof_IT[currentIndexofTroof-2] = 0;
                    }
                    currentIndexofTroof--;
                  }
                  |
                  BOTH OF troof_expression troof_expression
                  |
                  EITHER OF troof_expression AN troof_expression
                  {
                    if (troof_IT[currentIndexofTroof-2] == 1 || troof_IT[currentIndexofTroof-1] == 1){
                      troof_IT[currentIndexofTroof-2] = 1;
                    }else{
                      troof_IT[currentIndexofTroof-2] =  0;
                    }
                    currentIndexofTroof--;
                  }
                  |
                  EITHER OF troof_expression troof_expression
                  |
                  NOT troof_expression
                  {
                    if (troof_IT[currentIndexofTroof-1] == 1){
                     troof_IT[currentIndexofTroof-1] = 0;
                    }else{
                      troof_IT[currentIndexofTroof-1] = 1;
                    }
                  }

conditional:

output: VISIBLE troof_expression
        {
          printf("\nPRINTING: %s\n", (troof_IT[currentIndexofTroof-1] == 1)? "WIN": "FAIL");
        }
        |
        VISIBLE number_expression
        {
          printf("\nPRINTING: %f\n", ITValue[currentIndexofIT-1]);
        }
        |
        VISIBLE IDENTIFIER
        {
          printVariable($2);
        }
        |
        VISIBLE YARN_LITERAL
        {
          printf("%s", $2);
        }
        |
        VISIBLE concatenation

concatenation:

variable_assignment:  IDENTIFIER R number_expression
                      {
                        int isValid = checkIfValidVariable($1, 1);
                        if (isValid == 1){
                          setNumbrVar($1, 1, ITValue[currentIndexofIT-1]);
                        }else{
                          printf("Syntax error. Error in initialization");
                          exit(0);
                        }
                      }
                      |
                      IDENTIFIER R troof_expression
                      {
                        int isValid = checkIfValidVariable($1, 3);
                        if (isValid == 1){
                          setTroofVar($1, 3, troof_IT[currentIndexofTroof-1]);
                        }else{
                          printf("Syntax error. Error in initialization");
                          exit(0);
                        }
                      }
                      |
                      IDENTIFIER R YARN_LITERAL
                      {
                        int isValid = checkIfValidVariable($1, 2);
                        if (isValid == 1){
                          setYarnVar($1, 2, $3);
                        }else{
                          printf("Syntax error. Error in initialization");
                          exit(0);
                        }
                      }
                      |
                      IDENTIFIER R concatenation

input: GIMMEH IDENTIFIER
        {

        }


end_case: number_expression
          |
          troof_expression
          |
          variable_declaration
          |
          variable_assignment
          |
          conditional
          |
          output
          |
          concatenation
          |
          input

program_body: end_case
              |
              program_body end_case

%%
main(int argc, char *argv[]){
 var_linkedlist = (SYM *)malloc(sizeof(SYM));
 yyin = fopen(argv[1], "r");
 return(yyparse());
}
yyerror(s)
char *s;
{
  fprintf(stderr, "%s\n",s);
}
yywrap()
{
  return(1);
}
