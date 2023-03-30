#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct NNodo{ 
	int ddato;
    struct NNodo *iizq;
	struct NNodo *dder;
} *pp1,*pp2,*qq, *tt;
    
struct NNodo* nuevo_Nodo(int info) 
{ 
  struct NNodo* nodo1 = new (struct NNodo);  
  nodo1->ddato = info; 
  nodo1->iizq= NULL;
  nodo1->dder= NULL;
  return(nodo1); 
}
//crea la lista al inicio
void crear_ListaInicio(struct NNodo* p)
{	int num, resp;
  	printf("Otro nodo?\nSi..[1]\nNo..[2]\n");
  	scanf("%d",&resp);
	if(resp == 1)
	{	printf("\nNodo -> INFO = ");
		scanf("%d", &num);
		qq=nuevo_Nodo(num);
		pp1->iizq=qq;
		qq->dder=pp1;
		pp1=qq;
		crear_ListaInicio(qq);
	} 
}
//crea la lista al final
void crear_ListaFinal(struct NNodo* p) {
  int num;
  char resp;
  
  printf("\n Otro nodo? ");
  scanf("%s", &resp);
  if(resp == 's' || resp == 'S')
  {  printf("\n Nodo -> INFO = ");
    scanf("%d", &num);
    qq = nuevo_Nodo(num);			//  p1=1   q=45         NULL<-45-><-1-> 
    pp1->dder=qq;
    qq->iizq=pp1;
    qq->iizq=NULL;
	qq=pp1;
    crear_ListaFinal(qq); 
}
}
//inserta nodo al inicio
void insertar_Nodo(struct NNodo* p ){
	int num;
	printf("\n Dato=");
	scanf("%d",& num);
	qq=nuevo_Nodo(num);
	qq->dder=pp1;
	pp1->iizq=qq;
	pp1=qq;
}
//inserta nodo despues de x
void insertar_NodoDespuesX(struct NNodo* p)
{	int x, num;
	printf("\n Nodo x=");
	scanf("%d",&x);
	tt=p;
	while((tt->ddato!=x)&&(tt!=NULL))
	{
		tt=tt->dder;
	}
	if(tt->ddato==x)
	{
		printf("\n Dato=");
		scanf("%d",&num);
		qq=nuevo_Nodo(num);
		qq->dder=tt->dder;
		tt->dder=qq;
	}
	else
	{if(tt==NULL)
		printf("\nEl nodo x no se escuntra en la lista");	
	}
}
//inserta nodo al final
void insertar_NodoFinal(struct NNodo* p)
{
	int num;
	printf("\n Dato=");
	scanf("%d",&num);
	qq=nuevo_Nodo(num);
	tt=pp1;
	while(tt->dder!=NULL)
	{
		tt=tt->dder;	
	}
	tt->dder=qq;
	qq->iizq=tt;
	qq->dder=NULL;
	
}
//elimina dato al inicio
void eliminar_Inicio(struct NNodo* p){
	qq=pp1;
	if(qq->dder!=NULL)
	{
		pp1=qq->dder;
		pp1->iizq=NULL;
	}
	else
	{
		pp1=NULL;
		tt=NULL;
	}
	delete(qq);
}

