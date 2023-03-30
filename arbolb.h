# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

struct Nodo
{
	int dato;
	Nodo *izq;
	Nodo *der;
	Nodo *padre;
};
Nodo *arbol=NULL;
//funcion pra crear nodo
Nodo *crearnodo(int n,Nodo *padre )
{
	Nodo *nu_nodo= new Nodo();
	 nu_nodo->dato=n;
	 nu_nodo->izq=NULL;
	 nu_nodo->der=NULL;
	 nu_nodo->padre=padre;
	 
	 return nu_nodo;
}
//funcion para insertar nodo
void insertarNodo(Nodo *&arbol,int n,Nodo *padre)
{
	if(arbol==NULL)//verificar sie el arbol esta vacio
	{
		Nodo*nu_nodo=crearnodo(n,padre);
		arbol=nu_nodo;
	}
	else//si el nodo tiene uno mas nodos
	{	int valRaiz=arbol->dato;//obtemos el valor de la raiz
		if(n < valRaiz)//si el elmento es menor a la raiz entoces insertamos a la izq
		{
			insertarNodo(arbol->izq,n,arbol);
		}
		else//si es mayor insertamos a la der
		{
			insertarNodo(arbol->der,n,arbol);
		}
		
	}
}
// recorrer el arbol en forma preorden
void preorden(Nodo* arbol)
{   if(arbol != NULL)// si el arbol esta vacio
    {   printf(" %d", arbol->dato);
		preorden(arbol->izq);
        preorden(arbol->der);
    }
}
// recorrer el arbol en forma inorden
void inOrden(Nodo* arbol)
{   if(arbol!= NULL)// si el arbol esta vacio
    {   inOrden(arbol->izq);
        printf(" %d ",arbol->dato);
        inOrden(arbol->der);
    }
}
// recorrer el arbol en forma posorden
void posorden(Nodo *arbol)
{   if(arbol != NULL)// si el arbol esta vacio
    {   
		posorden(arbol->izq);
        posorden(arbol->der);
        printf(" %d", arbol->dato);
    }
}
//fucion para buscar un dato dentro del arbol
bool buscar(Nodo*arbol,int n)
{
	if(arbol==NULL)//si el arbol esta vacio
	{
		return false;
	}
	else
	{
		if(arbol->dato==n)//si el dat es igual que el elemento que estamos buscando
		{
			return true;
		}
		else
		{
			if(n<arbol->dato)
			{
				return buscar(arbol->izq,n);
			}
			else
			{
				if(n>arbol->dato)
				{
					return buscar(arbol->der,n);
				}
			}
		}
	}
}
// funcion para determinar el nodo mas izquierda posible
Nodo* minimo(Nodo *arbol)
{
	if(arbol==NULL)//realizar la accion si el arbol no esta vacio
	{
		return NULL;
	}
	else
	{
		if(arbol->izq)//verificar si tiene hijo izquierdo
		{
			return minimo(arbol->izq);//buscar el valor mas izquierdo posible
		}
		else
		{	//si no tiene hijo izquierdo 
			return arbol;//regresa el mismo arbo
		}
	}
}

// funcion para remplazar los nodos
void remplazar(Nodo *arbol,Nodo *nueNodo)
{
	if(arbol->padre)
	{
		if(arbol->dato==arbol->padre->izq->dato)
		{
			arbol->padre->izq=nueNodo;//arbol->padre asinarle a su nuevo hijo
		}
		else
		{
			if(arbol->dato==arbol->padre->der->dato)
			{
				arbol->padre->der=nueNodo;
			}
		}
	}
	if(nueNodo)
	{
		nueNodo->padre=arbol->padre;//se prosede a  ha asignarle a su nuevo padre
	}
	
}
//funcion para eliminar definitivamente el nodo
void destruir(Nodo*nodo)
{
	nodo->izq=NULL;
	nodo->der=NULL;
	delete nodo;
}
//funcion para eliminar el nodo encontrado
void eliminarNodo(Nodo *Nodeliminar)
{
	if(Nodeliminar->izq&&Nodeliminar->der)//verificamos si tiene hijo izq y hijo derecho 
	{
		Nodo *menor= minimo(Nodeliminar->der);
		Nodeliminar->dato=menor->dato;
		eliminarNodo(menor);
	}
	else if(Nodeliminar->izq)//si tiene hijo izquierdo
		{
			remplazar(Nodeliminar,Nodeliminar->izq);
			destruir(Nodeliminar);
		}
	else if(Nodeliminar->der)
		{
			remplazar(Nodeliminar,Nodeliminar->der);
			destruir(Nodeliminar);
		}
	else
	{
		remplazar(Nodeliminar,NULL);
		destruir(Nodeliminar);
	}
}
//funcion para eliminar nodo en el arbol
void eliminar(Nodo *arbol,int n)
{
	if(arbol==NULL)//si el arbol no esta vacio realizamo las acciones 
	{
		return;
	}
	else
	{
		if(n< arbol->dato)//verificamos si el dato es menor
		{
			eliminar(arbol->izq,n);//si es menor buscamos a la izquierda
		}
		else
		{
			if(n>arbol->dato)//verificamos si el dato es mayor
			{
				eliminar(arbol->der,n);// si es mayor buscamos a la derecha
			}
			else
			{	//si encontramos el nodo 
				eliminarNodo(arbol);//Entoces creamos una funcio para eliminar el nodo encontrado
			}
		}
	}
}

