#include <stdio.h>

//	.Дано целое число N (> 0). Сформировать и вывести целочисленный массив размера N, содержащий степени двойки от первой до N-й: 2, 4, 8, 16, … .

int main(void){
	int N;
	
	printf("Write number: N");
	scanf("%d", &N);
	
	if (N < 2 || N > 10) {
		printf("The number must start from 2 to 10\n");
		return 1;
	}
	int array[N];
	
	for(int i=0;i<N;i++){
		array[i] = 1 << ( i + 1);
	}
	
	for(int i=0;i<N;i++){
		printf("%d ", array[i]);
		
	}
	
	printf("\n");
	
	return 0;
}
