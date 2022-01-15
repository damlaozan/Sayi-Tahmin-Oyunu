# Sayi-Tahmin-Oyunu

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));
	int degisken=1000+rand()%9000;
	int hak=15, bildi=0, sayi,i;
	
	for(i=1;i<=hak;i++)
	{printf("%d. Hakkiniz - Bir Sayi Giriniz: ",i); scanf("%d",&sayi);
	
	if((sayi<1000) || (sayi>9000))
   {printf("Lutfen 1000 ile 9000 arasinda bir sayi giriniz!\n");
	continue;}
	
	else if(sayi<degisken)
	{printf("%d sayisi kucuk, daha buyuk bir sayi giriniz.\n",sayi);
	continue;}
	
	else if(sayi>degisken)
	{printf("%d sayisi buyuk, daha kucuk bir sayi giriniz.\n",sayi); }
	
	else
	{bildi=1; break;}	
}
	if(bildi==1)
	printf("Tebrikler %d. hakkinizda %d sayisini bildiniz.",i,degisken);
	else
	printf("Uzgunuz haklariniz bitti. %d sayisini bilemediniz.",degisken);
	return 0;
}
