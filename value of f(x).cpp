#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float x, y;
	
	printf("VALUE OF f(x)");
	
	printf("\n\nInput the value of x: ");
	scanf("%f", &x);
	
	y = x/70;
	
	printf("Value of f(x): %.3f", y);

	printf("\n\n");
	system("pause");
	return 0;
}
