# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
#define limite 5
int arreglo[limite];
int contador=0, eldato=0, datobus=0,bandera=0,bandera1=0,lleno=0,sobre=0,completar=0,completar1=0; 
int insertar_datos()//insertar todos los datos
{
	printf("Proporcione la siguiente cantidad de datos:%d\n",completar);//codigo para insertar todos lo datos
	contador=0;
	while(contador<limite)
	{
		scanf("%d",&arreglo[contador]);
		contador=contador+1;	
	}
}
int completar_datos()// complentar los datos
{
	printf("Proporcione los datos:\n");
	for(contador=0;contador<limite;contador++)//codigo para completar datos
	{
		if(arreglo[contador]==-1)
		{
			scanf("%d",&arreglo[contador]);
		}
	}
}
int insertar_undato()//insertar unicamente un dato
{
	printf("Ingrese solamente un dato:\n");//codigo para ingresar un solo dato
	contador=0;
	scanf("%d",&arreglo[contador]);
	contador=contador+1;
}
int eliminar_datos()//eliminar todos los datos
{
	for(contador=0;contador<limite;contador++)//codigo para eliminar todos lo datos
	{
		arreglo[contador]=-1;
	}
}
int eliminar_undato()//eliminar un solo dato
{
	printf("Proporcione el dato que desea eliminar:\n");//codigo para eliminar un dato
	scanf("%d",&eldato);
	for(contador=0;contador<limite;contador++)
	{
		if(eldato==arreglo[contador])
		{
			arreglo[contador]=-1;
			printf("El dato que elimino se encuetra en la posicion:\n %d",contador);
		}
	}	
}
int buscar_undato()//buscar solamente un dato
{
	int bandera3=0,buscar1=0;
	printf("Proporcione el dato que desea buscar:\n");//codigo para buscar un dato
	scanf("%d",&datobus);
	for(contador=0;contador<limite;contador++)
	{
		if(datobus==arreglo[contador])
		{
			bandera3=1;
			arreglo[contador]=buscar1;
			
		}
	}
	for(contador=0;contador<limite;contador++)
	{
		if(buscar1==arreglo[contador])
		{
			printf("\n El dato que busca se encuetra en la posicion:\n %d",contador);
			bandera1=1;		
		}
	}
	if(bandera1==0)
	{
		printf("No existe el dato que busca \n");
	}
}
int buscar_undatosr()//buscar datos repetidos
{
	printf("Proporcione el dato que desea buscar:\n");//codigo para buscar un dato
	scanf("%d",&datobus);
	for(contador=0;contador<limite;contador++)
	{
		if(datobus==arreglo[contador])
		{
			printf("\n Posicion y Dato repetido:\n %d--->%d",contador,arreglo[contador]);
			bandera1=1;
		}
	}
	if(bandera1==0)
	{
		printf("No existe el dato que busca \n");
	}
}
int modificar_undato()//modificar solomante un dato
{
	printf("Proporcione el dato que desea modificar:\n");//codigo para modificar un dato
	scanf("%d",&eldato);
	for(contador=0;contador<limite;contador++)
	{
		if(eldato==arreglo[contador])
		{
			printf("\n proporcione el nuevo dato a modificar:\n");
			scanf("%d",&arreglo[contador]);
			printf("\n El dato que se modifico se encuetra en la posicion:\n %d",contador);
		}
	}
}
int mostrar_datos()//mostrar todos los datos
{
	printf("\n----------------------------------------------------------------------\n");
	printf("Mostrando datos....\n");//mostrar datos del arreglo
	for(contador=0;contador<limite;contador++)
	{
		printf("%d-->%d \t",contador,arreglo[contador]);
		printf("\t");
		
	}
	printf("\n----------------------------------------------------------------------\n");	
}
void desordenados()
{
	int opcion=0,opcion1=0, opcion2=0,opcion3=0, opcion4=0;
	for(contador=0;contador<limite;contador++)//codigo para inicializar el arreglo
		{
			arreglo[contador]=-1;
			completar=completar+1;
		}
	do
	{
		system("cls");
		printf("Se muestra el siguiente menu \n");
		printf(" ___________________\n");//menu principal
		printf("|1.- Insertar       | \n");
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
			case 1: system("cls");
					printf("        Insertar        \n");
					printf(" _______________________\n");
					printf("|1.-Todos los datos     |\n");
					printf("|2.-Completar los datos |\n");
					printf("|3.-Un dato             |\n");
					printf("|_______________________|\n");
					printf("¿Que opcion desea relizar? \n");
					scanf("%d",&opcion1);
					switch(opcion1)
					{
			
						case 1:	if(lleno==0)
								{
									printf("\n____________________________________\n");
									insertar_datos();//insertar todos los datos
								}
								else
								{
									printf("Ya exinten datos en el arreglo!!!!\n");
									printf("Si desea sobreescribir presione, SI--1, NO---2:\n");
									scanf("%d",&sobre);
									if(sobre==1)
									{
										printf("\n____________________________________\n");
										printf("Sobreescribiendo......\n");
										insertar_datos();//insertar todos los datos		
									}
								}
						    	break;
						case 2: if(lleno==1)
								{
									for(contador=0;contador<limite;contador++)
									{
										if(arreglo[contador]==-1)
										{
											completar1=completar1+1;
										}
									}
									printf("\nLos datos a completar son:%d\n",completar1);
									completar_datos();// complentar los datos
								}
								else
								{
									printf("Ya exinten datos en el arreglo!!!!\n");
									printf("Si desea sobreescribir presione, SI--1, NO---2:\n");
									scanf("%d",&sobre);
									if(sobre==1)
									{
										printf("\n____________________________________\n");
										printf("Sobreescribiendo......\n");
										completar_datos();// complentar los datos	
									}	
								}
								getch();
								break;
						case 3:	if(lleno==0)
								{
									printf("\n____________________________________\n");
									insertar_undato();//insertar unicamente un dato
									lleno=1;
								}
								else
								{
									printf("Ya exinten datos en el arreglo!!!!\n");
									printf("Si desea sobreescribir presione, SI--1, NO---2:\n");
									scanf("%d",&sobre);
									if(sobre==1)
									{
										printf("\n____________________________________\n");
										printf("Sobreescribiendo......\n");
										insertar_undato();//insertar unicamente un dato	
									}	
								}
								getch();
								break;
				    }
				    lleno=1;
				    break;
			case 2: if(lleno==1)
					{
						system("cls");
						mostrar_datos();
						printf("            Eliminar           \n"); //menu para eliminar datos
						printf(" ______________________________\n");
						printf("|1.- Todos los datos           |\n");
						printf("|2.- Eliminar un dato          |\n");
						printf("|3.- Eliminar un dato repetido |\n");
						printf("|______________________________|\n");
						printf("¿Que opcion desea relizar? \n");
						scanf("%d",& opcion2);
						switch(opcion2)
						{
							case 1: eliminar_datos();//eliminar todos los datos
									lleno=0;
									break;
							case 2:	eliminar_undato();//eliminar un solo dato
									break;
						}
					}
					else
					{
						printf("En el arreglo no existen datos!!!\n");
					}
					getch();
					break;
			case 3:	if(lleno==1)
					{
						system("cls");
						mostrar_datos();
						printf("           Buscar\n");//menu para buscar datos
						printf(" ______________________________\n");
						printf("|1.- Un dato                   |\n");
						printf("|2.- Todas los datos repetidos |\n");
						printf("|______________________________|\n");
						printf("¿Que opcion desea relizar? \n");
						scanf("%d",&opcion3);
						switch(opcion3)
						{
							case 1:	buscar_undato();//buscar solamente un dato	
									break;
							case 2: buscar_undatosr();//buscar todos lo datos repetidos
									break;					
						}
					}
					else
					{
						printf("En el arreglo no existen datos!!!\n");	
					}
					getch();
					break;
			case 4:	if(lleno==1)
					{
						system("cls");
						mostrar_datos();
						printf("Modificar\n");//menu para modicar dato
						printf(" ______________________________\n");
						printf("|1.- Un dato                   |\n");
						printf("|2.- Todas los datos repetidos |\n");
						printf("|______________________________|\n");
						printf("¿Que opcion desea relizar? \n");
						scanf("%d",&opcion4);
						switch(opcion4)
						{
							case 1:modificar_undato();//modificar solomante un dato	
									break;
						}
					}
					else
					{
						printf("En el arreglo no existen datos!!!\n");
					}
					getch();
					break;
			case 5: if(lleno==1)
					{
						mostrar_datos();//mostrar todos los datos
					}
					else
					{
						printf("En el arreglo no existen datos!!!\n");
					}
					getch();
					break;
					getch();
			case 6:	printf("Saliendo......\n");//salir de programa
					bandera=1;
					break;				
		}
	}while(bandera==0);
}

