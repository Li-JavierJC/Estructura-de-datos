# include <conio.h>
# include <stdio.h>
# define N 8
int TOPE, INI, FIN,POS,PILAMENOR[N],PILAMAYOR[N],i,a[N],IZQ,DER,AUX;
bool BAND;

void ingresar_datos()
{	for(i=0;i<N;i++)
	{
		printf("%d:",i+1);
		scanf("%d",&a[i]);
	}	
}
void reduce_interactivo()
{   IZQ=INI;
	DER=FIN;
	POS=INI;
	BAND=0;
	while(BAND==0)
	{
		while((a[POS]<=a[DER])&&(POS!=DER))
		{
			DER=DER-1;
		}
		if(POS==DER)
		{
			BAND=1;
		}
		else
		{
			AUX=a[POS];
			a[POS]=a[DER];
			a[DER]=AUX;
			POS=DER;
		}	
		while((a[POS]>=a[IZQ])&&(POS!=IZQ))
		{
			IZQ=IZQ+1;
		}
		if(POS==IZQ)
		{
			BAND=1;
		}
		else
		{
			AUX=a[POS];
			a[POS]=a[IZQ],
			a[IZQ]=AUX;
			POS=IZQ;
		}
	}
}
void rapido_interactivo()
{	TOPE=1;
	PILAMENOR[TOPE]=0;
	PILAMAYOR[TOPE]=N-1;
	while(TOPE>0)
	{
		INI=PILAMENOR[TOPE];
		FIN=PILAMAYOR[TOPE];
		TOPE=TOPE-1;
		reduce_interactivo();
		if(INI<(POS-1))
		{
			TOPE=TOPE+1;
			PILAMENOR[TOPE]=INI;
			PILAMAYOR[TOPE]=POS-1;
		}
		if(FIN>(POS+1))
		{
			TOPE=TOPE+1;
			PILAMENOR[TOPE]=POS+1;
			PILAMAYOR[TOPE]=FIN;
		}	
	}
	
}
void mostrar()
{
	for(i=0;i<N;i++)
	{
		printf("\t %d",a[i]);
	}
}

void interac_quisort()
{
	printf("°Metodo de ordenacion Quiksort°>\n");
	printf("Ingrese %d numeros\n",N);
	ingresar_datos();
	rapido_interactivo();
	mostrar();
}
