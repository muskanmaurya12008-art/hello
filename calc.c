#include<stdio.h>
int main()
{
    int a ;
    int b;
    char OP;

    printf("enter the value of a and b :");
    scanf("%d %d" ,&a,&b);
    printf("enter the operator " );
    scanf(" %c", &OP);
    switch(OP)
    {
        case '+':
        printf("%d",a+b);
        break;
        case '-': 
        printf("%d",a-b);
        break;
        case '*': 
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        case '%':
        printf("%d",a%b);

        default:
        printf("invalid choice");
    }
     return 0;
}   
