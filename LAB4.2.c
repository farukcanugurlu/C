#include <stdio.h>

int main()
{
	int a,b,toplam=0;
	int *p1,*p2,*p3;
	p1=&a;
	p2=&b;
	p3=&toplam;
	
	printf("Toplanacak sayilari giriniz ");
	scanf("%d %d",&*p1,&*p2);
	
	*p3=*p1+*p2;
	
	printf("Sonuc: %d",toplam);
	
	return 0;
	
}
