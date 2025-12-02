// 4. Read a character and print whether it is a vowel or consonant.

#include<stdio.h>
int main(){

    char ch;
    scanf("%c", &ch);

    if(ch=='a', ch=='e', ch=='i', ch=='o', ch='u'){
        printf("Its is a vowel");
    }
    else{
        prinf("Its is a consonent");
    }

    return 0;
}