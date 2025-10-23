// Write a C program to implement Arithmetic operations like addition, multiplication, division, subtraction, modulo division
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Addition of %d and %d is : %d\n", a, b, a+b);
    printf("Subtraction of %d and %d is :%d\n", a, b, a-b);
    printf("Multiplication of two numbers %d and %d is :%d\n", a, b, a*b);
    printf("Division of two numbers %d and %d is :%d\n", a, b, a/b);
    printf("Modulo Division of two numbers %d and %d is: %d\n", a, b, a%b);

    return 0;
    
}