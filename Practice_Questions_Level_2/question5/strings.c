/*
5. Implement C program with following menu-choices:
	a. Reverse a string.
	b. Check if string is palindrome.
	c. Compare two strings.
	d. String copy (Hint: strcpy)
	e. String-tokenizer. ( ex strtok)
	f. String Concatenate. ( Hint: strcat)
	*/
#include <stdio.h>

int Factorial(int val){
    
}

int main(){ 
    char ch = ' ';
    char str1[50]=" ";
    char str2[50]=" ";
    char str3[50]=" ";
    int big=0,f=1;
    int lower = 0, upper = 0, i = 0, len=0, j=0, len1=0; 
        printf("\nEnter the choice for the following options\n[a] Reverse a string. \n[b] Check if a string is palindrome. \n[c] Compare two strings. \n[d] Copy a Strong \n[e] Tokenize a string\n[f] Concatenate two strings.\n");
        printf("Enter the choice :");
        scanf(" %c", &ch); 

        switch(ch){
            case 'a': 
                        printf("Enter the String\n--------------------------------\n");
                        scanf("%s", str1);
                        while (str1[len] != '\0')
                            len++;
                        for(i=len;i>0;i--){
                            str2[i]=str1[j];
                            j++;
                        }
                        printf("--------------------------------\nReversed String: %s \n--------------------------------\n", str2);
                        break;
                
            case 'b': 
                        printf("Enter the String\n--------------------------------\n");
                        scanf("%s", str1);
                        while (str1[len] != '\0')
                            len++;
                        j=len-1;
                        while(i<j){
                            if(str1[i]!=str1[j]){
                                f=0;
                                break;
                            }
                            i++;
                            j--;
                        }
                        if(1==f)
                            printf("\n--------------------------------\nString is Pallindrome\n--------------------------------\n");
                        else
                            printf("\n--------------------------------\nString is not Pallindrome\n--------------------------------\n");
                        break;
                
            case 'c':   printf("Enter the String 1\n--------------------------------\n");
                        scanf("%s", str1); 
                        printf("Enter the String 2\n--------------------------------\n");
                        scanf("%s", str2);
                        while (str1[len] != '\0')
                            len++;
                        while (str1[len1] != '\0')
                            len1++;
                        if(len!=len1){
                            printf("\n--------------------------------\nStrings are not the same\n--------------------------------\n");
                            break;
                        }
                        while(str1[i]!='\0'&&str2[i]!='\0'){
                            if(str1[i]!=str2[i]){
                                f=0;
                                break;
                            }
                            i++;
                        }
                        if(1==f)
                            printf("\n--------------------------------\nStrings are equal\n--------------------------------\n");
                        else
                            printf("\n--------------------------------\nStrings are not equal\n--------------------------------\n");
                        break;
            case 'd': 
                        printf("Enter the String to be copied\n--------------------------------\n");
                        scanf("%s", str1);
                        while (str1[len] != '\0')
                            len++;
                        for(i=0;i<len;i++){
                            str2[i]=str1[i];
                        }
                        printf("--------------------------------\nCopied String: %s \n--------------------------------\n", str2);
                        break;
            case 'e': 
                        printf("Enter the String to be Tokenized\n--------------------------------\n");
                        scanf("%s", str1);
                        printf("Enter the Token\n--------------------------------\n");
                        scanf(" %c", &ch);
                        printf("\n--------------------------------\n");
                        while (str1[len] != '\0')
                            len++;
                        for(i=0;i<len;i++){
                            if(str1[i]!=ch)
                                printf("%c",str1[i]);
                            else
                                printf("\n");
                        }
                        printf("\n--------------------------------\n");
                        break;

            case 'f':   printf("Enter the String 1\n--------------------------------\n");
                        scanf("%s", str1); 
                        printf("Enter the String 2\n--------------------------------\n");
                        scanf("%s", str2);
                        while (str1[len] != '\0')
                            len++;
                        while(str2[j]!='\0'){
                            str1[len]=str2[j];
                            len++;
                            j++;
                        }
                        printf("--------------------------------\nConcatenated String: %s \n--------------------------------\n", str1);
                        break;
            default:
                        printf("Invalid choice! Try again.\n");
                        break;
        }
    
    return(0);
	}
