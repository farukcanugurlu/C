#include <stdio.h>

int main()
{
	FILE *dosya;
	char kar[256];
	dosya=fopen("faruk.txt","a");
	if(dosya==NULL)
	{
		printf("Yazilamadi ");
	}
	else
	{
		printf("Bir seyler yazin\n");
		fgets(kar,256,stdin);
		fputs(kar,dosya);
		printf("Dosyaya yazilmistir ");
		fclose(dosya);
	}
	return 0;
}
