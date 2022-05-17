#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, k, n, m;
	int *dizip;
	
	printf("eleman sayisi giriniz:");
	scanf("%d", &n);
	
	dizip = (int*)malloc(n * sizeof(int));
	
	for(i=0; i<n; i++){
		printf("dizi[%d]:", i);
		scanf("%d", (dizip+i));
	}
	
	realloc(dizip , (m+n)* sizeof(int));
	printf("yeni eleman sayisi giriniz:");
	scanf("%d", &m);
	
	for(k=0; k<m; k++){
		printf("dizi[%d]:", k);
		scanf("%d", (dizip+k));
	}
	
	for(k=0; k<m; k++){
		printf("%d\n", *(dizip+k));
	}
	
	free(dizip);
	return 0;
}
