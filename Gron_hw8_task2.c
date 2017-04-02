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
/* Function Prototypes */
void Usage(char **info);

/* Main Program */
int main(int argc, char *argv[])
{
	char str1[7] = {'-','-','h','e','l','p'};
	if(argc != 2)
	{
	Usage(&argv[0]);
	
	}
	else if((strcmp(argv[1], str1) == 0))
	{
	Usage(&argv[1]);
	}
	return 0;
}


/* Function Defenitions */

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

