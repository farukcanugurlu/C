#include <stdio.h>
int main()
{
    char str[4]={'a','b','c','d'};
    char *p1;
    int i;
    
    p1=str;
    
    for(i=3;i>=0;i--){
           printf("%c",p1[i]);
	}
}


//write a program in c to print a string in reverse using a pointer.
