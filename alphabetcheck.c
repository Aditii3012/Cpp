// program to check whether the character is alphabet or no:-
#include<stdio.h>
#include<conio.h>
int main(){
    char x;
    printf("enter a character\n");
    scanf("%c",&x);
    if((x>='a' && x<='z')|| (x>='A' && x<='Z')){
        printf("the given character is an alphabet\n");
    }
    else {
        printf("the given character is not an alphabet\n");
    }
    return 0;
}