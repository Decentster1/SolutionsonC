#include <stdio.h>



int main(void){
	
	int x1,y1,x2,y2;
	scanf("%d\n %d\n %d\n %d", &x1, &y1, &x2, &y2);
	if ((x1 + y1) % 2 == (x2 + y2) %2 ){
		printf("same color");
	}else{
		printf("Try again");
		return 1;
	}
	return 0;
}
