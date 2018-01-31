/*
 * test4.h
 *
 *  Created on: Jan 29, 2018
 *      Author: m
 */

#ifndef TEST4_H_
#define TEST4_H_


typedef struct  {
	int highTemp;
	int lowTemp;
	double precip;
	double windSpeed;
	int windDirection;
} weather;

void printStruct(weather);

#endif /* TEST4_H_ */
