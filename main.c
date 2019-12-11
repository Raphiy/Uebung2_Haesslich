/*
 * main.c
 *
 *  Created on: 31.10.2019
 *      Author: Froemberg Raphael
 */



#include <stdio.h>

int ist_haesslich();
int main() {
	ist_haesslich();
	unsigned int zaehler = 0;
	unsigned int zahl = 0;

	while (zaehler < 1000) {
		zahl++;
		if(ist_haesslich(zahl)) {
			zaehler++;
		}
	}
	printf("die tausendste hässliche Zahl ist: %d", zahl);

	return 0;
}

int ist_haesslich(unsigned int n) {
	int teilbar = 1;
	while (teilbar) {
		teilbar = 0;
		if(n%2 == 0) {
			teilbar = 1;
			n = n/2;
		}
		if(n%3 == 0) {
			teilbar = 1;
			n = n/3;
		}
		if(n%5 == 0) {
			teilbar = 1;
			n = n/5;
		}
	}
		return(n==1);
}
