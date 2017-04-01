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

#define SIZE 80
/* Function Prototypes */
void Usage(char ** info);
/* Main Program */
int main(int argc, char *argv[])
{
	return 0;
}


/* Function Defenitions */
void Usage(char ** info)
{
	char str1[SIZE] == "--help";
	if(strcmp(*info, str1) == 0 )
	{
		printf("Help Information\n");
		printf("Usage ./task1 <str1> <str2>\n");
		printf("Program checks if str2 is part of str1\n");
		exit(1);
	}
	else
	{
		printf("Missing required parameters\n");
		printf("Usage ./task1 <str1> <str2>\n");
		printf("Program checks if str2 is part of str1\n");
		exit(1);
	}

	return;
}


