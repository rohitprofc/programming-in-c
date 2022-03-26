#include<stdio.h>
void main()
{
    int a,b,result;
    char op;
    printf("Enter Operator:\n");
    printf("---------------\n");
    scanf("%c",& op);
    printf("Enter 2 Operands:\n");
    printf("------------------\n");
    scanf("%d%d",&a,&b);
    switch(op)
    {
    case '+': result = a+b;
        printf("Addition of 2 numbers is %d\n",result);
        break;
    case '-': result = a-b;
        printf("Substraction of 2 numbers is %d\n",result);
        break;
    case '*': result = a*b;
        printf("Multiplication of 2 numbers is %d\n",result);
        break;
    case '/': result = a/b;
        printf("Division(Q) of 2 numbers is %d\n",result);
        break;
    case '%': result = a%b;
        printf("Division(R) of 2 numbers is %d\n",result);
        break;
    default: printf("*|<_>|* Enter a valid operator!\n");
        break;
    }
}
/*
Output:-
Enter Operator:
---------------
+
Enter 2 Operands:
------------------
5
9
Addition of 2 numbers is 14
*/