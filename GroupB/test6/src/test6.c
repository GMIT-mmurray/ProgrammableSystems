/*
 ============================================================================
 Name        : test3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "test6.h"

#include <stdio.h>
#include <stdlib.h>



int main(void) {
	weather day1, day2, day3[4];
	day1.highTemp = 30;
	day1.lowTemp = 5;
	day1.precip = 23.6;
	day1.windDirection = 67;
	day1.windSpeed = 45;
	day2.highTemp = 54;
	day2.lowTemp = 7;
	day3[0].highTemp = 100;
	printStruct(&day1);
	printStruct(&day2);
	printStruct(&day3[0]);

	return EXIT_SUCCESS;

}


