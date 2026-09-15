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

void strrev(char *expression){
	int len=0, i=0;
	char temp=' ';
	len=strlen(expression);
	for(i=0;i<len/2;i++){
		temp=expression[i];
		expression[i]=expression[len-i-1];
		expression[len-i-1]=temp;
	}
}

int main(){
	char infix[size]="a*(b+c)-d";
	char postfix[size];
	int i=0;
	int pos=0;
	char token;
	printf("INFIX EXPRESSION IS: %s\n",infix);	
	strrev(infix);
	while(infix[i]!='\0'){
		if(infix[i]=='(')
			infix[i]=')';
		else if(infix[i]==')')
				infix[i]='(';
	i++;
	}
	i=0;
	while(infix[i]!='\0'){
		token=infix[i];
		if((token>=48 && token<=57) || (token>=65 && token<=90) || (token>=97 && token<=122))
			postfix[pos++]=token;
		else if(token=='(')
			push(token);
		else if(token==')'){
			while(top!=-1 && stack[top]!='(' && preference(token)<=preference(stack[top]))
				postfix[pos++]=pop();
			if(top!=-1 && stack[top]=='(')
				pop();
		}
		else{
			while(top!=-1 && preference(token)<=preference(stack[top]) && stack[top]!='(')
				postfix[pos++]=pop();
			push(token);
		}
	i++;
	}
	while(top!=-1)
		postfix[pos++]=pop();
	postfix[pos]='\0';
	strrev(postfix);
	printf("POSTFIX EXPRESSION IS: %s\n",postfix);
	return(0);
}	
