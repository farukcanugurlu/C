#include <stdio.h>

#define MAX 50

void selectionsort(int arr[],int size)
{
	int i,j;
	int minimumindeks;
	for(i=0;i<size;i++){
		minimumindeks=i;
		for(j=i+1;j<size;j++){
			if(arr[j]<arr[minimumindeks]){
				minimumindeks=j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[minimumindeks];
		arr[minimumindeks]=temp;
	}
}





int main()
{
	int array[MAX],size;
	int i;
	printf("Kac elemanli? ");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	selectionsort(array,size);
	
	for(i=0;i<size;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
