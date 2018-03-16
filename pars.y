%{
    #include<stdio.h>
    #include<stdlib.h>
    #include<assert.h>
    #include<string.h>

    #define SIZE 50
    #define CHLDRN 3

    int yywrap();

    void yyerror(const char* s);

    int first = 0;

    double result = 0;

    typedef struct node{
        int type;
        double data;
        char id[SIZE];
        int children_num;
        struct node* children[CHLDRN];
<<<<<<< HEAD
    }node;
=======
    };
>>>>>>> cadac23c9847b5acd016b5bc47a8a4ed05210f99

    typedef struct{
        char name[SIZE];
        double data;
    }Symbol;

    struct node* tree;
    struct node* part1;
    struct node* part2;
    struct node* if_stmt;
    Symbol table[100];

    void attach(struct node*, struct node*);

    struct node* make(int, double,char*);

    void use(struct node*);

    void add(char*, double);

    double get(char*);
%}

%union{
    char vname[50];
    double dval;
    struct node* node;
}

/* operators */
%left OPEN_PARENS CLOSE_PARENS
%left OR
%left AND
%left LT LTE GT GTE EQUALS NE
%left PLUS MINUS
%left TIMES DIVIDE
%left NOT

/* tokens */
%token <vname> VAR 100
%token <dval> VAL 101
%token PLUS 102
%token MINUS 103
%token DIVIDE 104
%token TIMES 105
%token LT 106
%token GT 107
%token LTE 108
%token GTE 109
%token EQUALS 110
%token NE 111
%token AND 112
%token OR 113
%token NOT 114
<<<<<<< HEAD
%token IS 116
%token OPEN_PARENS 117
%token CLOSE_PARENS 118
%token BEGIN_BEGIN 119
=======
%token DONE 115
%token IS 116
%token OPEN_PARENS 117
%token CLOSE_PARENS 118
%token BEGIN 119
>>>>>>> cadac23c9847b5acd016b5bc47a8a4ed05210f99
%token END 120
%token IF 121
%token THEN 122
%token ELSE 123
%token WHILE 124
%token DO 125
%token PRINT 126
%token <dval> INPUT 127
%token INVALID 999
%token STATEMENT
%token ASSIGN
%token IDENTIFIER

/* types */
%type <node> tree stmt stmts expr pers term1 term2 term3 term4 term5 term6

/*error messages */
%error-verbose

%%

/* tree */
tree: stmt {tree = $$;}

/* statement */
stmt: stmts stmt{
        if(first == 0){
            $$ = make(STATEMENT, 0, "");
            attach($$, $1);
            attach($$, $2);
        }
        else{
            first = 0;
        }
    }
    | {$$ = NULL;}

