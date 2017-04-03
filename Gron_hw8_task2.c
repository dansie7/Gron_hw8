/*
 * =====================================================================================
 *
 *       Filename:  Gron_hw8_task2.c
 *       	Usage:  ./Gron_hw8_task2.c
 *    Description:  Task2
 *
 *        Version:  1.0
 *        Created:  03/23/2017 04:17:12 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Sharon Dansie (), Adam Lee  sharondansie@weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0
#define SIZE 81
/* Function Prototypes */
void Usage(char **info);
void GetOptions(char *argv[]);
void PrintOption(char o);
char c;
char stru[] = "-u";
char strl[] ="-l";
char strp[] = "-p";
char print[SIZE];
/* Main Program */

int main(int argc, char *argv[])
{
	while(1)
	{
		char str1[7] = {'-','-','h','e','l','p'};
		if(argc != 2)
		{
			Usage(&argv[0]);
			break;
		}
		else if((strcmp(argv[1], str1) == 0))
		{
			Usage(&argv[1]);
			break;
		}
		
		GetOptions(&argv[1]);
		
		while(1)
		{
			PrintOption(c);
			
			if(scanf("%s",print) == EOF)
			{
				break;
			}
			else 
			{
				continue;
			}

		}
		break;
	}
	return 0;
}


/* Function Defenitions */

void PrintOption(char o)
{
	char d;
	int i = 0;
	int camel = FALSE;
	
	while(i < (SIZE -1) && (d = getchar()) != '\n')
	{
		if(camel)
		{
			camel = FALSE;
		}
		else
		{
			print[i] = d;
		}
		i++;
	}
	print[i] = '\0';

		if(o == 'u')
		{
			for(i = 0; i< strlen(print); i++)
			{
				d = print[i];
				print[i] = toupper(d);
			}
			print[i] = '\0';
			printf("%s\n", print);
		}
		
		if(o == 'l')
		{
			for(i = 0; i< strlen(print); i++)
			{
				d = print[i];
				print[i] = tolower(d);
			}
			print[i] = '\0';
			printf("%s\n", print);
		}
		
		if(o == 'p')
		{
			for(i = 0; i< strlen(print); i++)
			{
				d = print[i];
			}
			print[i] = '\0';
			printf("%s\n", print);
		}

	return;
}
void GetOptions(char *ar1[])
{
	char str2[SIZE];
	strcpy(str2,*ar1);
	char str3[] = "-p -u -l";

	if(strtok(str2, str3) != 0)
	{
		printf("%s is an invalid flag; using defalt flag (-p).\n",*ar1);
		c = str3[1];

	}
	
	else if (strcmp(str2, stru) == 0)
	{
		c = str3[4];
	}
	
	else if (strcmp(str2, strl) == 0)
	{
		c = str3[7];
	}
	
	else if (strcmp(str2,strp) == 0)
	{
		c = str3[1];
	}
	
	printf("selecting option %c\n", c);
	printf("Type input. Output will be based on option\n");
	printf("Enter Ctrl-D to stop user input: ");
	
	return;
}
void Usage(char **info)
{
	
	char str1[7] = {'-','-','h','e','l','p'};
	
	if((strcmp(*info, str1) == 0))
	{
		printf("\nHelp information\n");
		printf("Usage: ./task2 [-p | -u | -l]\n\n");
	}
	
	else
	{
		printf("\nMissing or wrong numer of parameters\n");
		printf("Usage: ./task2 [-p | -u | -l]\n\n");
	}
	
	
	return;

}

