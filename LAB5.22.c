#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char isim[]="Farukcan";
	char *ptr = (char*)malloc(sizeof(char)*8);
    char soyisim[]=" Ugurlu";
    ptr = (char*)realloc(ptr, sizeof(char)*7);

    strcat(isim,soyisim);
    
    printf("%s",isim);
    
    free(ptr);	
    
    return 0;
}
