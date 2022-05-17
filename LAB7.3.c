#include <stdio.h>
#include <stdlib.h>
int main(){
	long int sayi;
	int i=0, j=0;
	int gecici;
	int *tek, *cift;
	
	tek=(int*)malloc(i*sizeof(int));
	cift=(int*)malloc(j*sizeof(int));
	
	printf("bir sayi giriniz:\n");
	scanf("%d", &sayi);
	
	while(sayi>0){
	     if(sayi%2==0){
	     	i++;
	     	cift=(int*)realloc(cift, i*sizeof(int));
	     	*(cift+i-1)=sayi%10;
		 }	
		 else{
		 	j++;
	     	tek=(int*)realloc(tek, j*sizeof(int));
	     	*(tek+j-1)=sayi%10;
		 	}
		 	sayi=sayi/10;
	}
	
	for(gecici=0; gecici<j; gecici++){
		printf("%d", *(tek+gecici));
	}
	for(gecici=0; gecici<i; gecici++){
		printf("%d", *(cift+gecici));
	}
	
	free(tek);
	free(cift);
	return 0;
}
