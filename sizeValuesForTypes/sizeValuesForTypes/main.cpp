//
//  main.cpp
//  sizeValuesForTypes
//
//  Created by Jason on 15/04/2015.
//  Copyright (c) 2015 Jason. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
	/*
	 * This program is for understanding of size values
	 * for each data types (int, char)
	 * enjoy it !
	 */
	
	int size; // to display the size
	
	// for char
	char buffer[1024];
	char* bp = buffer;
	char* ep = buffer + 1024;
	
	size = ep - bp;
	cout << "size of 'ep - bp' is: " << size << endl;
	
	// for int
	int a[10];
	int* start = &a[0];
	int* end = &a[10];
	
	size = end - start;
	cout << "size of 'end- start' is: " << size << endl;
	
	return 0;
}
