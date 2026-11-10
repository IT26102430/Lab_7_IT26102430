#include <stdio.h>

void calculate(int *x, int *y, int *z)

{
	int Modified_x, Modified_y, Modified_z;

	Modified_x = *x + *y + *z;
	Modified_y = *x - *y;
	Modified_z = (*x) * (*z);

	*x = Modified_x;
	*y = Modified_y;
	*z = Modified_z;
}

int main(void){

	int x, y, z;

	printf("Enter the x y z :");
	scanf("%d%d%d", &x, &y, &z);

        calculate(&x, &y, &z);

        printf("Modified x (sum): %d\n", x);
	printf("Modified y (difference): %d\n", y);
	printf("Modified z (product): %d\n", z);

	return 0;
}




