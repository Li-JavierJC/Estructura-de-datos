# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# define TAM 5

int pila[TAM], tope=-1;

int pila_vacia()
{	if( tope == -1)
		return 1;
	else 
		return 0;
}

int pila_llena()
{	if( tope == TAM-1)
		return 1;
	else 
		return 0;
}
void pila_meter(int d)
{	
	tope=tope + 1;
	pila[tope]= d;

}
int pila_sacar()
{	int d;
	d = pila[tope];
	tope = tope-1;
	return d;

}

void pila1()
{
	int opcion=0, resul=0,dato=0, i;
	do
	{	
		system("cls");
		printf("           MENU         \n");
		printf(" ______________________\n");
		printf("|1. Pila Vacia         |\n");
		printf("|2. Pila Llena         |\n");
		printf("|3. Meter              |\n");
		printf("|4. Sacar              |\n");
		printf("|5. Mostrar            |\n");
		printf("|6. Salir              |\n");
		printf("|______________________|\n");
		printf("Que accion desea realizar:\n");
		scanf("%d",& opcion);
		switch(opcion)
		{
			case 1:	
				{ 	resul = pila_vacia();
					if(resul==1)
						printf("<< Pila vacia >>\n\n\n");
					else
						printf("<< Pila NO vacia >>\n\n\n");		
					break;
				}
			case 2:
				{ 	resul = pila_llena();
					if(resul==1)
						printf("<< Pila llena >>\n\n\n");
					else
						printf("<< La pila NO esta llena >>\n\n\n");		
					break;
				}
			case 3:
				{ 	resul = pila_llena();
					if(resul==1)
						printf("<< Pila llena >>\n\n\n");
					else
						printf("\nDato = ");
						scanf("%d",&dato);
						pila_meter(dato);		
					break;
				}
			case 4:
				{ 	resul = pila_vacia();
					if(resul==1)
						printf("<< LA pila esta vacia >>\n\n\n");
					else
						dato=pila_sacar();
						printf("\nEl dato a eliminar es: %d\n\n",dato);
					break;
				}
			case 5:
				{ 	resul = pila_vacia();
					if(resul==1)
						printf("<< LA pila esta vacia >>\n\n\n");
					else
						for(i=0;i<=tope;i++)
						printf("\n%d",pila[i]);
					break;
				}
		}
		getch();
    }while(opcion!=6);
}

