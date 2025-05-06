#include <stdio.h>

int main() {
	double a, b, c;
	
	printf("Введите три числа: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	
	double sum;
	
	// Найдём наименьшее число и вычеркнем его
	if (a <= b && a <= c) {
		sum = b + c;
	} else if (b <= a && b <= c) {
		sum = a + c;
	} else {
		sum = a + b;
	}
	
	printf("Сумма двух наибольших чисел: %.2lf\n", sum);
	
	return 0;
}

