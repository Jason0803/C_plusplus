//
//  main.cpp
//  5_understandingPointer
//
//  Created by Jason on 15/04/2015.
//  Copyright (c) 2015 Jason. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
	/*
	 * this program displays how the '(void*)' works
	 * with basic concepts of pointer
	 * by displaying the address of memory that pointers reside
	 */
	
	int i = 11, j = 22;
	double d = 3.3, e = 4.4;
	int* iptr; int* jptr;
	double* dptr; double* eptr;
	
	iptr = &i; jptr = &j; dptr = &d; eptr = &e;
	
	cout << "&i =" << (void*)iptr << endl;
	cout << "&j =" << (void*)jptr << endl;
	cout << "&d =" << (void*)dptr << endl;
	cout << "&e =" << (void*)eptr << endl;
	
	return 0;
}

