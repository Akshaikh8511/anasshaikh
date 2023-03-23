#include<stdio.h>
void main()
{
char choice;

printf("Enter Character to check it is vowel or not : \n");
scanf("%c",&choice);
switch(choice)
{
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
printf("Character is vowel\n");
break;
default:
printf("Character is not vowel\n");
}
}
