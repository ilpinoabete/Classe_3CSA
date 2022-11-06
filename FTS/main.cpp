#include <iostream>
#include <cstdlib>
#include "FTS.h"

typedef unsigned long ulong;
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[]) {
	/*
	if(argc<2)
		cout<<"USAGE: prog str1 str2 str3..." << endl;
	for (int i=0; i < argc; i++)
		cout << i << " - " << argv[i] << endl; */
		
	ulong n = 10;
	long long v[n];
	RandomVect(v, n);
	for(ulong i = 0; i< n; i++)
		cout<<v[i]<<endl;
	
	return 0;
}
