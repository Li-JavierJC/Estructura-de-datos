#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct nodo
    { int dato;
      nodo *liga;
    } *p1, *q, *t;
    
struct nodo* NuevoNodo(int info) { 
  struct nodo* nodo1 = new(struct nodo);  
  nodo1->dato = info; 
  nodo1->liga = NULL;
  return(nodo1); 
}
//crea la lista al inicio
void crearListaInicio(struct nodo* p)
{	int num, resp;
  	printf("\n Otro nodo?--1_si..2_no\n");
  	scanf("%d",&resp);
	if(resp == 1)
	{	printf("\nNodo -> INFO = ");
		scanf("%d", &num);
		q=NuevoNodo(num);
		q->liga=p;
		p1=q;
		crearListaInicio(q);
	} 
}
//crea la lista al final
void crearListaFinal(struct nodo* p) {
  int num;
  char resp;
  
  printf("\n Otro nodo? ");
  scanf("%s", &resp);
  if(resp == 's' || resp == 'S')
  {  printf("\n Nodo -> INFO = ");
    scanf("%d", &num);
    q = NuevoNodo(num);
    p->liga = q;
    crearListaFinal(q);
  }    
}
//inserta nodo al inicio
void insertarNodo(struct nodo* p ){
	int num;
	printf("\n Dato=");
	scanf("%d",& num);
	q=NuevoNodo(num);
	q->liga=p1;
	p1=q;
}
//inserta nodo despues de x
void insertarNodoDespuesX(struct nodo* p)
{
	int x, num;
	printf("\n Nodo x=");
	scanf("%d",&x);
	t=p;
	while((t->dato!=x)&&(t!=NULL))
	{
		t=t->liga;
	}
	if(t->dato==x)
	{
		printf("\n Dato=");
		scanf("%d",&num);
		q=NuevoNodo(num);
		q->liga=t->liga;
		t->liga=q;
	}
	else
	{if(t==NULL)
		printf("\nEl nodo x no se escuntra en la lista");	
	}
}
//inserta nodo al final
void insertarNodoFinal(struct nodo* p)
{
	int num;
	printf("\n Dato=");
	scanf("%d",&num);
	q=NuevoNodo(num);
	t=p;
	while(t->liga!=NULL)
	{
		t=t->liga;	
	}
	t->liga=q;
	
}
//elimina dato al inicio
void eliminarInicio(struct nodo* p){
	q=p1;
	p1=p1->liga;
	delete(q);
}
//elimina el dato x
void eliminarX(struct nodo* p){
	int x;
	printf("\n Dato x=");
	scanf("%d",&x);
	if(x==p1->dato)
	{
		q=p1;
		p1=p1->liga;
		delete(q);
	}
	else
	{
		q=p;
		while((q->liga!=NULL)&&(q->dato!=x))
		{
			t=q;
			q=q->liga;
		}
		if(q->dato==x)
		{
			t->liga=q->liga;
			delete(q);
		}
	}	
}
//eliminar el ultimo nodo
void eliminarUltimo(struct nodo* p)
{	q=p;
	if(p->liga==NULL)
	{p=NULL;
	}
	else
	{	while(q->liga!=NULL)
		{	t=q;
			q=q->liga;
		}
		t->liga=NULL;
	}
	delete(q);
}
//busca el dato x en la lista 
void buscarinDatoX(struct nodo* p)
{	int x;
	printf("\n Dato x=");
	scanf("%d",&x);
	q=p;
	while((q->liga!=NULL)&&(q->dato!=x))
	{
		q=q->liga;
	}
	if(q->dato==x)
	printf("\n El dato si se esncuntra en la lista");
	else
	printf("\n El dato no se encuentra en la lista");
}
//recorre la lista de manera recursiva
void recorrer(struct nodo* p)
{   if(p != NULL)
    {   printf(" %d ", p->dato);
        recorrer(p->liga);
    }
}
//recorrer de forma interactiva
void recorrerInteractiva(struct nodo* p)
{	q=p;
	while(q!=NULL)
	{
		printf("[%d]->",q->dato);
		q=q->liga;
	}
}
//recorre el ultimo dato
void recorreUltimo(struct nodo* p)
{	q=p;
	if(p->liga==NULL)
	{p=NULL;
	}
	else
	{	while(q->liga!=NULL)
		{	t=q;
			q=q->liga;
		}
		t->liga=NULL;
	}
	printf("\n %d",q->dato);
}
//programa principal
void listasim()
{ int op, op1, op2, op3, op4, num, resp ;
   do
   {
   	  system("cls");
   	  printf("  　Lista simple!!  \n");
	  printf(" ___________________\n");  
	  printf("|1.- Crear lista    |\n");
	  printf("|2.- Insertar nodo  |\n");
	  printf("|3.- Eliminar nodo  |\n");
	  printf("|4.- Buscar         |\n");
	  printf("|5.- Recorrer       |\n");
	  printf("|6.- Salir          |\n");
	  printf("|___________________|\n");
	  printf("Que accion desea realizar:");
	  scanf("%d",&op);
	  switch(op)
	  {	//crear lista
	  	case 1: 
		  {	 	system("cls");
		  		printf(" 　Crear lista!! \n");
		  		printf(" _______________\n"); 
		  		printf("|1.- Al inicio  |\n");
	  			printf("|2.- Al final   |\n");
	  			printf("|_______________|\n");
	  			printf("Que accion desea realizar:");
	  			scanf("%d", &op1);
	  			switch(op1)
	  			{
	  				case 1:{	//crear al inicio
	  							if (p1==NULL)
	  							{	printf("\n\nCrear la Lista\n");
							    	printf("\nroot -> INFO = ");
							    	scanf("%d", &num);
							    	p1 = NuevoNodo(num);   
									crearListaInicio(p1);
	  							}
	  							else
	  							{
	  								printf("\n ya esta creada lalista al nicio");
	  								printf("\n Desea coservalrla?---1._si--2._no");
	  								scanf("%d",&resp);
	  								if(resp==2)
	  								{	p1=NULL;
	  									printf("\n\nCrear la Lista\n");
							    		printf("\nroot -> INFO = ");
							    		scanf("%d", &num);
							    		p1 = NuevoNodo(num);   
										crearListaInicio(p1);
	  								}
	  							}
	   				  			break;
							}
							//crear al final	
					case 2:{int num;
								printf("\n\nCrear la Lista\n");
							    printf("\nroot -> INFO = ");
							    scanf("%d", &num);
							    p1 = NuevoNodo(num);   
    						    crearListaFinal(p1);
							break;	
					}
	  			}
	  		
	  		break;
	  	}
	  	//insertar nodo
		case 2: system("cls");
				printf("    　Inseratar!!\n");
				printf(" ___________________\n"); 
				printf("|1.- Al inicio      |\n");
	  			printf("|2.- Despues de x   |\n");
	  			printf("|3.- Al final       |\n");
	  			printf("|___________________|\n");
	  			printf("Que accion desea realizar:");
	  			scanf("%d",&op2);
	  			switch(op2)
	  			{	//insertar al inicio
	  				case 1:
					  	{
	  						insertarNodo(p1);
	  						break;
	  					}
	  				//insertar el nodo despues de x	
	  				case 2:
					  	{
	  						insertarNodoDespuesX(p1);
	  						break;
	  					} 
	  				//insertar al final	
	  				case 3:
	  					{
	  						insertarNodoFinal(p1);
	  					}
	  				
	  			}
				break;
		//eliminar nodo		
		case 3: system("cls");
				printf("		　Eliminar!!\n");
				printf(" _________________________________\n");
				printf("|1.- El primer nodo               |\n");
	  			printf("|2.- El nodo con informacion de x |\n");
	  			printf("|3.- El ultimo nodo               |\n");
	  			printf("|_________________________________|\n");
	  			printf("Que accion desea realizar:");
	  			scanf("%d",&op3);
	  			switch(op3)
	  			{	//elinar el primer nodo
				  	case 1:
				  		{	eliminarInicio(p1);
				  			break;
				  		}
				  	//eliminar el dato x	
				  	case  2:
					    {
				  			eliminarX(p1);
				  			break;
				  		}
				  	//eliminar el ultimo nodo
	  				case 3:
					  	{
	  						eliminarUltimo(p1);
	  						break;
	  					}
	  			}
				break;
		//buscar dato x		
		case 4:{
					buscarinDatoX(p1);
					break;
				}
				break;
		//recorrer lista
		case 5:	
				system("cls");
				printf("		　Recorrer!!\n");
				printf(" _________________________\n");
				printf("|1.- De manera recursiva  |\n");
	  			printf("|2.- Interacticva         |\n");
	  			printf("|3.- El ultimo nodo       |\n");
	  			printf("|_________________________|\n");
	  			printf("Que accion desea realizar:");
	  			scanf("%d",&op4);
	  			switch(op4)
	  			{	//recorre de forma recursiva
	  				case 1:{printf("\n\nRecorrido\n");
    						recorrer(p1);
	  						break;
	  						}
	  				//recorre de forma interactiva		
					case 2:
						{
							recorrerInteractiva(p1);
							break;
						}
					//recorre el ultimo nodo
					case 3:
						{
							recorreUltimo(p1);
							break;
						}		  	
	  			}
				break;	 		
	  }
	  getch();
   }while(op!=6);
}
