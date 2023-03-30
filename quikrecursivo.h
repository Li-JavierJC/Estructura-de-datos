#include <conio.h>
#include <stdio.h>
#define TAM 8
void reduce_recursivo(int aa[],int INI,int FIN)
{ 
    int IZQ,DER,AUX,POS;
    IZQ=INI;
    DER = FIN; 
    POS = aa[(IZQ+DER)/2];
    do{
        while(aa[IZQ]<POS && IZQ<FIN)IZQ++;

        while(POS<aa[DER] && DER > INI)DER--;
		if(IZQ <=DER)
        {
		    AUX= aa[IZQ];
            aa[IZQ]=aa[DER];
            aa[DER]=AUX;
            IZQ++;
			DER--;
        }
    }while(IZQ<=DER);
    if(INI<DER)
	{	
		reduce_recursivo(aa,INI,DER);
	}
    if(FIN>IZQ)
	{
		reduce_recursivo(aa,IZQ,FIN);
	} 
}
void quicksort1(int a[],int n)
{
    reduce_recursivo(a,0,n-1);
}
//funcion principal
void recursivo()
{
    int aa[TAM];
    int valor = sizeof(aa)/sizeof(int);
	printf("\t°METODO QUICKSORT RECURSIVA°\n");
    printf("Ingrese %d datos \n",TAM);
    for (int i=0; i<TAM; i++) 
	{
       printf("Numero %d:",i+1);
       scanf("%d",&aa[i]);
    }
	// mostrar lo valores
    printf("\n");
    quicksort1(aa,valor);
    printf("DATOS ORDENADOS \n");
    for (int i=0; i<valor; i++) {
        printf("%d \t",aa[i]);
    }
}
