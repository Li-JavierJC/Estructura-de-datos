# include <conio.h>
# include <stdio.h>
# define Tam 40
char expresion[Tam],pil[Tam];
int top=-1;
int pil_vacia()
{	if( top == -1)
		return 1;
	else 
		return 0;
}
void pila_meter(char d)
{	top=top + 1;
	pil[top]= d;
}
int pil_sacar()
{	char d;
	d = pil[top];
	top = top-1;
	return d;
}
void balanceo1()
{	int i=0, resul, bandera=0;
	printf("\n/////Evalucion de Balanceo////\n\n");
	printf("Ingrese la expresion con parentesis con limite de %d cifras:\n",Tam);
	scanf("%s",&expresion);
	while((bandera==0)&&(i<Tam))
	{
		if(expresion[i]=='(')	
			pila_meter(expresion[i]);
		else
		if(expresion[i]==')')
		{	resul = pil_vacia();
			if(resul==1) 
				bandera=1;
			else
				pil_sacar();
		}
		i++;					
	}
	if(bandera==1)
		printf("La expresion es incorrecta!!\n");
	else
	{	resul = pil_vacia();
		if(resul==1)
			printf("<< La expresion esta balanceada >>\n\n\n");
		else
			printf("<< La expresion no esta balanceada >>\n\n\n");	
	}
}
