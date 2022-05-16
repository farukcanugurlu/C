#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int sayi,i,j;
	
	int *ptr=(int*)calloc(1,sizeof(int));
    while(1){
    	scanf("%d",&sayi);
        if(sayi==0){
        	break;
		}
		else{
			*(ptr+i)=sayi;
			i++;
		ptr=(int*)realloc(ptr,i+sizeof(int));	
		}
	}
	for(j=0;j<i;j++){
		printf("%d",*(ptr+j));
	}
	
	
	return 0;
}
