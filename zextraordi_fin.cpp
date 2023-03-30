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
		printf("   같같같같같같같같같같같\n");
		printf("   캞structuras de datos�\n");
		printf("   같같같같같같같같같같같\n");
		system("color 0b");
		printf(" __________캫enu�__________\n");
		printf("|1.Arreglos같같같          |\n");
		printf("|2.Pilas                   |\n");
		printf("|3.Colas                   |\n");
		printf("|4.Listas                  |\n");
		printf("|5.Metodos de ordenacion   |\n");
		printf("|6.Graficas                |\n");
		printf("|7.Arboles                 |\n");
		printf("|8.salir                   |\n");
		printf("|__________________________|\n");
		printf("풯ue accion desea realizar?");
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
				printf("풯ue accion desea realizar?");
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
				printf("풯ue accion desea realizar?");
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
				printf("풯ue accion desea realizar?");
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
				printf("풯ue accion desea realizar?");
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
				printf("풯ue accion desea realizar?");
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
						printf("풯ue accion desea realizar?");
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
						printf("풯ue accion desea realizar?");
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
				printf("같Lamentablemnte no exiten같\n");
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
	printf("같같같같같같같같같같같같같같같같같\n");
	printf("같같캵niversidad de la Ca�ada같같�\n");
	printf("같같같같같같같같같같같같같같같같같\n");
	printf("캚lumno Juarez Carrera Javier    �\n");
	printf("캝ra. Carmen Carlota Martinez Gil�\n");
	printf("캞tructura  de  datos            �\n");
	printf("캴ercer      semestre            �\n");
	printf("캪icenciatura en Informatica     �\n");
	printf("같같같같같같같같같같같같같같같같같\n");
}
