#include<stdio.h>
#include"fun.h"

void usunb(int b, char wzor[5], char lista[1296][5])
{
	int l;
	int ind[4];
	for(int i=0; i<1296; i++)
	{
		if(lista[i][0]!='\0')
		{
			l=0;
			ind[0]=1;
			ind[1]=1;
			ind[2]=1;
			ind[3]=1;
			for(int j=0; j<4; j++)
			{
				if(wzor[j]!=lista[i][j])
				{
					for(int k=0; k<4; k++)
					{
						if(lista[i][j]==wzor[k] && lista[i][k]!=wzor[k] && ind[k]==1)
						{
							l++;
							ind[k]=0;
							k=4;
						}
					}
				}
			}
			if(l!=b)
			{
				lista[i][0]='\0';
			}
		}
	}
}
