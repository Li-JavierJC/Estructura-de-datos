#include <stdio.h>
#include <conio.h>

int maxi(int num [], int n)
{	int i;
	int maximo = num [0];
	for (i=1;i<n;i++)
	{	
		if (num [i] > maximo)
		{
			maximo = num [i];
		}
	}	
	return maximo;
}
void cont_radix (int num [], int n, int pot)
{
	int salida [n], i, contador [10] = {0};
 
	for (i=0;i<n;i++)
	contador[(num[i]/pot)%10]++;
 
	for (i=1;i<10;i ++)
	contador [i] += contador [i - 1];
 
	for (i=n-1;i>=0;i--)
	{
		salida[contador[(num[i]/pot)%10]-1]= num [i];
		contador[(num[i]/pot)%10] --;
	}
	for (i=0;i<n;i++)
		num[i]=salida[i];
}
void metodoRadix (int num [], int n)
{
	int pot, max;
	max = maxi (num, n);
 
	for (pot = 1; max / pot > 0; pot *= 10)
	cont_radix (num, n, pot);
}	
void Radixsor_or()
{	int n = 10, i;
	int num [n];
	printf("\n °|ORDENACION POR RADIXSORT|° \n\n");
	printf("Ingrese %d Datos\n\n",n);
	for (i = 0; i < n; i ++)
	{
		printf (" Numero %d: ",i+1);
		scanf ("%d", &num [i]);
	}
	metodoRadix (num, n);
	printf ("\n\n");
	printf (" Numeros Ordenados:");
	for (i =0;i<n;i++)
	{
		printf (" %d \t ", num [i]);
	}
	printf ("\n\n");
}
