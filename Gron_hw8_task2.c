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

#define SIZE 2
/* Function Prototypes */
void Usage(char ar[]);

/* Main Program */
int main(int argc, char *argv[])
{
	char message[SIZE];
	if (argc != 2)
	{
	printf("Missing or wrong numer of parameters\n");
	Usage(message);
	}

	return 0;
}


/* Function Defenitions */

void Usage(char ar[])
{

	printf("Usage: ./task2 [-p | -u | -l]\n");
	
	
	return;

}

