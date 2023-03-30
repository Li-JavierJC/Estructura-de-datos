# include <conio.h>
# include <stdio.h>
# define NN 8
int ii,aa[NN],k,AAUX,IIZQ,DDER,AP,MAYOR,BBAND=0,BOOL=0;
void insertar_moticulo()
{	for(ii=2;ii<=NN;ii++)
	{
		k=ii;
		BBAND=1;
		while((k>ii)&&(BBAND==1))
		{
			BBAND=0;
			if(aa[k]>aa[(k/2)])
			{
				AAUX=aa[(k/2)];
				aa[(k/2)]=aa[k];
				aa[k]=AAUX;
				k=(k/2);
				BBAND=1;
			}
		}
	}	
}
void eliminar_moticulo()
{	for(ii=NN;ii>=2;ii--)
	{
		AAUX=aa[ii];
		aa[ii]=aa[1];
		IIZQ=2;
		DDER=3;
		k=1;
		BOOL=1;
		while((IIZQ <ii)&&(BOOL==1))
		{
			MAYOR=aa[IIZQ];
			AP=IIZQ;
			if((MAYOR<aa[DDER])&&(DDER!=ii))
			{
				MAYOR=aa[DDER];
				AP=DDER;
			}
			if(AAUX<MAYOR)
			{
				aa[k]=aa[AP];
				k=AP;
			}
			else
			{
				BOOL=0;
			}
			IIZQ=k*2;
			DDER=IIZQ+1;
		}
		aa[k]=AAUX;
	}
	
}
void moticulo_me()
{
	printf("°Metodo de Ordenacion de Mezclas°\n");
	printf("Ingrese %d numero\n",NN);
	for(ii=1;ii<=NN;ii++)
	{  
		printf("%d:\t",ii);
		scanf("%d",&aa[ii]);
	}
	insertar_moticulo();
	eliminar_moticulo();
	for(ii=1;ii<=NN;ii++)
	{
		printf("%d \t",aa[ii]);
	}
}
