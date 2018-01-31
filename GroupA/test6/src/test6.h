/*
 * test4.h
 *
 *  Created on: Jan 29, 2018
 *      Author: m
 */

#ifndef TEST6_H_
#define TEST6_H_


typedef struct  {
	int highTemp;
	int lowTemp;
	double precip;
	double windSpeed;
	int windDirection;
} weather;

void printStruct (weather* d);

#endif /* TEST6_H_ */
