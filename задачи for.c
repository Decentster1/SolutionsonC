#include <stdio.h>

int main() {
	double priceKg;
	
	printf("Введите цену за 1 кг конфет: ");
	scanf("%lf", &priceKg);
	
	for (double weight = 1.2; weight <= 2.0; weight += 0.2) {
		double cost = priceKg * weight;
		printf("%.1lf кг = %.2lf rub.\n", weight, cost);
	}
	
	return 0;
}
