/*
 * students.c
 *
 *  Created on: 7 Oct 2022
 *      Author: TAREK MASOOD
 */
#include <stdio.h>
//structure definition
struct Sstudent
{
	char name[50];
	int roll;
	float marks;
};
int main()
{
	struct Sstudent students[10];//create object of type struct Sstudent
	int count=0;
	printf("Enter information of students :\n");
	do
	{
		printf("\nfor roll number: ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&students[count].roll);//insert student roll number
		printf("Enter name: ");
		fflush(stdin); fflush(stdout);
		gets(students[count].name);//insert name
		printf("Enter marks: ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&students[count++].marks);//insert student marks number
	}while(count<10);
	printf("\nDisplaying Information\n");
	//print 10 students informations
	for(int i=0;i<10;i++)
	{
		printf("\nInformation for roll number %d",students[i].roll);
		printf("\nname: %s",students[i].name);
		printf("\nmarkes: %f",students[i].marks);
		printf("\n---------------------------------");
	}
	return 0;
}
