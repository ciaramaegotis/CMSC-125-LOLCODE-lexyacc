%{
int yylineno;
%}
%%
(I) printf("keyword: I\t");
(HAS) printf("keyword: HAS\t");
(A) printf("keyword: A\t");
(ITZ) printf("keyword: ITZ\t");
(R) printf("keyword: R\t");
(OF) printf("keyword: OF\t");
(AN) printf("keyword: AN\t");
(SUM) printf("keyword: addition\t");
(DIFF) printf("keyword: subtraction\t");
(QUOSHUNT) printf("keyword: division\t");
(PRODUKT) printf("keyword: multiplication\t");
(MOD) printf("keyword: modulo\t");
(BIGGR) printf("keyword: BIGGR\t");
(SMALLR) printf("keyword: SMALLR\t");
(BOTH) printf("keyword: BOTH\t");
(EITHER) printf("keyword: EITHER\t");
(WON) printf("keyword: WON\t");
(NOT) printf("keyword: NOT\t");
(ANY) printf("keyword: ANY\t");
(ALL) printf("keyword: ALL\t");
(SAEM) printf("keyword: SAEM\t");
(DIFFRINT) printf("keyword: DIFFRINT\t");
(SMOOSH) printf("keyword: SMOOSH\t");
(MAEK) printf("keyword: MAEK\t");
(IS) printf("keyword: IS\t");
(NOW) printf("keyword: NOW\t");
(VISIBLE) printf("keyword: VISIBLE\t");
(GIMMEH) printf("keyword: GIMMEH\t");
(O) printf("keyword: O\t");
(RLY) printf("keyword: RLY\t");
(RLY\?) printf("keyword: RLY?\t");
(YA) printf("keyword: YA\t");
(MEBBE) printf("keyword: MEBBE\t");
(NO) printf("keyword: NO\t");
(WAI) printf("keyword: WAI\t");
(OIC)  printf("keyword: OIC\t"); 
(WTF?)  printf("keyword: WTF?\t"); 
(OMG)  printf("keyword: OMG\t"); 
(OMGWTF)  printf("keyword: OMGWTF\t"); 
(IM) printf("keyowrd: IM\t");
(IN) printf("keyword: IN\t");
(YR)  printf("keyword: YR\t"); 
(UPPIN)  printf("keyword: UPPIN\t"); 
(NERFIN)  printf("keyword: NERFIN\t");  
(TIL)  printf("keyword: TIL\t"); 
(WILE)  printf("keyword: WILE\t"); 
(OUTTA) printf("keyword: OUTTA\t");
(WIN|FAIL) printf("TROOF LITERAL");
((NUMBR)|(NUMBAR)|(YARN)|(TROOF)) printf("TYPE LITERAL");
(-?[0-9]+) printf("NUMBR LITERAL");
(-?[0-9]+\.[0-9]+) printf("NUMBAR LITERAL");
(\".*\") printf("YARN LITERAL");
(HAI) printf("keyword: HAI\t");
(KTHXBYE) printf("keyword: KTHXBYE\t");
([a-zA-Z]{1}[a-zA-Z]+) printf("IDENTIFIER");
%%
int main(int argc, char *argv[]) {
	yyin = fopen(argv[1], "r");
	yylex();
	fclose(yyin);
}