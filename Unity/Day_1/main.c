#include<stdio.h>
#include "math.h"
int main(){
	int a = 10;
	int b = 20;
	int c = sum(10, 20);
	int d = divide(20, 2);
	int e = square(2);
	printf("sum %d :: \n",sum(a, b));
	printf("division %d :: \n", divide(a, b));
	printf("square %d :: \n", square(a));

	return 0;
}
