#include<stdio.h>
void simplecalculator(int a,int b,int choice);
int main()
{
    int a,b,choice;
printf("enter your value of a:");
scanf("%d",&a);
printf("enter your value of b:");
scanf("%d",&b);
printf("enter your choice\n");
printf("1 for:addition\n");
printf("2 for subtraction\n");
printf("3 for multiplication\n");
printf("4 for division\n");
printf("5 for modulation\n");
printf("enter your choice:");
scanf("%d\n",&choice);
simplecalculator(a,b,choice);
    return 0;
}
void simplecalculator(int a,int b,int choice)
{
    switch(choice)
    {
        case 1:printf("result is=%d\n",a+b);
        break;
        case 2:printf("result is =%d\n",a-b);
        break;
        case 3:printf("result is=%d\n",a*b);
        break;
        case 4:printf("result is=%d\n",a/b);
        break;
        case 5:printf("result is=%d\n",a%b);
        break;
        default:
        printf("invalid choice");
    }
}