void eliminar_X(struct NNodo* p)
{ bool band=false;
	int x;
	printf("\n Dato x=");
	scanf("%d",&x);
	if(x==pp1->ddato)
	{
		qq=pp1;
		pp1=pp1->dder;
		delete(qq);
	}
	else
	{
		qq=p;
		while((qq->dder!=NULL)&&(qq->ddato!=x))
		{
			tt=qq;
			qq=qq->dder;
		}
		if(qq->ddato==x)
		{
			tt->dder=qq->dder;
			printf("El nodo con el dato <%d> °Eliminado°",qq->ddato);
			delete(qq);
		}
		else{
			printf("El nodo con el dato <%d> °No existe°",x);
		}
	}
}
//eliminar el ultimo nodo
void eliminar_Ultimo(struct NNodo* p)
{	qq=pp2;
	if(qq->iizq==NULL)
	{	pp2=NULL;
		tt=NULL;	
	}
	else
	{	while(qq->dder!=NULL)
		{	tt=qq;
			qq=qq->dder;
		}
		tt=qq->iizq;
		tt->dder=NULL;
		
	}
	delete(qq);
}
//busca el dato x en la lista 
void buscarin_DatoX(struct NNodo* p)
{	bool band=false;
	int x;
	printf("\n Dato x=");
	scanf("%d",&x);
	qq=p;
	while((qq!=NULL)&&(band!=true))
	{
		if(qq->ddato==x)
		{
			printf("Nodo con el dato <%d> °Encontrado°\n",qq->ddato);
			band=true;
		}
		qq=qq->dder;
	}
	if (band==false)
	{
		printf("Dato no encontrado\n");
	}
}
//recorre la lista de manera recursiva
void reco_rrer(struct NNodo* p)
{  
     if(p != NULL)
    {   printf(" %d ", p->ddato);
        reco_rrer(p->dder);
    }
}
//recorrer hacia atras
void recorrer_atras(struct NNodo* p)
{   if(p != NULL)
    {   printf(" %d ", p->ddato);
        recorrer_atras(p->iizq);
    }
}
//recorrer de forma interactiva
void recorrer_Interactiva(struct NNodo* p)
{	qq=p;
	while(qq!=NULL)
	{
		printf("[%d]<-->",qq->ddato);
		qq=qq->dder;
	}
}
//programa principal*/
void lista_doblemente()
{ int op, op1, op2, op3, op4, num, resp ;
   do
   {  system("cls");
   	  printf("°Lista doblemete ligda°\n");
   	  printf(" ___________________\n");  
	  printf("|1.- Crear lista    |\n");
	  printf("|2.- Insertar nodo  |\n");
	  printf("|3.- Eliminar nodo  |\n");
	  printf("|4.- Buscar         |\n");
	  printf("|5.- Recorrer       |\n");
	  printf("|6.- Salir          |\n");
	  printf("|___________________|\n");
	  printf("¿Que accion desea realizar?");
	  scanf("%d",&op);
	  switch(op)
	  {	//crear lista
	  	case 1: 
		  {		system("cls");
		  		printf("  °Crear lista°    \n");
	  			printf(" ______________\n");  
		  		printf("|1.- Al inicio |\n");
	  			printf("|2.- Al final  |\n");
	  			printf("|______________|\n");
	  			printf("¿Que accion desea realizar?");
	  			scanf("%d", &op1);
	  			switch(op1)
	  			{
	  				case 1:
					  {	//crear al inicio
	  							if (pp1==NULL)
	  							{	printf("\n\nCrear la Lista\n");
							    	printf("\nroot -> INFO = ");
							    	scanf("%d", &num);
							    	pp1 = nuevo_Nodo(num); 
									crear_ListaInicio(pp1);
	  							}
	  							else
	  							{	printf("\n ya esta creada la lista al nicio");
	  								printf("\n Desea coservalrla?---1._si--2._no");
	  								scanf("%d",&resp);
	  								if(resp==2)
	  								{	pp1=NULL;
	  									printf("\n\nCrear la Lista\n");
							    		printf("\nroot -> INFO = ");
							    		scanf("%d", &num);
							    		pp1 = nuevo_Nodo(num);   
										crear_ListaInicio(pp1);
	  								}
	  							}
	   				  			break;
					  }
							//crear al final	
					case 2:
					{			int num;
								printf("\n\nCrear la Lista\n");
							    printf("\nroot -> INFO = ");
							    scanf("%d", &num);
							    pp1 = nuevo_Nodo(num);   
    						    crear_ListaFinal(pp1);
							break;	
					}
	  			}	
	  		break;
	  	  }
	  	//insertar nodo
		case 2:
		{		system("cls");
				printf("   Insertar nodo    \n");
				printf(" ___________________\n");  
				printf("|1.- Al inicio 	    |\n");
	  			printf("|2.- Despues de x   |\n");
	  			printf("|3.- Al final       |\n");
	  			printf("|___________________|\n"); 
	  			printf("¿Que accion desea realizar?");
	  			scanf("%d",&op2);
	  			switch(op2)
	  			{	//insertar al inicio
	  				case 1:
					  	{	insertar_Nodo(pp1);
	  						break;
	  					}
	  				//insertar el nodo despues de x	
	  				case 2:
					  	{	insertar_NodoDespuesX(pp1);
	  						break;
	  					} 
	  				//insertar al final	
	  				case 3:
	  					{	insertar_NodoFinal(pp1);
	  						break;
	  					}	
	  			}
				break;
		}
		//eliminar nodo		
		case 3: 
		{		system("cls");
				printf("           Eliminar        \n");
				printf(" __________________________________\n");
				printf("|1.- El primer nodo                |\n");
	  			printf("|2.- El nodo con informacion de x  |\n");
	  			printf("|3.- El ultimo nodo                |\n");
	  			printf("|__________________________________|\n"); 
	  			printf("¿Que accion desea realizar?");
	  			scanf("%d",&op3);
	  			switch(op3)
	  			{	//elinar el primer nodo
				  	case 1:
				  		{	eliminar_Inicio(pp1);
				  			break;
				  		}
				  	//eliminar el dato x	
				  	case  2:
					    {	eliminar_X(pp1);
				  			break;
				  		}
				  	//eliminar el ultimo nodo
	  				case 3:
					  	{	eliminar_Ultimo(pp1);
	  						break;
	  					}
	  			}
				break;
		}
		//buscar dato x		
		case 4:
			{	buscarin_DatoX(pp1);
				break;
			}
		//recorrer lista
		case 5:
		{		system("cls");
				printf("      Recorrer        \n");
				printf(" _____________________\n");
				printf("|1.- hacia adelante   |\n");
	  			printf("|2.- Interacticva     |\n");
	  		//	printf("|3.- El ultimo nodo   |\n");
	  			printf("|3.- Hacia atras      |\n");
	  			printf("|_____________________|\n"); 
	  			printf("¿Que accion desea realizar?");
	  			scanf("%d",&op4);
	  			switch(op4)
	  			{	//recorre de forma recursiva
	  				case 1:
					  {		printf("\n\nRecorrido\n");
    						reco_rrer(pp1);
	  						break;
	  				  }
	  				//recorre de forma interactiva		
					case 2:
						{	recorrer_Interactiva(pp1);
							break;
						}
					//recorre el ultimo nodo
					case 3:
						{	recorrer_atras(pp2);
							break;
						}			  	
	  			  }
				break;	 		
	  	}
	  	break;
	  }
	  getch();
   }while(op!=6);
}
