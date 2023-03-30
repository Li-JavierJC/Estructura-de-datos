# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
#define L 5
int arregl[L];
int contado=0, eldat=0, datobu=0,bander=0,bander1=0,llen=0,sobr=0,completa=0,completa1=0; 
int insertar_dato()//insertar todos los datos
{	int i=0,j=0,t=0;
	printf("Proporcione la siguiente cantidad de datos:%d\n",completa);//codigo para insertar todos lo datos
	contado=0;
	while(contado<L)
	{
		scanf("%d",&arregl[contado]);
		contado=contado+1;	
	}
	for(i=0;i<L;i++)
	{
		for(j=i+1;j<L;j++)
		{
			if(arregl[i]>arregl[j])
			{
				t=arregl[i];
				arregl[i]=arregl[j];
				arregl[j]=t;
			}
			
		}
	}
	
}
int completar_dato()// complentar los datos
{
	int i=0,j=0,t=0;
	printf("Proporcione los datos:\n");
	for(contado=0;contado<L;contado++)//codigo para completar datos
	{
		if(arregl[contado]==-1)
		{
			scanf("%d",&arregl[contado]);
		}
	}
	for(i=0;i<L;i++)
	{
		for(j=i+1;j<L;j++)
		{
			if(arregl[i]>arregl[j])
			{
				t=arregl[i];
				arregl[i]=arregl[j];
				arregl[j]=t;
			}
			
		}
	}
}
int inserta_undato()//insertar unicamente un dato
{
	int i=0,j=0,t=0;
	printf("Ingrese solamente un dato:\n");//codigo para ingresar un solo dato
	contado=0;
	scanf("%d",&arregl[contado]);
	contado=contado+1;
		for(i=0;i<L;i++)
	{
		for(j=i+1;j<L;j++)
		{
			if(arregl[i]>arregl[j])
			{
				t=arregl[i];
				arregl[i]=arregl[j];
				arregl[j]=t;
			}
			
		}
	}
}
int eliminar_dato()//eliminar todos los datos
{
	int i=0,j=0,t=0;
	for(contado=0;contado<L;contado++)//codigo para eliminar todos lo datos
	{
		arregl[contado]=-1;
	}
		for(i=0;i<L;i++)
	{
		for(j=i+1;j<L;j++)
		{
			if(arregl[i]>arregl[j])
			{
				t=arregl[i];
				arregl[i]=arregl[j];
				arregl[j]=t;
			}
			
		}
	}
}
int elimina_undato()//eliminar un solo dato
{
	int i=0,j=0,t=0;
	printf("Proporcione el dato que desea eliminar:\n");//codigo para eliminar un dato
	scanf("%d",&eldat);
	for(contado=0;contado<L;contado++)
	{
		if(eldat==arregl[contado])
		{
			arregl[contado]=-1;
			printf("El dato que elimino se encuetra en la posicion:\n %d",contado);
		}
	}
		for(i=0;i<L;i++)
	{
		for(j=i+1;j<L;j++)
		{
			if(arregl[i]>arregl[j])
			{
				t=arregl[i];
				arregl[i]=arregl[j];
				arregl[j]=t;
			}
			
		}
	}	
}
int busca_undato()//buscar solamente un dato
{
	int bandera3=0,buscar1=0;
	printf("Proporcione el dato que desea buscar:\n");//codigo para buscar un dato
	scanf("%d",&datobu);
	for(contado=0;contado<L;contado++)
	{
		if(datobu==arregl[contado])
		{
			bandera3=1;
			arregl[contado]=buscar1;
			
		}
	}
	for(contado=0;contado<L;contado++)
	{
		if(buscar1==arregl[contado])
		{
			printf("\n El dato que busca se encuetra en la posicion:\n %d",contado);
			bander1=1;		
		}
	}
	if(bander1==0)
	{
		printf("No existe el dato que busca \n");
	}
}
int buscar_datosr()//buscar datos repetidos
{
	printf("Proporcione el dato que desea buscar:\n");//codigo para buscar un dato
	scanf("%d",&datobu);
	for(contado=0;contado<L;contado++)
	{
		if(datobu==arregl[contado])
		{
			printf("\n Posicion y Dato repetido:\n %d--->%d",contado,arregl[contado]);
			bander1=1;
		}
	}
	if(bander1==0)
	{
		printf("No existe el dato que busca \n");
	}
}
int modifica_undato()//modificar solomante un dato
{
	int i=0,j=0,t=0;
	printf("Proporcione el dato que desea modificar:\n");//codigo para modificar un dato
	scanf("%d",&eldat);
	for(contado=0;contado<L;contado++)
	{
		if(eldat==arregl[contado])
		{
			printf("\n proporcione el nuevo dato a modificar:\n");
			scanf("%d",&arregl[contado]);
			printf("\n El dato que se modifico se encuetra en la posicion:\n %d",contado);
		}
	}
		for(i=0;i<L;i++)
	{
		for(j=i+1;j<L;j++)
		{
			if(arregl[i]>arregl[j])
			{
				t=arregl[i];
				arregl[i]=arregl[j];
				arregl[j]=t;
			}
			
		}
	}
}
int mostrar_dato()//mostrar todos los datos
{
	printf("\n----------------------------------------------------------------------\n");
	printf("Mostrando datos....\n");//mostrar datos del arreglo
	for(contado=0;contado<L;contado++)
	{
		printf("%d \t",arregl[contado]);
		printf("\t");
		
	}
	printf("\n----------------------------------------------------------------------\n");	
}

