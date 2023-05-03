#include <stdio.h> 

int main(){
	int secim;
	printf("Paralel icin 0 seri icin 1 tuslayiniz ");
	scanf("%d",&secim);
	if(secim==0){
		paralel();
	}
	else if(secim==1){
		seri();
	}
	else{
		printf("Yanlis deger tusladiniz");
	}
}
void paralel(){
	int direnc,i=0,deger=0,carpim=1,sonuc=0,toplam=0,secim;
	printf("Iki direnc icin hesaplaniyor daha fazlasi icin tekrar calistiriniz ");
	direnc=2;
	while(i<direnc){
		printf("\nDirenc degerini giriniz ");
		scanf("%d",&deger);
		toplam=toplam+deger;
		carpim=carpim*deger;
		i++;
	}
	sonuc=carpim/toplam;
	printf("Sonuc: %d\n",sonuc);
	printf("Bir islem daha yapmak istiyorsaniz 0 tuslayiniz cikis icin 1 tuslayiniz\n\n");
	scanf("%d",&secim);
	if(secim==0){
		paralel();
	}
}
void seri(){
	int direnc,i=0,deger=0,toplam=0;
	printf("Devrede ki direnc sayisini giriniz ");
	scanf("%d",&direnc);
	while(i<direnc){
		printf("Direnc degerini giriniz ");
		scanf("%d",&deger);
		toplam=toplam+deger;
		i++;
	}
	printf("Sonuc: %d",toplam);
}
