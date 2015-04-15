//
//  main.cpp
//  7_complexNumberByStruct
//
//  Created by Jason on 15/04/2015.
//  Copyright (c) 2015 Jason. All rights reserved.
//

/*
 *
 * This program is made for the use of complex number
 * Will express complex number by using struct
 *
 */

#include <iostream>

using namespace std;

/* 
 * this struct consists two parts:
 * real number and imaginary number
 * e.g. 128 + 82i
 * in this case, 128 is real number
 * and 82 is the imaginary number
 */

typedef struct ComplexNumber
{
	int realNumber;
	int imaginaryNumber;
}ComplexType;


/*
 * This function below is to display the Complex Number
 * By using customised output method
 * for example, displaying as "4+5i"
 * In case the imaginary number is 0, there is no need to display 'i'
 * So this case is sorted out by using if statement
 */
void displayComplexNumber(const ComplexNumber& c)
{
	if( c.imaginaryNumber != 0)
		cout << c.realNumber << "+" << c.imaginaryNumber <<"i" << endl;
	else
		cout << c.realNumber << endl;
}


/*
 * This function below is made for the
 * sum of two complex numbers
 * the output is the 'result'
 */
void add(const ComplexNumber& c1, const ComplexNumber& c2)
{
	ComplexNumber result;
	
	result.realNumber = c1.realNumber + c2.realNumber;
	result.imaginaryNumber = c1.imaginaryNumber + c2.imaginaryNumber;
	
	displayComplexNumber(result);
}
/*
 * This function below is made for the
 * subtraction of two complex numbers
 * the output is the 'result'
 */
void subtract(const ComplexNumber& c1, const ComplexNumber& c2)
{
	ComplexNumber result;
	
	result.realNumber = c1.realNumber - c2.realNumber;
	result.imaginaryNumber = c1.imaginaryNumber - c2.imaginaryNumber;
	
	displayComplexNumber(result);
}

int main(int argc, const char * argv[])
{
	ComplexNumber c1, c2;
	c1.realNumber = 4; c1.imaginaryNumber = 5;
	c2.realNumber = 8; c2.imaginaryNumber = 11;
	
	add(c1,c2);
	
	subtract(c1,c2);
	
	
	
}
