#include<stdio.h>
#include"fun.h"

void graj()
{
	char lista[1296][5];
	char wzor[5];
	wygeneruj(lista);
	int b=0;
	int c=0;
	int i=0;
	while(c<4 && i<1296)
	{
		while(lista[i][0] == '\0')
		{
			i++;
		}
		if(i==1296)
		{
			printf("Oszukujesz. \n");
			continue;
		}
		for(int j=0; j<4; j++)
		{
			wzor[j] = lista[i][j];
			printf("%c", wzor[j]);
		}
		printf("\n");
		printf("Białe: ");
		scanf("%d", &b);
		printf("Czerwone: ");
		scanf("%d", &c);
		usunc(c, wzor, lista);
		usunb(b, wzor, lista);
		lista[i][0]='\0';
	}
	if(c==4)
	{
		printf("Wygrałem.\n");
	}
}
