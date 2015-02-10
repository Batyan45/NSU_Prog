#include <stdio.h>
//В Visual Studio раскомментировать строку:
//#define _USE_MATH_DEFINES
#include <math.h>

int main() {
	float r, s, l;
	printf("Vvedi radius \n");
	scanf("%f", &r);
	s = M_PI * r * r;
	l = 2 * M_PI * r;
	printf ("l=%f, s=%f\n", l, s);
	return 0;
}