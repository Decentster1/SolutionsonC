#include <stdio.h>
#include <stdlib.h>
int main(){

	
	char S[256];
	
	printf("Введите имя файла");
	scanf("%s", S);
	
	FILE *file = fopen(S, "r");
	
	if(file){
		fclose(file);
		printf("False");
	}else{
		file = fopen(S, "w");
	}
	
	if(file){
		
		fclose(file);
	printf("True");}	
	else{
		printf("False");
	}
	
	return 0;
	
}
