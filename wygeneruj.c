#include<stdio.h>
#include"fun.h"

void wygeneruj(char lista[1296][5])
{
	for(int i=1; i<7; i++)
	{
		for(int j=1; j<7; j++)
		{
			for(int k=1; k<7; k++)
			{
			
				for(int l=1; l<7; l++)
				{
					lista[(l-1)+(k-1)*6+(j-1)*6*6+(i-1)*6*6*6][0] = '0' + i;
					lista[(l-1)+(k-1)*6+(j-1)*6*6+(i-1)*6*6*6][1] = '0' + j;
					lista[(l-1)+(k-1)*6+(j-1)*6*6+(i-1)*6*6*6][2] = '0' + k;
					lista[(l-1)+(k-1)*6+(j-1)*6*6+(i-1)*6*6*6][3] = '0' + l;
				}
			}
		}
	}
}
