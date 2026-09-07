#include <stdio.h>
#include <string.h>
#define size 50

//Globals declared
int top=-1;
char stack[size];

//Does the pop operation similar to stack pop
char pop(){
	return (stack[top--]);
}

//Does the push operation similar to stack push
void push(char token){
	stack[++top]=token;
}

//Checks the precedence of the tokens
int preference(char token){
	switch(token){
		case '^': return(3);
		case '*': 
		case '/': return(2);
		case '+':
		case '-': return(1);
	}
		return(0);
}

int main(){
	char infix[size]="a+b*c";
	char postfix[size];
	int i=0;
	int pos=0;
	char token;
	while(infix[i]!='\0'){
		token=infix[i];
		if((token>=48 && token<=57) || (token>=65 && token<=90) || (token>=97 && token<=122))
			postfix[pos++]=token;
		else if(top==-1 || preference(token)<preference(stack[top]))
			push(token);
		else{
			postfix[pos++]=pop();
			push(token);
		}
	i++;
	}
	postfix[--pos]=pop();
	printf("INFIX EXPRESSION IS: %s\n",infix);	
	printf("POSTFIX EXPRESSION IS: %s\n",postfix);
	return(0);
}	
