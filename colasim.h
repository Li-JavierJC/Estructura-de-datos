# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# define TAM 5
int cola[TAM];
int frente=-1, final=-1;
int cola_s_vacia()
{	if((frente==-1)&&(final==-1))
	return 1;
	else
	return 0;
}
int cola_s_llena()
{
	if(final==TAM-1)
	return 1;
	else
	return 0;
}
void cola_meter(int d)
{	if(final<TAM)
	{	final=final+1;
		cola[final]=d;
		if(final==0)
		frente=frente+1;
	}
}
int cola_sacar()
{	int d;
	d = cola[frente];
	if(frente==final)
	{
		frente=-1;
		final=-1;
	}
	else
	{
		frente=frente + 1;
	}
	return d;
}
void colasi()
{
	int dato=0, resul, i, opcion;
	do
	{
		system("cls");
		printf("<< Cola Simple >> \n");
		printf("\n\nSE ILUSTRA EL SIGUIENTE MENU\n\n");
		printf(" __________________\n");
		printf("|1. cola Vacia     |\n");
		printf("|2. cola Llena     |\n");
		printf("|3. Insertar       |\n");
		printf("|4. Eliminar       |\n");
		printf("|5. Mostrar        |\n");
		printf("|6. Salir          |\n");
		printf("|__________________|\n");
		printf("Que accion desea realizar:\n");
		scanf("%d",& opcion);
		switch(opcion)
		{
			case 1:	
				{ 	resul = cola_s_vacia();
					if(resul==1)
						printf("<< Cola vacia >>\n\n\n");
					else
						printf("<< Cola NO vacia >>\n\n\n");		
					break;
				}
			case 2:
				{ 	resul = cola_s_llena();
					if(resul==1)
						printf("<< Cola llena >>\n\n\n");
					else
						printf("<< La Cola NO esta llena >>\n\n\n");		
					break;
				}
			case 3:
				{  	resul = cola_s_llena();
					if(resul==1)
						printf("<< Cola llena >>\n\n\n");
					else
						printf("\nDato = ");
						scanf("%d",&dato);
						cola_meter(dato);			
					break;
				}
			case 4:
				{ resul = cola_s_vacia();
					if(resul==1)
						printf("<< LA Cola esta vacia >>\n\n\n");
					else
						dato=cola_sacar();
						printf("\nEl dato a eliminar es: %d\n\n",dato);
					break;
				}
			case 5:
				{ resul = cola_s_vacia();
					if(resul==1)
						printf("<< LA Cola esta vacia >>\n\n\n");
					else
						for(i=0;i<=final;i++)
						printf("\n%d",cola[i]);
					break;
				}
		}
		getch();
    }while(opcion!=6);

}
