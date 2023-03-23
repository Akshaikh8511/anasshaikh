#include<stdio.h>
void main()
{

int nq,wc,wi,qc,qi, marks,pr;

printf("Enter No. of questions : \n");
scanf("%d",&nq);

printf("Enter Marks for correct answers : \n");
scanf("%d",&wc);

printf("Enter Marks for incorrect answers : \n");
scanf("%d",&wi);

printf("Enter NO. of correct Questions answered by the Student : \n");
scanf("%d",&qc);

qi = nq - qc;
printf("Enter NO. of incorrect Questions answered by the Student : \n");
printf("%d", qi);

//total marks of the student

marks = (qc*wc)-(qi*wi);
printf("\nTotal marks obtained by the student :\n");
printf("%d\n",marks);

//percentage of the student

pr = (marks*100)/(nq*wc);
printf("\nPercentage of the student : \n");
printf("%d%% \n", pr);

if(pr>=50)
{
printf("\nStudent is PASS\n");
}
else
{
printf("\nStudent is FAIL\n");
}
}
