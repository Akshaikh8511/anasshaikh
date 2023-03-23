#include<stdio.h>
void main()
{
float a,b,sum;
int choice;

printf("A : \n");
scanf("%f",&a);
printf("B : \n");
scanf("%f",&b);

printf("For Addition Press 1\n");
printf("For Subtraction Press 2\n");
printf("For Multiplication Press 3\n");
printf("For Division Press 4\n");

printf("Enter your choice : \n");
scanf("%d",&choice);

switch(choice)
{
case 1:
sum=a+b;
printf("Addition = %f\n",sum);
break;
case 2:
sum=a-b;
printf("Subtraction = %f\n",sum);
break;
case 3:
sum=a*b;
printf("Multiplication = %f\n",sum);
break;
case 4:
sum=a/b;
printf("Division = %f\n",sum);
break;
default:
printf("Enter valid Input\n");
}
}
