// Q1. Given a 2D array int mat[3] [3] = { {1,2,3}, {4,5,6}, {7,8,9} }, write a program to print the sum of 2nd row.

#include<stdio.h>
int main(){

    int mat[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };

    int sum = mat[1][0] + mat[1][1] + mat[1][2];

    printf("Sum of array: %d", sum);

    return 0;
}