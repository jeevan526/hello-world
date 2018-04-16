#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,i;
	a=10;
	b=20;
	c=30;
	printf("\nStudents have pen,paper and question: \n");
	printf("\nfor pen enter 10\n");
	printf("\nfor paper enter 20\n");
	printf("\nfor Question Paper enter 30\n");
	while(i<3)
	{
	printf("\nEnter the resource given by the Teacher: \n");
	scanf("%d",&d);
	if(d==10)
	{
		printf("\nResource given by teacher is Pen\n");
		printf("Paper is Shared\n");
		printf("Question paper\n");
		printf("Student completed the exam");
	}
	else if(d==20)
	{
		printf("\nResource given by teacher is Paper\n");
		printf("Question Paper is shared\n");
		printf("Pen\n");
		printf("Student completed the exam");
	}
	else if(d==30)
	{
		printf("\nResource given by teacher is Question Paper\n");
		printf("Paper is shared\n");
		printf("Pen\n");
		printf("Student completed the exam");
	}
	else
	{
		printf("Wrong Input");
	}
	i++;
}
printf("\nProcess Completed\n");
}
