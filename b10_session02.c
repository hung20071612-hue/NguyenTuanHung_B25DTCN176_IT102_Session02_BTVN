#include <stdio.h>
#include <math.h>

int main(){
	int a = 3 , b = 4 , c = 2;
	float formula = ((sqrt(pow(a,2)+pow(b,2)))/(c+1))+((a*b)/c)-(sqrt(fabs(a-b)+pow(c,2)));
	return 0;
}
