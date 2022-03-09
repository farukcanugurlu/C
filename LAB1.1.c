#include <stdio.h>
int sum(int n)
{
	if(n>=1){
		return (n+sum(n-1));
	}
	else{
		return 0;
	}
}

int main()
{
	int sayi;
	printf("Sayi giriniz ");
	scanf("%d",&sayi);
	printf("%d",sum(sayi));
}
