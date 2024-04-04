#include<stdio.h>
#include"fun.h"

void usunc(int c, char wzor[5], char lista[1296][5])
{
	int l;
	for(int i=0; i<1296; i++)
	{
		if(lista[i][0]!='\0')
		{
			l=0;
			for(int j=0; j<4; j++)
			{
				if(lista[i][j]==wzor[j])
				{
					l++;
				}
			}
			if(l!=c)
			{
				lista[i][0] = '\0';
			}
		}
	}
}
