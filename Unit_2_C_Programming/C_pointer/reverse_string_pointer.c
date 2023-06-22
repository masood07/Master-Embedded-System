/*
 *      reverse_string_pointer.c
 *
 *      Created on: 22 Jun 2023
 *      Author: TAREK MASOOD
 *      Subject:print a string in reverse using a pointer
 */
#include <stdio.h>
#include<string.h>
int main()
{
	char s[100],s2[100];
	char*ps=(char*)&s;
	char*ps2=(char*)&s2;
	gets(s);

	//loop from last char in s and store it in s2
	for( int j=strlen(s)-1 ; *ps!=s[strlen(s)] ; ps++,j-- )
	{
		*(ps2+j)=*ps;
	}
	//terminate with null
	*(ps2+strlen(s))='\0';
	//print a string in reverse using a pointer
	printf("%s",ps2);
}
