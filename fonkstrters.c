#include <stdio.h>
#include <string.h>

void tersCevir(char dizi[]){
	int i,uzunluk,temp;
	
	uzunluk = strlen(dizi);
	
	for(i=0;i<uzunluk/2;i++){
		temp = dizi[i];
		dizi[i]=dizi[uzunluk-1-i]; 
		
		dizi[uzunluk-1-i]=temp; 
	}
}

int main()
{
	char text[200];
	
	printf("Text giriniz\n");
	scanf("%s",text);
	
	tersCevir(text);
	printf("%s",text);
}
