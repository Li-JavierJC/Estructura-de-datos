# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# define TA 5
int col[TA];
int frent=-1, fina=-1;
int cola_c_vacia()
{	if((frent==-1)&&(fina==-1))
	return 1;
	else
	return 0;
}
int cola_c_llena()
{
	if(((frent==0)&&(fina==TA-1))||((fina+1)==frent))
		return 1;
		else
		return 0;
}
void cola_mete(int d)
{	if(fina==TA)
		fina=0;
	else
	{
		fina=fina+1;
	}
	col[fina]=d;
	if(frent==-1)
	frent=0;
}
int cola_saca()
{	int d;
	d = col[frent];
	if(frent==fina)
	{
		frent=-1;
		fina=-1;
	}
	else
	{
		if(frent==TA)
			frent=0;
		else
			frent=frent+1;
	}
	return d;
}
void colacir()
{
	int dato=0, resul, i, opcion;
	do
	{
		system("cls");
		printf("<< Cola Circular >> \n");
		printf("\n\nSE ILUSTRA EL SIGUIENTE MENU\n\n");
		printf(" ________________\n");
		printf("|1. cola Vacia   |\n");
		printf("|2. cola Llena   |\n");
		printf("|3. Insertar     |\n");
		printf("|4. Eliminar     |\n");
		printf("|5. Mostrar      |\n");
		printf("|6. Salir        |\n");
		printf("|________________|\n");
		printf("Que accion desea realizar:\n");
		scanf("%d",& opcion);
		switch(opcion)
		{
			case 1:	
				{ 	resul = cola_c_vacia();
					if(resul==1)
						printf("<< Cola vacia >>\n\n\n");
					else
						printf("<< Cola NO vacia >>\n\n\n");		
					break;
				}
			case 2:
				{ 	resul = cola_c_llena();
					if(resul==1)
						printf("<< Cola llena >>\n\n\n");
					else
						printf("<< La Cola NO esta llena >>\n\n\n");		
					break;
				}
			case 3:
				{  	resul = cola_c_llena();
					if(resul==1)
						printf("<< Cola llena >>\n\n\n");
					else
						printf("\nDato = ");
						scanf("%d",&dato);
						cola_mete(dato);			
					break;
				}
			case 4:
				{ resul = cola_c_vacia();
					if(resul==1)
						printf("<< LA Cola esta vacia >>\n\n\n");
					else
						dato=cola_saca();
						printf("\nEl dato a eliminar es: %d\n\n",dato);
					break;
				}
			case 5:
				{ resul = cola_c_vacia();
					if(resul==1)
						printf("<< LA Cola esta vacia >>\n\n\n");
					else
						for(i=0;i<TA;i++)
						printf("\n%d",col[i]);
					break;
				}
		}
		getch();
    }while(opcion!=6);

}
