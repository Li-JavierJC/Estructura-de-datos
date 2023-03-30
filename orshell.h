# include <conio.h>
# include <stdio.h>
# define N 8
void ordenacion_shell()
{
	int i,INT, AUX,a[N];
	printf("METODO DE ORDENACION DE SHELL! \n");
	printf("ingrese %d numero:\n",N);
	for(i=0;i<N;i++)
	{
		printf("%d:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<N;i++)
	{
		printf("\t %d",a[i]);
	}
	printf(" \n-------------------------------------------------------------------\n");
	INT=N+1;
	bool BAND;
	while(INT>1)
	{
		INT=INT/2;
		BAND=0;
		while(BAND==0)
		{
			BAND=1;
			i=0;
			while((i+INT)<=(N))
			{
				if(a[i]>a[i+INT])
				{
					AUX=a[i];
					a[i]=a[i+INT];
					a[i+INT]=AUX;
					BAND=0;
				}
				i=i+1;
			}
		}
	}
	for(i=0;i<N;i++)
	{
		printf("\t %d",a[i]);
	}
}
