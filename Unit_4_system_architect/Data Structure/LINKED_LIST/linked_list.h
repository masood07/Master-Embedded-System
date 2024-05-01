#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#define Dprintf(...)	{fflush(stdin); \
						fflush(stdout); \
						printf(__VA_ARGS__); \
						fflush(stdin); \
						fflush(stdout);}
struct Sstudent
{
	struct
	{
		int ID;
		char name[20];
		float height;
	}Sdata;
	struct Sstudent *next;
}*std;
void AddStudent();
void ViewStudent();
int DeleteStudent();
void DeleteAll();
int GetNth();
int Get_Count(struct Sstudent*selcted_std);
int GetNth_from_end(struct Sstudent *main_p,struct Sstudent *ref_p);
int get_middle();
int reverse_std();
#endif
