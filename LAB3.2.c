#include <stdio.h>

int fun(int arr[],int i)
{
	if(i<0){
		return 0;
	}
	if(arr[i-1]%2!=0){
		return fun(arr,i-1)+1;
	}
	else{
		return fun(arr,i-1);
	}
}

int main(){
	int arr[5]={1,7,3,4,5};
	printf("%d",fun(arr,5));
	
}
