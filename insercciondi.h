# include <conio.h>
# include <stdio.h>
# define N 8
void inserccion_dire()
{
	int i,AUX,k,a[N];
	printf("METODO DE ORDENACION DE INSERCCION DIRECTA!\n");
	printf("Ingrese %d numeros:\n",N);
	for(i=0;i<N;i++)
	{
		printf("%d:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<N;i++)
	{
		printf("\t%d",a[i]);
	}
	printf(" \n-----------------------------------------------------------------\n");
	for(i=1;i<N;i++)
	{
		AUX=a[i];
		k=i-1;
		while((k>=0)&&(AUX<a[k]))
		{
			a[k+1]=a[k];
			k=k-1;
		}
		a[k+1]=AUX;
	}
		for(i=0;i<N;i++)
	{
		printf("\t%d",a[i]);
	}
}
