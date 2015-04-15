//
//  main.cpp
//  4_undestandingOfPointerAndString
//
//  Created by Jason on 15/04/2015.
//  Copyright (c) 2015 Jason. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
	char* s = "s1";
	char* t = "s2";
	
	if( s == t) cout << "yes" << endl;
		else cout << "no" << endl;
	if(*s == *t) cout << "yes" << endl;
		else cout << "no" << endl;
	
	return 0;
}