void ordenado1()
{
	int opcion=0,opcion1=0, opcion2=0,opcion3=0, opcion4=0;
	for(contado=0;contado<L;contado++)//codigo para inicializar el arreglo
		{
			arregl[contado]=-1;
			completa=completa+1;
		}
	do
	{
		system("cls");
		printf("¡¡Datos Ordenados!!\n");
		printf("Se muestra el siguiente menu \n");
		printf(" ___________________\n");//menu principal
		printf("|1.- Insertar       |\n");
		printf("|2.- Eliminar       |\n");
		printf("|3.- Buscar         |\n");
		printf("|4.- Modificar      |\n");
		printf("|5.- Mostrar datos  |\n");
		printf("|6.- Salir          |\n");
		printf("|___________________|\n");
		printf("Que accion desea realizar:\n");
		scanf("%d",&opcion);	
		switch(opcion)
		{
			case 1: 
			{
					system("cls");
					printf("        Insertar\n");//menu para insertar
					printf(" _______________________\n");
					printf("|1.-Todos los datos     |\n");
					printf("|2.-Completar los datos |\n");
					printf("|3.-Un dato             |\n");
					printf("|_______________________|\n");
					printf("¿Que opcion desea relizar? \n");
					scanf("%d",&opcion1);
					switch(opcion1)
					{
			
						case 1:	if(llen==0)
								{
									printf("\n____________________________________\n");
									insertar_dato();//insertar todos los datos
								}
								else
								{
									printf("Ya exinten datos en el arreglo!!!!\n");
									printf("Si desea sobreescribir presione, SI--1, NO---2:\n");
									scanf("%d",&sobr);
									if(sobr==1)
									{
										printf("\n____________________________________\n");
										printf("Sobreescribiendo......\n");
										insertar_dato();//insertar todos los datos		
									}
								}
						    	break;
						case 2: if(llen==1)
								{
									for(contado=0;contado<L;contado++)
									{
										if(arregl[contado]==-1)
										{
											completa1=completa1+1;
										}
									}
									printf("\nLos datos a completar son:%d\n",completa1);
									completar_dato();// complentar los datos
								}
								else
								{
									printf("Ya exinten datos en el arreglo!!!!\n");
									printf("Si desea sobreescribir presione, SI--1, NO---2:\n");
									scanf("%d",&sobr);
									if(sobr==1)
									{
										printf("\n____________________________________\n");
										printf("Sobreescribiendo......\n");
										completar_dato();// complentar los datos	
									}	
								}
								getch();
								break;
						case 3:	if(llen==0)
								{
									printf("\n____________________________________\n");
									inserta_undato();//insertar unicamente un dato
									llen=1;
								}
								else
								{
									printf("Ya exinten datos en el arreglo!!!!\n");
									printf("Si desea sobreescribir presione, SI--1, NO---2:\n");
									scanf("%d",&sobr);
									if(sobr==1)
									{
										printf("\n____________________________________\n");
										printf("Sobreescribiendo......\n");
										inserta_undato();//insertar unicamente un dato	
									}	
								}
								getch();
								break;
				    }
				    llen=1;
			break;
			}
			case 2:
			{
					 if(llen==1)
					{
						system("cls");
						mostrar_datos();
						printf("       Eliminar \n"); //menu para eliminar datos
						printf(" ________________________________\n");
						printf("|1.- Todos los datos             |\n");
						printf("|2.- Eliminar un dato            |\n");
						printf("|3.- Eliminar un dato repetido   |\n");
						printf("|________________________________|\n");
						printf("¿Que opcion desea relizar? \n");
						scanf("%d",& opcion2);
						switch(opcion2)
						{
							case 1: eliminar_dato();//eliminar todos los datos
									llen=0;
									break;
							case 2:	elimina_undato();//eliminar un solo dato
									break;
						}
					}
					else
					{
						printf("En el arreglo no existen datos!!!\n");
					}
					getch();
				break;
			}
			case 3:	
			{
					if(llen==1)
					{
						system("cls");
						mostrar_dato();
						printf("         Buscar\n");//menu para buscar datos
						printf("_______________________________\n");
						printf("|1.- Un dato                   |\n");
						printf("|2.- Todas los datos repetidos |\n");
						printf("|______________________________|\n");
						printf("¿Que opcion desea relizar? \n");
						scanf("%d",&opcion3);
						switch(opcion3)
						{
							case 1:	busca_undato();//buscar solamente un dato	
									break;
							case 2: buscar_datosr();//buscar todos lo datos repetidos
									break;					
						}
					}
					else
					{
						printf("En el arreglo no existen datos!!!\n");	
					}
					getch();
			break;
			}
			case 4:	
			{
					if(llen==1)
					{
						system("cls");
						mostrar_dato();
						printf("         Modificar\n");//menu para modicar dato
						printf(" ______________________________\n");
						printf("|1.- Un dato                   |\n");
						printf("|2.- Todas los datos repetidos |\n");
						printf("|______________________________|\n");
						printf("¿Que opcion desea relizar? \n");
						scanf("%d",&opcion4);
						switch(opcion4)
						{
							case 1:modifica_undato();//modificar solomante un dato	
									break;
						}
					}
					else
					{
						printf("En el arreglo no existen datos!!!\n");
					}
					getch();
				break;
			}
			case 5: if(llen==1)
					{
						mostrar_dato();//mostrar todos los datos
					}
					else
					{
						printf("En el arreglo no existen datos!!!\n");
					}
					getch();
					break;
					getch();
			case 6:	printf("Saliendo......\n");//salir de programa
					bander=1;
					break;				
		}
		getch();
	}while(bander==0);
}


