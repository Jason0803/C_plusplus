//
//  main.cpp
//  8_strcopy_JasonCustom
//
//  Created by Jason on 16/04/2015.
//  Copyright (c) 2015 Jason. All rights reserved.
//

/*
 * This program is made for the undrstanding of
 * pointer by making custom version of the function 'strcopy'
 * --> strcopy( string1, string2 )
 * From the above, each parameter is an array of char
 * thus, i'll make it with pointers since pointer can be
 * the start of an array
 */

#include <iostream>

using namespace std;

void strcopyJason (char* C1, char* C2)
{
	if( strlen(C1) == strlen(C2) )
	{
		for(int i = 0; i < sizeof(C1); i++)
		{
			*C1 = *C2;
			
			++C1;
			++C2;
		}
	}
	else
		cout << "Damn size not matching !";
}

int main(int argc, const char * argv[])
{
	char s1[4] = "abc";
	char s2[4] = "def";

	strcopyJason(s1, s2);
	
	cout << s1 << endl;
}