void arbol_binario()
{	int dato,opc,opc1,opc2;
	 do
	 {	 system("cls");
	 	 printf("캚RBOL BINARIO DE BUSQUEDA�\n");
	 	 printf("      같MENU같\n");
	 	 printf(" ______________________\n");
	 	 printf("|1.- Crear arblol      |\n");
	 	 printf("|2.- Recorrer arbol    |\n");
	 	 printf("|3.- Insertar un Nodo  |\n");
	 	 printf("|4.- Buscar un Nodo    |\n");
	 	 printf("|5.- Eliminar un Nodo  |\n");
	 	 printf("|6.- Salir             |\n");
	 	 printf("|______________________|\n");
	 	 printf("Que accion desea realizar?");
	 	 scanf("%d",&opc);
	 	 switch(opc)
	 	 {
	 	 	case 1:
			  	{
			  		do
			  		{
			  			system("cls");
			  			printf(" 같Creado Arbol같\n");
			  			printf("Ingresar Nodo:");
			  			scanf("%d",&dato);
			  			insertarNodo(arbol,dato,NULL);//insertamo el nodo
			  			printf("Desea agregar otro Nodo?\n Si..[1]\n No..[2]\n");
			  			scanf("%d",&opc1);
			  		} while(opc1!=2);
	 	 			break;
	 	 		}
	 	 	case 2:
			  	{
			  		system("cls");
			  		printf(" 같Recorrer Arbol같\n");
			  		printf(" ___________________\n");
			  		printf("|1.- Preorden       |\n");
			  		printf("|2.- InOrden        |\n");
			  		printf("|3.- Posorden       |\n");
			  		printf("|___________________|\n");
			  		printf("Que accion desea realizar?");
			  		scanf("%d",&opc2);
			  		switch(opc2)
			  		{
			  			case 1:
						  	{
						  		preorden(arbol);
			  					break;
			  				}
			  			case 2:
						  	{	inOrden(arbol);
			  					break;
			  				}
			  			case 3:
						  	{
						  		posorden(arbol);
			  					break;
			  				}
			  		}
	 	 			break;
	 	 		}
	 	 	case 3:
				{	
					printf("Ingresar Nodo:");
			  		scanf("%d",&dato);
			  		insertarNodo(arbol,dato,NULL);//insertamo el nodo
	 	 			break;
	 	 		}
	 	 	case 4:
			  	{ 
			  		printf("같BUSCAR NODO같\n");
			  		printf("Ingrese el Nodo a Buscar:");
			  		scanf("%d",&dato);
			  		if((buscar(arbol,dato))==true)
			  		{
			  			printf("El Nodo %d si se encuntra en el arbol\n",dato);
			  		}
			  		else
			  		{
			  			printf("El Nodo %d no se encuntra en el arbol\n",dato);
			  		}
	 	 			break;
	 	 		}
	 	 	case 5:
			  	{
					printf("같ELIMINAR NODO같\n");
			  		printf("Ingrese el Nodo a Eliminar:");
			  		scanf("%d",&dato);
					eliminar(arbol,dato);	 	 		
	 	 			break;
	 	 		}
	 	 }
	 	 printf("\n");
	 	 system("pause");

	 }while(opc!=6);	
}
