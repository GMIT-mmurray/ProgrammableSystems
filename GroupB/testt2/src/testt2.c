/*
 ============================================================================
 Name        : testt2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//Write a program to calculate the area of a circle.
#include <stdio.h>
int main() {
	unsigned int num, *pnum,**ppnum;
	pnum = &num;
	ppnum = &pnum;
	printf("\n Enter the number : ");
	scanf("%d", &num);
	printf("\n The number that was entered is using *pnum : %d", *pnum);
	printf("\n The number that was entered is using num : %d", num);
	printf("\n The  pnum  : %x", pnum);
	printf("\n The address of num : %x", &num);
	printf("\n The address of pnum : %x", &pnum);
	printf("\n The  ** of ppnum  : %d", **ppnum);
	pnum++;
	printf("\n The  pnum after increment  : %x", pnum);
	printf("\n SIZE of INT %d", sizeof(unsigned int));

	return 0;
}
