//
//  main.cpp
//  typedef_struct
//
//  Created by Jason on 14/04/2015.
//  Copyright (c) 2015 Jason. All rights reserved.
//

#include <iostream>

using namespace std;

typedef struct person
{
	char name[10];
	char gender;
	int age;
}personType;

typedef struct car
{
	char title[12];
	int year;
	int price;
}carType;

typedef struct ownerAndPrice
{
	int *ownerAge; // will point the 'age' of personType
	int *carYear; // will point the 'year' of carType8
}oapType;


int main(int argc, const char * argv[])
{
	
	/*
	 * This program uses 'typedef' to define new type of data
	 * and then make another type using two types by using pointer
	 * At the 'ownerAndPrice', 'age' or 'year' won't be actually stored in
	 * the struct. The pointers point the matching variables' address
	 */
	
	personType Jason {"Jason",'M',23};
	carType MyCar {"Audi R8",2014,500};
	
	personType *ptr_p;
	carType *ptr_c;
	
	oapType OAP;
	OAP.ownerAge = &Jason.age;
	OAP.carYear = &MyCar.year;
	
	
	ptr_p = &Jason;
	ptr_c = &MyCar;
	
	// any displaying to check whether it works
	cout << ptr_p->name << endl;
	
    return 0;
}
