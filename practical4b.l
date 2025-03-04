%option noyywrap
%{
    #include<stdio.h>
    int v=0,c=0;
%}
%%
charusat {printf("University");}
. {printf("%c",yytext[0]);}
%%

int main(){
    printf("enter String");
    yylex();
    return 0;
}
