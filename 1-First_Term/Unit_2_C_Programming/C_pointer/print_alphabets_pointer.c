/*
 * print_alphabets_pointer.c
 *
 *      Created on: 22 Jun 2023
 *      Author: TAREK MASOOD
 *      Subject: print all the alphabets using a pointer using a pointer
 */
#include <stdio.h>
int main()
{
	char c='A';
	char*pc=&c;
	for(int i=0;i<26;i++)
      printf("%c  ",*pc+i);//using ASCII
}

