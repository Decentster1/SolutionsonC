#include <stdio.h>

int main() {
	int K;
	
	printf("Введите номер дня в году (1–365): ");
	scanf("%d", &K);
	
	if (K < 1 || K > 365) {
		printf("Ошибка: число должно быть от 1 до 365.\n");
		return 1;
	}
	int weekday = K % 7; 
	
	printf("Номер дня недели: %d\n", weekday);
	
	return 0;
}

