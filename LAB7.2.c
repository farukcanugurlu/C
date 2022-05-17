#include <stdio.h>
#include <stdlib.h>

int main(){
	int *d1, *d2;
	int n, m;
	int i, k, j;
	
	printf("bir eleman sayisi giriniz:");
	scanf("%d", &n);
	
	d1 =(int*)malloc(n * sizeof(int));
	for(i=0; i<n; i++){
		printf("dizi[%d]:", i);
		scanf("%d", d1+i);
	}
	
	printf("bir eleman sayisi giriniz:");
	scanf("%d", &m);
	
	d2 =(int*)malloc(m * sizeof(int));
	for(k=0; k<m; k++,i++){
		printf("dizi[%d]:", i);
		scanf("%d", d2+k);
	}
	
	int *sonuc;
	sonuc = (int*)calloc((m+n), sizeof(int));
	
	for(i=0; i<n; i++){
		sonuc[i]=d1[i];
	}
		
	for(k=0; k<m+n; k++, i++){
	   sonuc[i]= d2[k];
	}
	
	for(j=0; j<(m+n); j++){
		printf("%d", sonuc[j]);
	}
	return 0;
}
