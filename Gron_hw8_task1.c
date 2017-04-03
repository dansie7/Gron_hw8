/*
 * =====================================================================================
 *
 *       Filename:  Gron_hw8_task1.c
 *       	Usage:  ./Gron_hw8_task1.c
 *    Description:  Task1
 *
 *        Version:  1.0
 *        Created:  03/23/2017 04:16:42 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Sharon Dansie (), sharondansie@weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <string.h>

/* Function Prototypes */
void Usage(char ** info);
void StringIn(char str1[], char str2[]);

/* Main Program */
int main(int argc, char *argv[])
{
	char str1[7] = "--help";

	if(argc != 3 && ((argc == 1) || ((argc == 2) && !(strcmp(argv[1], str1) == 0))))
	{
		Usage(&argv[0]);
	}
	else if(strcmp(argv[1], str1) == 0)
	{
		Usage(&argv[1]);
	}
	else
	{
		StringIn(argv[1], argv[2]);
	}

	return 0;
}


/* Function Defenitions */
void Usage(char ** info)
{
	char str1[7] = "--help";
	if(strcmp(*info, str1) == 0)
	{
		printf("\nHelp Information\n");
		printf("Usage ./task1 <str1> <str2>\n");
		printf("Program checks if str2 is part of str1\n\n");
		exit(1);
	}
	else
	{
		printf("\nMissing required parameters\n");
		printf("Usage ./task1 <str1> <str2>\n");
		printf("Program checks if str2 is part of str1\n\n");
		exit(1);
	}
	return;
}

void StringIn(char str1[], char str2[])
{
	if(strstr(str1, str2) == NULL)
	{
		printf("\n<%s> NOT found in <%s>\n", str2, str1);
		printf("Returned string <(NULL)>\n\n");
	}
	else
	{
		printf("\n<%s> found in <%s>\n", str2, str1);
		printf("Returned string <%s>\n\n", strstr(str1, str2));
	}
	return;
}





















