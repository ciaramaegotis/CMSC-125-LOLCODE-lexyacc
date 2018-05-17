%{
int yylineno;
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
int c;
extern FILE *yyin;
%}

%%
(I) {printf("keyword:\tI\n"); return I; }
(HAS) {printf("keyword: HAS\n"); return HAS;}
(A) {printf("keyword: A\n"); return A;}
(ITZ) {printf("keyword: ITZ\n"); return ITZ;}
(R) {printf("keyword: R\n"); return R;}
(OF) {printf("keyword: OF\n"); return OF;}
(AN) {printf("keyword: AN\n"); return AN;}
(SUM) {printf("keyword: addition\n"); return SUM;}
(DIFF) {printf("keyword: subtraction\n"); return DIFF;}
(QUOSHUNT) {printf("keyword: division\n"); return QUOSHUNT;}
(PRODUKT) {printf("keyword: multiplication\n"); return PRODUKT;}
(MOD) {printf("keyword: modulo\n"); return MOD;}
(BIGGR) {printf("keyword: BIGGR\n"); return BIGGR;}
(SMALLR) {printf("keyword: SMALLR\n"); return SMALLR;}
(BOTH) {printf("keyword: BOTH\n"); return BOTH;}
(EITHER) {printf("keyword: EITHER\n"); return EITHER;}
(WON) {printf("keyword: WON\n"); return WON;}
(NOT) {printf("keyword: NOT\n"); return NOT;}
(ANY) {printf("keyword: ANY\n"); return ANY;}
(ALL) {printf("keyword: ALL\n"); return ALL;}
(SAEM) {printf("keyword: SAEM\n"); return SAEM;}
(DIFFRINT) {printf("keyword: DIFFRINT\n"); return DIFFRINT;}
(SMOOSH) {printf("keyword: SMOOSH\n"); return SMOOSH;}
(MAEK) {printf("keyword: MAEK\n"); return MAEK;}
(IS) {printf("keyword: IS\n"); return IS;}
(NOW) {printf("keyword: NOW\n"); return NOW;}
(VISIBLE) {printf("keyword: VISIBLE\n"); return VISIBLE;}
(GIMMEH) {printf("keyword: GIMMEH\n"); return GIMMEH;}
(O) {printf("keyword: O\n"); return O;}
(RLY) {printf("keyword: RLY\n"); return RLY;}
(RLY\?) {printf("keyword: RLY?\n"); return RLY_Q;}
(YA) {printf("keyword: YA\n"); return YA;}
(MEBBE) {printf("keyword: MEBBE\n"); return MEBBE;}
(NO) {printf("keyword: NO\n"); return NO;}
(WAI) {printf("keyword: WAI\n"); return WAI;}
(OIC)  {printf("keyword: OIC\n"); return OIC;}
(WTF?)  {printf("keyword: WTF?\n"); return WTF_Q;}
(OMG)  {printf("keyword: OMG\n"); return OMG;}
(OMGWTF)  {printf("keyword: OMGWTF\n"); return OMGWTF;}
(IM) {printf("keyowrd: IM\n"); return IM;}
(IN) {printf("keyword: IN\n"); return IN;}
(YR)  {printf("keyword: YR\n"); return YR;}
(UPPIN)  {printf("keyword: UPPIN\n"); return UPPIN;}
(NERFIN)  {printf("keyword: NERFIN\n");  return NERFIN;}
(TIL)  {printf("keyword: TIL\n"); return TIL;}
(WILE)  {printf("keyword: WILE\n"); return WILE;}
(OUTTA) {printf("keyword: OUTTA\n"); return OUTTA;}
(WIN|FAIL) {printf("TROOF LITERAL"); return TROOF_LITERAL;}
((NUMBR)|(NUMBAR)|(YARN)|(TROOF)) {printf("TYPE LITERAL"); return TYPE_LITERAL;}
(-?[0-9]+) {printf("NUMBR LITERAL"); 
			yylval.number = atoi(yytext);
			return NUMBR;}
(-?[0-9]+\.[0-9]+) {printf("NUMBAR LITERAL"); 
					yylval.floatnum = atof(yytext);		
					return NUMBAR;}
(\".*\") {printf("YARN LITERAL"); 
		yylval.string = yytext;
		return YARN_LITERAL;}
(HAI) {printf("keyword: HAI\n"); return HAI;}
(KTHXBYE) {printf("keyword: KTHXBYE\n"); return KTHXBYE;}
([a-zA-Z]{1}[a-zA-Z]+) {
                          yylval.string = strdup(yytext);
                         return IDENTIFIER;
                          }
%%
