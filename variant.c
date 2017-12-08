 #include <stdio.h>
#include"variant.h"

 
int variant (){

	int x[3] = {1,2,3}, y[3] = {5,6,7}, a,b,c,d,e,f;
	a = x[0];
	b = y[0];
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%i, b=%i\n", a, b );

	c = x[1];
	d = y[1];
	c=c+d;
	d=c-d;
	c=c-d;
	printf("a=%i, b=%i\n", c, d );

	e = x[2];
	f = y[2];
	e=e+f;
	f=e-f;
	e=e-f;
	printf("a=%i, b=%i\n", e, f );

	return 0;

}