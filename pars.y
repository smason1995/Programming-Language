%{
    #include<stdio.h>
    #include<stdlib.h>

    int yywrap();

    void yyerror(const char* s);

    double result = 0;
%}

%union{
    double dval;
}

%token <dval> 101
%token 102
%token 103
%token 104
%token 105
%token 106
%token 107
%token 108
%token 109
%token 110
%token 111
%token 112
%token 113
%token 114
%token 115
%token 116
%token 117
%token 118
%token 119
%token 120
%token 121
%token 122
%token 123
%token 124
%token 125
%token 126
%token 127
%token 100
%token 999
