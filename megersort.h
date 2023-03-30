#include<stdio.h>
#include<conio.h>
#define LIM 8
void megersort_or()
{
 	int AA[LIM],num,i;
	printf("°°Megersort°°\n");
	printf("Ingrese %d Datos\n",LIM);
    for(i=1;i<=LIM;i++)
    {	printf("Numero %d:",i);
    	scanf("%d",&num);
        AA[i]=num;
	}
    printf("\n");
    i=0;
    int IZQ=2,DER=LIM,AUX,k=LIM;
    while(DER>=IZQ)
	{
        for(i=DER;i>=IZQ;i--)
        { 
			if(AA[i-1]>AA[i])
			{
            	AUX=AA[i-1];
                AA[i-1]=AA[i];
                AA[i]=AUX;
                k=i;
            }
        }
        IZQ=k+1;
        for(i=IZQ;i<=DER;i++)
        {
			if(AA[i-1]>AA[i])
			{
            	AUX=AA[i-1];
                AA[i-1]=AA[i];
                AA[i]=AUX;
                k=i;
            }
        }
        DER=k-1;
	}
	printf("  °Datos Ordenados° \n");
 	for(i=1;i<=LIM;i++)
	{
 		printf("    %d \t",AA[i]);
                   
 	}
    getch();
}
