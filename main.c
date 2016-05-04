#include <stdio.h>
#include <math.h>

int main() {

	double a, b, c;
	double x1, x2, d;


	printf("Введите значения уравнения A, B, C \n");
	scanf("%d %d %d", &a, &b, &c);

	d = b * b - 4 * a * c;

	if (d >= 0) {
		x1 = (-b + sqrt(d)) / 2 * a;
		x2 = (-b - sqrt(d)) / 2 * a;
		printf("Корни уравнения: %.2f и %.2f\n", x1, x2);
	}
	else
		printf("Отрицательный дискриминант\n");

	return 0;
}
