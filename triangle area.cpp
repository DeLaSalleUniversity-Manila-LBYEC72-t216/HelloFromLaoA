#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float base, height, area;
	
	printf("TRIANGLE AREA");
	
	printf("\n\nInput base of the triangle: ");
	scanf("%f",&base);
	printf("Input height of the triangle: ");
	scanf("%f",&height);
	
	area = base*height/2;
	
	printf("\nArea of the triangle: %.3f", area);

	printf("\n\n");
	system("pause");
	return 0;
}