/* ':=' operator */
<<<<<<< HEAD
stmts: expr IS expr {
=======
stmts: expr IS expr DONE{
>>>>>>> cadac23c9847b5acd016b5bc47a8a4ed05210f99
        $$ = make(ASSIGN, 0, "");
        attach($$, $1);
        attach($$, $3);
    }

/* 'if' statements */
stmts: IF expr THEN stmts{
        $$ = make(IF, 0, "");
        part1 = make(STATEMENT, 0, "");
        attach($$, $2);
        attach($$, $4);
        attach($$, part1);
    }

/* 'if-else' statements */
stmts: IF expr THEN stmts ELSE stmts{
        $$ = make(STATEMENT, 0, "");
        if_stmt = make(IF, 0, "");
        part1 = make(STATEMENT, 0, "");
        part2 = make(STATEMENT, 0, "");
        attach(if_stmt, $2);
        attach(part1, $4);
        attach(part2, $6);
        attach(if_stmt, part1);
        attach(if_stmt, part2);
        attach($$, if_stmt);
        first = 1;
    }

/* 'while' loops */
stmts: WHILE expr DO stmts{
        $$ = make(WHILE, 0, "");
        attach($$, $2);
        attach($$, $4);
    }

/* 'print' statments */
<<<<<<< HEAD
stmts: PRINT expr {
=======
stmts: PRINT expr DONE{
>>>>>>> cadac23c9847b5acd016b5bc47a8a4ed05210f99
        $$ = make(PRINT, 0, "");
        attach($$, $2);
    }

/* 'begin-end' blocks */
<<<<<<< HEAD
stmts: BEGIN_BEGIN stmt END{
=======
stmts: BEGIN stmt END{
>>>>>>> cadac23c9847b5acd016b5bc47a8a4ed05210f99
        $$ = $2;
    }

/* parentheses */
expr: OPEN_PARENS pers CLOSE_PARENS{$$ = $2;}
    | pers{$$ = $1;}

/* '||' operator */
pers: pers OR term1{
        $$ = make(OR, 0, "");
        attach($$, $1);
        attach($$, $3);
    }
    | pers OR OPEN_PARENS pers CLOSE_PARENS{
        $$ = make(OR, 0, "");
        attach($$, $1);
        attach($$, $4);
    }
    | OPEN_PARENS pers CLOSE_PARENS OR term1{
        $$ = make(OR, 0, "");
        attach($$, $2);
        attach($$, $5);
    }
    | OPEN_PARENS pers CLOSE_PARENS OR OPEN_PARENS pers CLOSE_PARENS{
        $$ = make(OR, 0, "");
        attach($$, $2);
        attach($$, $6);
    }
    |term1{$$ = $1;}

/* '&&' operator */
term1: term1 AND term2{
        $$ = make(AND, 0, "");
        attach($$, $1);
        attach($$, $3);
    }
    | term1 AND OPEN_PARENS pers CLOSE_PARENS{
        $$ = make(AND, 0, "");
        attach($$, $1);
        attach($$, $4);
    }
    | OPEN_PARENS pers CLOSE_PARENS AND term1 {
        $$ = make(AND, 0, "");
        attach($$, $2);
        attach($$, $5);
    }
    | OPEN_PARENS pers CLOSE_PARENS AND OPEN_PARENS pers CLOSE_PARENS {
        $$ = make(AND, 0, "");
        attach($$, $2);
        attach($$, $6);
    }
    | term2{$$ = $1;}

/* Comparator operators */
term2: term2 LT term3 {
        $$ = make(LT, 0, "");
        attach($$, $1);
        attach($$, $3);
    }
    | term2 LT OPEN_PARENS pers CLOSE_PARENS{
        $$ = make(LT, 0, "");
        attach($$, $1);
        attach($$, $4);
    }
    | OPEN_PARENS pers CLOSE_PARENS LT term3 {
        $$ = make(LT, 0, "");
        attach($$, $2);
        attach($$, $5);
    }
    | OPEN_PARENS pers CLOSE_PARENS LT OPEN_PARENS pers CLOSE_PARENS {
        $$ = make(LT, 0, "");
        attach($$, $2);
        attach($$, $6);
    }
    | term2 LTE term3 {  
        $$ = make(LTE, 0, "");
        attach($$, $1);
        attach($$, $3);
    }
    | term2 LTE OPEN_PARENS pers CLOSE_PARENS{
        $$ = make(LTE, 0, "");
        attach($$, $1);
        attach($$, $4);   
    }
    | OPEN_PARENS pers CLOSE_PARENS LTE term3 {
        $$ = make(LTE, 0, "");
        attach($$, $2);
        attach($$, $5);
    }
    | OPEN_PARENS pers CLOSE_PARENS LTE OPEN_PARENS pers CLOSE_PARENS {
        $$ = make(LTE, 0, "");
        attach($$, $2);
        attach($$, $6);
    }
    | term2 GT term3 { 
        $$ = make(GT, 0, "");
        attach($$, $1);
        attach($$, $3);   
    }
    |  term2 GT OPEN_PARENS pers CLOSE_PARENS{
        $$ = make(GT, 0, "");
        attach($$, $1);
        attach($$, $4);
    }
    | OPEN_PARENS pers CLOSE_PARENS GT term3 {
        $$ = make(GT, 0, "");
        attach($$, $2);
        attach($$, $5);
    }
    | OPEN_PARENS pers CLOSE_PARENS GT OPEN_PARENS pers CLOSE_PARENS {
        $$ = make(GT, 0, "");
        attach($$, $2);
        attach($$, $6);
    } 
    | term2 GTE term3 {       
        $$ = make(GTE, 0, "");
        attach($$, $1);
        attach($$, $3);
    }       
    |  term2 GTE OPEN_PARENS pers CLOSE_PARENS{
        $$ = make(GTE, 0, "");
        attach($$, $1);
        attach($$, $4);
    }
    | OPEN_PARENS pers CLOSE_PARENS GTE term3 {
        $$ = make(GTE, 0, "");
        attach($$, $2);
        attach($$, $5);
    }
    | OPEN_PARENS pers CLOSE_PARENS GTE OPEN_PARENS pers CLOSE_PARENS {
        $$ = make(GTE, 0, "");
        attach($$, $2);
        attach($$, $6);
    }
    | term2 EQUALS term3 {  
        $$ = make(EQUALS, 0, "");
        attach($$, $1);
        attach($$, $3);
    } 
    | term2 EQUALS OPEN_PARENS pers CLOSE_PARENS{
        $$ = make(EQUALS, 0, "");
        attach($$, $1);
        attach($$, $4);
    }
    | OPEN_PARENS pers CLOSE_PARENS EQUALS term3 {
        $$ = make(EQUALS, 0, "");
        attach($$, $2);
        attach($$, $5);
    }
    | OPEN_PARENS pers CLOSE_PARENS EQUALS OPEN_PARENS pers CLOSE_PARENS {
        $$ = make(EQUALS, 0, "");
        attach($$, $2);
        attach($$, $6);
    }
    | term2 NE term3 { 
        $$ = make(NE, 0, "");
        attach($$, $1);
        attach($$, $3);
    } 
    |  term2 NE OPEN_PARENS pers CLOSE_PARENS{
        $$ = make(NE, 0, "");
        attach($$, $1);
        attach($$, $4);
    }
    | OPEN_PARENS pers CLOSE_PARENS NE term3 {
        $$ = make(NE, 0, "");
        attach($$, $2);
        attach($$, $5);
    }
    | OPEN_PARENS pers CLOSE_PARENS NE OPEN_PARENS pers CLOSE_PARENS {
        $$ = make(NE, 0, "");
        attach($$, $2);
        attach($$, $6);
    }
    | term3 {$$ = $1;}

/* '+' and '-' operators */
term3: term3 PLUS term4 {
        $$ = make(PLUS, 0, "");
        attach($$, $1);
        attach($$, $3);
    }
    | term3 PLUS OPEN_PARENS pers CLOSE_PARENS{
        $$ = make(PLUS, 0, "");
        attach($$, $1);
        attach($$, $4);
    }
    | OPEN_PARENS pers CLOSE_PARENS PLUS term4 {
        $$ = make(PLUS, 0, "");
        attach($$, $2);
        attach($$, $5);
    }
    | OPEN_PARENS pers CLOSE_PARENS PLUS OPEN_PARENS pers CLOSE_PARENS {
        $$ = make(PLUS, 0, "");
        attach($$, $2);
        attach($$, $6);
    }
    | term3 MINUS term4 {
        $$ = make(MINUS, 0, "");
        attach($$, $1);
        attach($$, $3);
    }
    | term3 MINUS OPEN_PARENS pers CLOSE_PARENS{
        $$ = make(MINUS, 0, "");
        attach($$, $1);
        attach($$, $4);
    }
    | OPEN_PARENS pers CLOSE_PARENS MINUS term4 {
        $$ = make(MINUS, 0, "");
        attach($$, $2);
        attach($$, $5);
    }
    | OPEN_PARENS pers CLOSE_PARENS MINUS OPEN_PARENS pers CLOSE_PARENS {
        $$ = make(MINUS, 0, "");
        attach($$, $2);
        attach($$, $6);
    } 
    | term4 {$$ = $1;}

/* '*' and '/' operators */
term4: term4 TIMES term5 {
        $$ = make(TIMES, 0, "");
        attach($$, $1);
        attach($$, $3);
    }
    | term4 TIMES OPEN_PARENS pers CLOSE_PARENS {
        $$ = make(TIMES, 0, "");
        attach($$, $1);
        attach($$, $4);
    }
    | OPEN_PARENS pers CLOSE_PARENS TIMES term5{
        $$ = make(TIMES, 0,"");
        attach($$, $2);
        attach($$, $5);
    }
    | OPEN_PARENS pers CLOSE_PARENS TIMES OPEN_PARENS pers CLOSE_PARENS {
        $$ = make(TIMES, 0, "");
        attach($$,$2);
        attach($$, $6);
    } 
    | term4 DIVIDE term5 {
        $$ = make(DIVIDE, 0, "");
        attach($$, $1);
        attach($$, $3);
    }
    | term4 DIVIDE OPEN_PARENS pers CLOSE_PARENS{
        $$ = make(DIVIDE, 0, "");
        attach($$, $1);
        attach($$, $4);
    }
    | OPEN_PARENS pers CLOSE_PARENS DIVIDE term5 {
        $$ = make(DIVIDE, 0, "");
        attach($$, $2);
        attach($$, $5);
    }
    | OPEN_PARENS pers CLOSE_PARENS DIVIDE OPEN_PARENS pers CLOSE_PARENS {
        $$ = make(DIVIDE, 0, "");
        attach($$, $2);
        attach($$, $6);
    }
    | term5 {$$ = $1;}

/* NOT OPERATOR */
term5: NOT term5 {
        $$ = make(NOT, 0, "");
        attach($$, $2);
    }
    | NOT OPEN_PARENS pers CLOSE_PARENS{
        $$ = make(NOT, 0, "");
        attach($$, $3);
    }
    | term6 {$$=$1;}

/* VALUES */
term6: VAL {
        $$ = make(VAL, $1, "");
    } 
    | VAR {
        $$ = make(IDENTIFIER, 0, $1);
    } 
    | INPUT {
        $$ = make(INPUT, INPUT, "");
    }

%%
int numSymbols = 0;


int yywrap(){
    return 1;
}

void yyerror(const char* str){
    fprintf(stderr, "Error: '%s'.\n", str);
}

struct node* make(int type, double value, char* id) {
    int i;

    struct node* node = malloc(sizeof(struct node));

    node->type = type;
    node->data = value;
    strcpy(node->id, id);
    node->children_num = 0;
    for(i = 0; i < CHLDRN; i++) {
        node->children[i] = NULL;
    }

    return node;
}

void attach(struct node* parent, struct node* child) {
  /* connect it */
    parent->children[parent->children_num] = child;
    parent->children_num++;
    assert(parent->children_num <= CHLDRN);
}


double get(char* name){
    int i;
    for(i = 0; i<numSymbols; i++){
        if((!strcmp(table[i].name, name)) > 0){
            return table[i].data;                        
		}
	}
}

void add(char* name, double value){
    strcpy(table[numSymbols].name, name);
    table[numSymbols].data = value;
    numSymbols++;
}

int inTable(char* name){
    int x;
    for(x=0; x<numSymbols; x++){
	    if((!strcmp(table[x].name, name))>0 ){
		    return x;
		}
    }
	return -1;
}

double evalExpression(struct node* node){
    int b;
    double z[2];
    double d;
    switch(node->type) {
        case IDENTIFIER: 
                return get(node->id);
                break;
        case VAL: 
<<<<<<< HEAD
                printf("\n%9.6f\n",node->data);
=======
>>>>>>> cadac23c9847b5acd016b5bc47a8a4ed05210f99
                return node->data;
                break;
        case PLUS: 
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return z[0] + z[1];
                break;
        case MINUS: 
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return z[0] - z[1];
                break;
        case DIVIDE: 
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return z[0] / z[1];
                break;
        case TIMES: 
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return z[0] * z[1];
                break;
        case LT: 
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return (z[0] < z[1]);
                break;
        case GT: 
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return (z[0] > z[1]);
                break;
        case LTE: 
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return (z[0] <= z[1]);
                break;
        case GTE: 
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return (z[0] >= z[1]);
                break;
        case EQUALS:
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return (z[0] == z[1]);
                break;
        case NE: 
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return (z[0] != z[1]);
                break;
        case AND:
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return (z[0] && z[1]);
                break;
        case OR:
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return (z[0] || z[1]);
                break;
        case NOT:
                for(b=0; b<node->children_num; b++){
                    z[b] = evalExpression(node->children[b]);
                }
                return !z[0];
                break;
        case INPUT: 		
			    printf("Input Value: ");
				scanf("%lg", &d);
				return d;
				break;
        default:
                printf("Error, %d not a valid node type for an expression.\n", node->type);
                exit(1);
    }
}
        
void evalStatement(struct node* node){
	int x;
        switch(node->type){
            case PRINT:  
                printf("%9.6f\n",evalExpression(node->children[0]));
                break;
            case IF: 
		        if(evalExpression(node->children[0])){
			        evalStatement(node->children[1]);
		        }
		        else if(node->children[2] != NULL){
			        evalStatement(node->children[2]);
		        }
		        break;
	        case STATEMENT:
		        for(x=0; x < node->children_num; x++){
			        if(node->children[x] != NULL){
				        evalStatement(node->children[x]);
			        }
		        }
		        break;
	        case WHILE: 
		        while(evalExpression(node->children[0])){
			        evalStatement(node->children[1]);
		        }
		        break;
	        case ASSIGN:
		        if((x = inTable(node->children[0]->id)) >= 0){
			        table[x].data = evalExpression(node->children[1]);
		        }
		        else{
			        add(node->children[0]->id, evalExpression(node->children[1]));
		        }
		        break;
	
	        default:
      		    printf("Error, %d not a valid node type for a statement.\n", node->type);
      		    exit(1);
	    }
    }

        
void use(struct node* node){
    if(!node) return;
  
    if(node->type == STATEMENT){
		if(node->children[0] != NULL){
			evalStatement(node->children[0]);
		}
		if(node->children[1]!=NULL){
        	evalStatement(node->children[1]);
		}
    }
    else{
        printf("first node in tree is not a statement");
    }
}

int main(int argc, char *argv[]){
    extern FILE *stdin;

    stdin = fopen(argv[1], "r");
    yyparse();
    fclose(stdin);
    use(tree);
    return 0;
}
