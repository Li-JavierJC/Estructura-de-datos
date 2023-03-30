# include <conio.h>
# include <stdio.h>
#define N 8
void burbuja_menor()
{
	int i=0, j=0, AUX,a[N];
	printf("METODO DE ORDENACION DE BURBUJA MENOR!\n");
	printf("ingrese %d numeros:\n",N);
	for(i=0;i<N;i++)
	{
		printf("%d:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<N;i++)
	{
		printf("%d \t",a[i]);
	}
	printf(" \n---------------------------------------------------------\n");
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(a[j]>a[i])
			{
				AUX=a[j];
				a[j]=a[i];
				a[i]=AUX;
			}
			
		}
	}
	for(i=0;i<N;i++)
	{
		printf("%d \t",a[i]);
	}
	
}

