#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "StackHeader.h"

int main()
{
    Stack S = initStack();
    Stack os = initStack();
    char n[100];
    //char cn = n[100];

    printf("Enter an character line: %c\n");
    scanf("%s", n);


    for(int i=0; i<strlen(n);i++){
        push(S, n[i]);
    }

    for(int j=strlen(n)-1; j>=0;j--){
        push(os, n[j]);
    }

    for(int k=0; k<strlen(n)-1; k++){
        char myChar = pop(S);
        char yourChar = pop(os);

        if(myChar!=yourChar){
            printf("The line is not palindreome:");
            return 0;
        }
    }
    printf("The line is palindrome: ");

    return 0;
}

