#include <stdio.h>


int uzunlukdon(char name[]){
	int uzunluk=0;
	int i;
	
	for(i=0;name[i]!=0;i++){
		uzunluk++;
	}
	return uzunluk;
}



int main(){
	char isim[100];
	
	printf("String giriniz\n");
	gets(isim);
	
	printf("%d",uzunlukdon(isim));
}
