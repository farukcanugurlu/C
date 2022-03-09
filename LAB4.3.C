#include <stdio.h>
int main()
{
	int i,dizi[5];
	int *p1;
	p1=dizi;
	for(i=0;i<5;i++){
		printf("Diziye eleman giriniz ");
		scanf("%d",&dizi[i]);
		
	}
	
	for(i=0;i<5;i++){
		printf(" %d ",*p1);
		p1++;
	}
	

	return 0;
}
