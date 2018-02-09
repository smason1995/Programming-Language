%{
    #include<stdio.h>
%}

%option noyywrap

SPACE " "
TAB "\t"

%%

"%".* {/*ignore comment*/}

[ \t]+ {/*ignore whitespace*/}

[0-9]*[.][0-9]+ {return 101;}

"+" {return 102;}

"-" {return 103;}

"/" {return 104;}

"*" {return 105;}

"<" {return 106;}

">" {return 107;}

"<=" {return 108;}

">=" {return 109;}

"==" {return 110;}

"!=" {return 111;}

"&&" {return 112;}

"||" {return 113;}

"!" {return 114;}

";" {return 115;}

":=" {return 116;}

"(" {return 117;}

")" {return 118;}

"begin" {return 119;}

"end" {return 120;}

"if" {return 121;}

"then" {return 122;}

"else" {return 123;}

"while" {return 124;}

"do" {return 125;}

"print" {return 126;}

"input" {return 127;}

[_A-Za-z][_A-Za-z0-9]* {return 100;}

. {return 999;}

%%

int main(int argc, char *argv[]){
    extern FILE *yyin;
    int token;
    yyin = fopen(argv[1], "r");
    printf("%c", argv[0]);
    do{
        token = yylex();
        if(token == 999){
            printf("Error: invalid lexeme '%s'.\n", yytext);
            token = 0;
        }
        else{
            printf("\n%d\n", token);
        }
    }while(token != 0);
    return 0;
}
