// 3. Print the fibonacci sequence upto n terms.

#include<stdio.h>
int main(){

    int a = 0;
    int b = 1; 
    int c;
    int n;

    scanf("%d",&n);

    printf("%d \n %d \n", a,b);

    for(int i=2; i<=n; i++){
        c = a + b;
        printf("%d",c);
        a = b;
        b = c;
    }


    return 0;
}