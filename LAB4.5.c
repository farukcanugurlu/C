#include <stdio.h>

int main(){
	int i,dizi[5],toplam=0;
	int *p1,*p2;
	p1=dizi;
	p2=&toplam;
	
	for(i=0;i<5;i++){
		printf("Diziye eleman giriniz ");
		scanf("%d",&dizi[i]);	
	}
	for(i=0;i<5;i++){
		printf(" %d ",*p1);
		toplam=toplam+*p1;
		p1++;
	}
	printf("Rakamlari toplami = %d",*p2);
	
	return 0;
}
