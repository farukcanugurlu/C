#include <stdio.h>
#include <string.h>

int main(){
	char *ptr1,*ptr2,sayac;
	char isim[100],soyisim[100],birles[100]=" ";
	int i;

    printf("Adinizi giriniz ");
    scanf("%s",isim);

    printf("Soyadinizi giriniz ");
    scanf("%s",soyisim);
    
    int size=strlen(isim);
    int size2=strlen(soyisim);
    
    for(i=0;i<size;i++){
    	birles[sayac]=isim[i];
    	sayac++;
	}
	for(i=0;i<size2;i++){
		birles[sayac]=soyisim[i];
		sayac++;
	}
	
	printf("%s",birles);

    
    return 0;
}
