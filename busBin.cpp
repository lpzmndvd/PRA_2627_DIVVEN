#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
#include <cstdlib>

template <typename T>
int busBin(T X, T V[], int ini, int fin){
	if(ini > fin){
	   return -1; //No está en el vector
	}
	int m=(ini+fin)/2;
	if(V[m]==X){
	   return m;
	}
	if(X>V[m]){
	   return busBin(X, V, m+1, fin);
	}
	return busBin(X, V, ini, m-1);
	
}
