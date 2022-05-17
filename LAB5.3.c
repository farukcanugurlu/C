#include <stdio.h>
#include <stdlib.h>



int main(){
	int i,size,dizi[10];
	int *ptr;

	printf("Size giriniz ");
	scanf("%d",&size);
	ptr=dizi;
	for(i=0;i<size;i++){
		
		scanf("%d",ptr[i]);
	}
	
	for(i=0;i<size;i++){
		
		printf("%d",*(ptr+i));
	}
	
}
