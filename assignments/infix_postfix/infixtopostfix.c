#include <stdio.h>
#include <ctype.h>

/*

	result = a + b * c ; // infix-expression
		b * c => M
	result = a + M

	prefix:
		result = a + b * c ; // infix-expression
			b * c => *bc => N
		result = a + N;
			a + N => +aN => O
		result = O;
			= +aN
			= +a*bc // prefix-expression
	postfix:
		result = a + b * c ; // infix-expression
			b * c => bc* => P
		result = a + P
			= aP+	=> Q
		result = Q
			= aP+
			= abc*+
		

*/
// --- globals ---
char postfix[25];
int pIndex = -1;


int stack[25];
int top = -1;

int stack_top() { return stack[top]; }
void push(int op) { stack[++top] = op; }
int pop() { return stack[top--]; }
int isEmpty() { return -1 == top; }


// -- lib --

int precedance( int op){
	switch(op){
		case '+' :
		case '-' :
			return 1;
		case '*':
		case '/':
		case '%' :
			return 2;
	}
	return -1;
}

//char* convert_postfix( char *inf) {
//char[] convert_postfix( char inf[]) {
char* convert_postfix( char *inf) {
	int i = -1;
    pIndex = -1;
    top = -1;

	for( i=0; inf[i] != '\0'; i++){
		if( isalpha(inf[i])) 
			postfix[ ++pIndex] = inf[i];
		else{
			if ( ! isEmpty() ){
		while( ! isEmpty() && precedance( stack_top()) >= precedance(inf[i] ))
				postfix[ ++pIndex] = pop();
			}
			if ( ')' != inf[i] )
				push(inf[i]); 	
		}
	}
	while( ! isEmpty())
		postfix[++pIndex] = pop();
	postfix[++pIndex] = '\0';
    return(postfix);
}

// -- app --
int main(){
	char infix[] = "a+b*c-d/e+f";

	printf("Infix : %s\n", infix);

	printf("Postfix: %s\n", convert_postfix(infix));		
}
