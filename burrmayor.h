# include <conio.h>
# include <stdio.h>
#define N 8
void burbuja_mayor()
{
	int i, j, AUX,a[N];
	printf("METODO DE ORDENACION DE BURBUJA MAYOR!\n");
	printf("ingrese %d numero:\n",N);
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
			if(a[i]>a[j])
			{
				AUX=a[i];
				a[i]=a[j];
				a[j]=AUX;
			}
			
		}
	}
	for(i=0;i<N;i++)
	{
		printf("%d \t",a[i]);
	}
	
}

