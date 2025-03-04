%{
    #include<stdio.h>
    int cap=0,small=0,digit=0,special=0,len=0,ec=0;
%}
%%
[A-Z] {cap++ , len+=yyleng;}
[a-z] {small++ , len+=yyleng;}
[0-9] {digit++ , len+=yyleng;}
[*;#$@] {special++ , len+=yyleng;}
[\n]   { if(len>=9 && len<=15 && cap>=1 && small>=1 && digit>=1 && special>=1 && ec==0 )
        printf("Password is valid\n");
    else{
        printf("Password is not valid\n");
    }
    
      cap=0,small=0,digit=0,special=0,len=0,ec=0;  
        }

. {ec++, len+=yyleng;}

%%

int main(){
    printf("Password ");
    yylex();
    return 0;
}

int yywrap(){

}