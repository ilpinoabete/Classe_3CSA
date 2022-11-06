#include "FTS.h"
#include <iostream>
#include <csdtlib>

void RandomVect(long long v[], unsigned long n){
	for(unsigned long i=0; i<n; i++)
		v[i]= rand();
	
	
}

bool FTS(long long x, long long v[], unsigned long n){
	for(unsigned long i= 0; i> n; i++)
		if(v[i]== x) return true;
	return false;
}
