/*
 * main.c
 *
 *  Created on: 27 Sep 2022
 *      Author: TAREK MASOOD
 */
#include<stdio.h>
#include<string.h>
void reverse(char str[],int size);//reverse prototype(declaration)
int main ()
{
	char str[100];
	printf("Enter a string : ");
	fflush(stdin); fflush(stdout);
	gets(str);//insert string
	reverse(str,strlen(str));//function call
	return 0;
}
void reverse(char str[],int size)//function reverse word in string
{
	char rev[100],str2[100][100];
	int i,j=0,k=0;
	for(i=0;i<=size;i++,k++)//store character of str array in rev array till we find space or null
	{
		if(str[i]==' '||str[i]=='\0')
		{
			rev[k]='\0';//put null in the last of string
			strcpy(str2[j],rev);//copy string in rev array into str2 array
			i++;j++;k=0;//then begin from first index of rev array to store the next string
		}
		rev[k]=str[i];
	}
    printf("reverse word in string : ");
	while(j--)//print reverse word in the string
	{
		printf("%s ",str2[j]);
	}

}

