		#include <stdio.h>
	
//	.Дано целое число N (> 0). Сформировать и вывести целочисленный массив размера N, содержащий степени двойки от первой до N-й: 2, 4, 8, 16, … .
	
		int main(void){
			int N;
			
			printf("Введите число N");
			scanf("%d", &N);
			
			if (N < 2 || N > 10) {
				printf("N должно быть от 2 до 10\n");
				return 1;
			}
			int array[N];
			
			for(int i=0;i<N;i++){
				array[i] = 1 << ( i + 1);
			}
			
			for(int i=0;i<N;i++){
				printf("%d %d ", i+1,  array[i]);
				
			}
			
			printf("\n");
			
			return 0;
		}
