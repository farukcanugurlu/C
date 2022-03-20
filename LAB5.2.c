#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int n=16;
malloc(n*sizeof(int));

char x[1]="",y[15]="Farukcan Ugurlu";
strcpy(x,y);
printf("Isim soy isim birlesmis hali...");
puts(x);
return 0;
}


