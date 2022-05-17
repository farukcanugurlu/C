#include <stdio.h>
void selectionsort(int dizi[], int n){
	int i, j;
	int index, enkucuk;
	
	for(i=0; i<n-1; i++){
	    enkucuk=dizi[n-1];
		index=n-1;
		for(j=i; j<n; j++){
			enkucuk=dizi[j];
			index=j;
		}
	}
	dizi[index]=dizi[i];
	dizi[i]=enkucuk;
	
}

int main(){
	int i;
	int dizi[5];
	
	printf("siralamak istedi?iniz 5 sayiyi giriniz:\n");
	while(i<5){
		scanf("%d", &dizi[i]);
		i++;
	}
	i=0;
	selectionsort(dizi, 5);
	
	while(i<5){
		printf("%d", dizi[i]);
		i++;
	}
	return 0;
}
