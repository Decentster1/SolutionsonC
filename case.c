#include <stdio.h>
//Дан номер месяца — целое число в диапазоне 1–12 (1 — январь, 2 — февраль и т. д.). Определить количество дней в этом месяце для невисокосного года. 




int main(){

	int month;
	
	printf("Choose the number from 1 to 12: ");
	scanf("%d", &month);
	switch(month){
	
case 12:
case 1:
case 2:
	printf("Winter\n");
	break;
case 3:
case 4:
case 5:
	printf("Spring\n");
	break;
case 6:
case 7:
case 8:
	printf("Summer\n");
	break;
case 9:
case 10:
case 11:
	printf("Autumn\n");
	break;
default:
	printf("number less than 1 or more than 12\n");
}
return 0;
}
