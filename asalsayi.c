#include <stdio.h>

int asal(int sayi)
{
	int i;
	for(i=2;i<sayi;i++){
		if(sayi%i==0){
			return 0;
		}
	}
}

int main()
{
	int sayi;
	
	
	printf("Sayi giriniz ");
	scanf("%d",&sayi);
	
	if(asal(sayi)==0){
		printf("Sayi asal degildir ");
	}
	else{
		printf("Sayi asaldir ");
	}
}

