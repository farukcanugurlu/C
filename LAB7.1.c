#include <stdio.h>
#include <stdlib.h>
int main(){
	int sayi;
	int *sayip;
	int i=0, j=0, k=0;
	
	sayip=(int*)malloc(1*sizeof(int));
	
	while(1){
		printf("sayi giriniz:\n");
		scanf("%d", &sayi);
		
		if(sayi==0){
			break;
		}
		
		*(sayip+j)=sayi;
		j++;
		sayip=(int*)realloc(sayip, sizeof(int));
	}
	for(k=0; k<j; k++){
		printf("%d", *(sayip+k));
	}
	free(sayip);
	return 0;
	
}

