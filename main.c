#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cardid, pin;
	int sodu = 100000000;
	int i;
	int sotk;
	int tienck;
	int tienrut; 
	char check;
	
	printf("Nhap ma cardid : ");
	scanf("%d", &cardid);
	printf("Nhap ma pin: ");
	scanf("%d", &pin);
	
	if (cardid==123 && pin==456)
	{
	printf("Chon 1 de rut tien \n");
	printf("Chon 2 de chuyen khoan \n");
	printf("Chon 3 de xem so du \n");
	printf("Chon 4 de ket thuc");
	do {
		printf("\nMoi ban chon Menu: ");
		scanf("%d", &i);
		switch (i)
		{
			case 1:
			printf("Moi ban rut tien: ");
			printf ("Nhap so tien can rut: \n");
			scanf ("%d", &tienrut);
			
			if (tienrut >= sodu ){
				printf ("so tien vuot qua so du!\n");
			}
			else if (tienrut > 3000000){
				printf ("so tien vuot qua 3.000.000");
			}
			else if (tienrut%50000 !=0 ){
				printf ("so tien phai la boi so cua 50.000!\n");
			}
			else {
				sodu = sodu - tienrut;
				printf ("so du tai khoan hien tai la: %d", sodu);
			}
			break;
			case 2:
			printf("Moi ban chuyen khoan: ");
			printf ("nhap so tai khoan can chuyen: \n");
			scanf ("%d", &sotk );
			printf ("moi ban nhap so tien chuyen khoan \n");
			scanf ("%d", &tienck);
			if (tienck >= sodu){
				printf ("so tien chuyen khoan lon hon so du\n");
			}
			else {
				sodu = sodu-tienck;
				printf ("so du tai khoan la: %d", sodu);
			}
			break;
			case 3:
			printf("Kiem tra so du: ");
			printf ("so du tai khoan la: %d", sodu);
			break;
			case 4:
			printf("Ket thuc: ");
			return 0;
			break;
				
			}
		printf("\n chon Y/N de tiep tuc : ");
		fflush(stdin); 
		scanf("%c", &check);
		
			}
	
	while (check != 'N');
		
	}	
	else 
	printf("\ninvalid");
	
	return 0;
}
