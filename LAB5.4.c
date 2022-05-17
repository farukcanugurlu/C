#include <stdio.h>
int main(){
	char a[4]= {'m', 'a', 'v', 'i'};
	char *p;
	int i;
	p=a;
	
	for(i=3; p[i]!='\0' && i>=0; i--){
		printf("%c", p[i]);
	}
	 
	return 0;
}
