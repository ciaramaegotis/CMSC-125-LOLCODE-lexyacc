%{
int yylineno;
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
int c;
extern FILE *yyin;
%}

%%
(I) {return I; }
(HAS) { return HAS;}
(A) { return A;}
(ITZ) { return ITZ;}
(R) { return R;}
(OF) { return OF;}
(AN) {return AN;}
(SUM) {return SUM;}
(DIFF) {return DIFF;}
(QUOSHUNT) {return QUOSHUNT;}
(PRODUKT) {return PRODUKT;}
(MOD) {return MOD;}
(BIGGR) { return BIGGR;}
(SMALLR) { return SMALLR;}
(BOTH) { return BOTH;}
(EITHER) { return EITHER;}
(WON) { return WON;}
(NOT) { return NOT;}
(ANY) { return ANY;}
(ALL) { return ALL;}
(SAEM) { return SAEM;}
(DIFFRINT) { return DIFFRINT;}
(SMOOSH) {return SMOOSH;}
(MAEK) { return MAEK;}
(IS)  {return IS;}
(NOW) { return NOW;}
(VISIBLE) {return VISIBLE;}
(GIMMEH) { return GIMMEH;}
(O) {return O;}
(RLY) { return RLY;}
(RLY\?) { return RLY_Q;}
(YA)  {return YA;}
(MEBBE) { return MEBBE;}
(NO)  {return NO;}
(WAI) { return WAI;}
(OIC)  { return OIC;}
(WTF?)  { return WTF_Q;}
(OMG)  { return OMG;}
(OMGWTF)  { return OMGWTF;}
(IM) {return IM;}
(IN)  {return IN;}
(YR)   {return YR;}
(UPPIN)  { return UPPIN;}
(NERFIN)  {  return NERFIN;}
(TIL)  { return TIL;}
(WILE)  {return WILE;}
(OUTTA) { return OUTTA;}
(MKAY) { return MKAY;}
("WIN"|"FAIL") {
			if (strcmp(yytext, "WIN") == 0){
				yylval.number = 1;
			}else{
				yylval.number = 0;
			}
			return TROOF_LITERAL;}
((NUMBR)|(NUMBAR)|(YARN)|(TROOF)) { 
									yylval.string = strdup(yytext);
									return TYPE_LITERAL;}
(-?[0-9]+) {
			yylval.number = atoi(yytext);
			return NUMBR;}
(-?[0-9]+\.[0-9]+) {
					yylval.floatnum = atof(yytext);		
					return NUMBAR;}
(\"(\\.|[^"\\])*\") {
		yylval.string = strdup(yytext);
		return YARN_LITERAL;}
(HAI) { return HAI;}
(KTHXBYE) { return KTHXBYE;}
([a-zA-Z]{1}[a-zA-Z]+) {
                          yylval.string = strdup(yytext);
                         return IDENTIFIER;
                          }
%%
