#include <stdio.h>
#include <stdlib.h>

int main()
{
	int kacsayi,enbuyuk,i,dizi[100];
	int *a= calloc(20,kacsayi);
	int *b,*c,*d;
	
	c=&kacsayi;
	d=&enbuyuk;
	
	printf("Kac sayi gireceksiniz ");
	scanf("%d",&*c);
	
	for(i=0;i<kacsayi;i++){
		printf("Sayi giriniz ");
		scanf("%d",&dizi[i]);
		*d=dizi[0];
		if(dizi[i]>dizi[0]){
			*d=dizi[i];
		}
	}
	printf("En buyuk sayi=%d ",*d);		
	return 0;
}
