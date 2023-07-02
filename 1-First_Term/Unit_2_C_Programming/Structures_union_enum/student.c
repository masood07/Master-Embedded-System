/*
 * student.c
 *
 *  Created on: 8 Oct 2022
 *      Author: TAREK MASOOD
 */
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
	struct Sstudent students;//create object of type struct Sstudent
	printf("Enter information of students :\n");
	printf("\nEnter name: ");
	fflush(stdin); fflush(stdout);
	gets(students.name);//insert name
	printf("Enter roll number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&students.roll);//insert student roll number
	printf("Enter marks: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&students.marks);//insert student marks number
	fflush(stdin); fflush(stdout);
	printf("\nDisplaying Information\n");
	//print students informations
	printf("\nname: %s",students.name);
	printf("\nRoll: %d",students.roll);
	printf("\nmarkes: %f",students.marks);

	return 0;
}
