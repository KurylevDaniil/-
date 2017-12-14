#include <stdio.h>
#define 	N 5
#include"variant.h"

 
int variant (){

	int x[N]; 
	int y[N];
	int j,i;

	for(int i = 0; i < N; i++) {
		x[i] = i % 3;
		
	}

	for (int i = 0; i < N; i++) {
		y[i] = i + 4;
		
	}
	for (int i = 0; i < N; i++){
		printf("x = %i, y = %i\n", x[i], y[i]);
		x[i]=x[i]+y[i];
		y[i]=x[i]-y[i];
		x[i]=x[i]-y[i];
		
	}
	for (int i = 0; i < N; i++){
		printf("x = %i, y = %i\n", x[i], y[i] );
    }
	return 0;

}