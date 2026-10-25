#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
#include <cstdlib>

template <typename T>
void quickSort(T V, int ini, int fin){
	if (ini < fin){
	   int pivot=partition(V, ini, fin);
	   quickSort(V, ini, pivot-1);
	   quickSort(V, pivot+1, fin);
	}
}
template <typename T>
int partition(T V, int ini, int fin){
	T x = V[fin], y;
	int i=ini;
	for(int j=ini; j<fin-1; j++){
	   if(V[j]<=x){
	      y=V[j];
	      V[j]=V[i];
	      V[i]=y;
	      i++;
	   }
	}
	y=V[fin];
        V[fin]=V[i];
        V[i]=y;
	return i;
}
