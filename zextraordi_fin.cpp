#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "desordenado.h"
#include "ordenados.h"
#include "pila.h"
#include "balanceo.h"
#include "Infijapotsfija.h"
#include "colasim.h"
#include "colaci.h"
#include "listasi.h"
#include "burrmayor.h"
#include "burmenor.h"
#include "insercciondi.h"
#include "orshell.h"
#include "quiksort.h"
#include "quikrecursivo.h"
#include "moticulo.h"
#include "megersort.h"
#include "radixsort.h"
#include "arbolb.h"
#include "listadoble.h"

int main()
{
	int op,op1,op2,op3,op4,op5,op6,op7,op8;
	do
	{
		
		system("cls");
		printf("   °°°°°°°°°°°°°°°°°°°°°°\n");
		printf("   °Estructuras de datos°\n");
		printf("   °°°°°°°°°°°°°°°°°°°°°°\n");
		system("color 0b");
		printf(" __________°Menu°__________\n");
		printf("|1.Arreglos°°°°°°          |\n");
		printf("|2.Pilas                   |\n");
		printf("|3.Colas                   |\n");
		printf("|4.Listas                  |\n");
		printf("|5.Metodos de ordenacion   |\n");
		printf("|6.Graficas                |\n");
		printf("|7.Arboles                 |\n");
		printf("|8.salir                   |\n");
		printf("|__________________________|\n");
		printf("¿Que accion desea realizar?");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
			{
				system("cls");
				printf("   Arreglos con ???\n\n");
                printf(" ________________________\n");
				printf("|1.Datos desoordenados   |\n");
				printf("|2.Datos ordenados       |\n");
				printf("|________________________|\n");
				printf("¿Que accion desea realizar?");
				scanf("%d",&op1);
				switch(op1)
				{
					case 1:
					{	desordenados();
						break;
					}
					case 2:
					{	ordenado1();
						break;
					}
				}
				break;
			}
			case 2:
			{
				system("cls");
				printf("<<<Pilas>>>        \n");
				printf(" _________________________\n");
				printf("|1.Simple                 |\n");
				printf("|2.Evaluacion de balanceo |\n");
				printf("|3.Expresion postfija     |\n");
				printf("|_________________________|\n");
				printf("¿Que accion desea realizar?");
				scanf("%d",&op2);
				switch(op2)
				{
					case 1:
					{
						pila1();
						break;
					}
					case 2:
					{	
						balanceo1();
						getch();
						break;
					}
					case 3:
					{	infija_postfija();
						getch;
						break;
					}
				}
				break;
			}
			case 3:
			{	system("cls");
				printf("<<< Colas >>>\n");
				printf(" ____________\n");
				printf("|1.Simple    |\n");
				printf("|2.Circular  |\n");
				printf("|____________|\n");
				printf("¿Que accion desea realizar?");
				scanf("%d",&op3);
				switch(op3)
				{
					case 1:
					{
						colasi();	
						break;
					}
					case 2:
					{
						colacir();
						break;
					}
				}
				break;
			}
			case 4:
			{
				system("cls");
				printf("  << Listas >> \n");
				printf(" _______________________\n");
				printf("|1.Simple               |\n");
				printf("|2.Doblemente enlazada  |\n");
				printf("|3.Doblemnte circular   |\n");
				printf("|_______________________|\n");
				printf("¿Que accion desea realizar?");
				scanf("%d",&op4);
				switch(op4)
				{
					case 1:
					{
						listasim();
						break;
					}
					case 2:
					{
						lista_doblemente();	
						break;
					}
				}
				break;
			}
			case 5: 
			{
				system("cls");
				printf("< Metodos de ordenacion >\n");
				printf(" _____________________\n");
				printf("|1.Burbuja            |\n");
				printf("|2.Inserccion directa |\n");
				printf("|3.Shell              |\n");
				printf("|4.Quiksort           |\n");
				printf("|5.Heapsort           |\n");
				printf("|6.Mergesort          |\n");
				printf("|7.Radixsort          |\n");
				printf("|_____________________|\n");
				printf("¿Que accion desea realizar?");
				scanf("%d",&op5);
				switch(op5)
				{
					case 1:
					{	system("cls");
						printf("<< Burbuja>>\n");
						printf(" _________\n");
						printf("|1.Mayor  |\n");
						printf("|2.Menor  |\n");
						printf("|_________|\n");
						printf("¿Que accion desea realizar?");
						scanf("%d",&op6);
						switch(op6)
						{
							case 1:
							{
								burbuja_mayor();
								getch();	
								break;
							}
							case 2:
							{
								burbuja_menor();
								getch();
								break;
							}
						}
						break;
					}
					case 2:
					{	system("cls");
						inserccion_dire();
						getch();
						break;
					}
					case 3:
					{	system("cls");
						ordenacion_shell();
						getch();
						break;
					}
					case 4:
					{	system("cls");
						printf("<< Quiksort>>\n");
						printf(" ______________\n");
						printf("|1.Interactivo |\n");
						printf("|2.Recursivo   |\n");
						printf("|______________|\n");
						printf("¿Que accion desea realizar?");
						scanf("%d",&op7);
						switch(op7)
						{
							case 1:
							{
								system("cls");
								interac_quisort();
								getch();
								break;
							}
							case 2:
							{
								system("cls");
								recursivo();
								getch();
								break;
							}
						}
						break;
					}
					case 5:
					{   system("cls");
						moticulo_me();
						getch();
						break;
					}
					case 6:
					{	system("cls");
						megersort_or();
						break;
					}
					case 7:
					{ 	system("cls");
						Radixsor_or();
						system("pause");
						break;
					}

				}
				break;
			}
			case 6:
			{	
				system("cls");
				printf("<<<Graficas>>>        \n");
				printf(" ___________\n");
				printf("|1.Dijsktra |\n");
				printf("|2.Prim     |\n");
				printf("|3.Kruscal  |\n");
				printf("|___________|\n");
				printf("°°Lamentablemnte no exiten°°\n");
				getch();
				//scanf("%d",&op8);
				break;
			}
			case 7:
			{	
				system("cls");
				arbol_binario();
				getch();
				break;
			}
    	}
	}while(op!=8);
	system("cls");
	printf("        <<<Creditos>>>\n");
	printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
	printf("°°°°°Universidad de la Cañada°°°°°\n");
	printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
	printf("°Alumno Juarez Carrera Javier    °\n");
	printf("°Dra. Carmen Carlota Martinez Gil°\n");
	printf("°Etructura  de  datos            °\n");
	printf("°Tercer      semestre            °\n");
	printf("°Licenciatura en Informatica     °\n");
	printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
}
