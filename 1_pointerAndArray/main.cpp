//
//  main.cpp
//  array_with_pointer
//
//  Created by Jason on 14/04/2015.
//  Copyright (c) 2015 Jason. All rights reserved.
//

#include <iostream>

using namespace std;

int sum(const int *s, int size) {
	/*
	 * this function will calculate sum. for each values in an array
	 * reason why used 'const' is to prevent from changing values
	 * even though the value called by reference (= 'read only')
	 * '*s' will return the first address of the array at the first step
	 * then the value added to 'sum'
	 * '++s' will increase the value of s by 4 because it's integer type pointer
	 */
	
	int sum = 0;
	for( int i = 0;  i < size; i++) {
		sum += *s;
		++s;
	}
	return sum;
}

double getAverage(const int *s, int size) {
	/*
	 * this function will calculate average of values of the given array
	 * '(double)' makes the result of calculation type as double
	 * as average is sum of values divided by the number of values,
	 * output value 'avg' will be the result of 'sum' function divided by given size
	 */
	double avg = 0;
	
	avg = (double)sum(s, size)/size;
	
	return avg;
}

int main(int argc, const char * argv[]) {
	int total;
	double average;
	int score[5];
	
	// initialise the score array
	score[0] = 98;
	score[1] = 95;
	score[2] = 86;
	score[3] = 87;
	score[4] = 85;
	
	total = sum(score, 5);
	average = getAverage(score, 5);
	
	cout << "the sum of scores is: " << total << endl;
	cout << "the average of scores is: " << average << endl;
	
    return 0;
}
