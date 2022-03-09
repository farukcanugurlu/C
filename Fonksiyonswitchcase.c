#include <stdio.h>
void tekCift(int s1){
	
	if(s1%2==0){
		printf("Sayi cifttir ");
	}
	else{
		printf("Sayi tektir ");
	}
}

int fact(int s1){
	int fakt=1,i;
	
	for(i=1;i<=s1;i++){
		fakt=fakt*i;
	}
	return fakt;
}

int kare(int s1){
	int kare,i;
	
	kare=s1*s1;
	
	return kare;
}

int main(){
	int secim=0,sayi;
	
	printf("Bir sayi giriniz :");
	scanf("%d",&sayi); printf("\n");
	
	printf("\n\n1.Tekmi ciftmi bulma islemi\n2.Faktoriyel bulma islemi\n3.Sayinin karesini alma islemi\n");
	scanf("%d",&secim); printf("\n");
	
	switch(secim){
		case 1:
			tekCift(sayi);
		      break;
		case 2:
			printf("%d",fact(sayi));
		      break;
		case 3:
			printf("%d",kare(sayi));
		      break;
		default:
		  printf("Gecersiz bir islem sectiniz...");
		  break;
}
return 0;
}
