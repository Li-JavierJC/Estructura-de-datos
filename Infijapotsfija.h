# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# define AM 20
char expresio[AM],ppila[AM], postfija[AM];
int ttope=-1;
int ppila_vacia()
{	if( ttope == -1)
		return 1;
	else 
		return 0;
}
void ppila_meter(char d)
{	ttope=ttope + 1;
	ppila[ttope]= d;
}
int ppila_sacar()
{	char d;
	d = ppila[ttope];
	ttope = ttope-1;
	return d;
}
void infija_postfija()
{	int i=0, resul, bandera=0;
	printf("Ingresea la expresion con parentesis con limite de %d cifras:\n",AM);
	scanf("%s",&expresio);
	while((bandera==0)&&(i<AM))
	{
		if(expresio[i]=='(')	
			pila_meter(expresio[i]);
		else
		if(expresio[i]==')')
		{	resul = pila_vacia();
			if(resul==1) 
				bandera=1;
			else
				pila_sacar();
		}
		i++;					
	}
	if(bandera==1)
		printf("La expresion es incorrecta!!\n");
	else
	{	resul = pila_vacia();
		if(resul==0)
			printf("<< La expresion no esta balanceada >>\n\n\n");
		else
		{
			while((resul==1)&&(i<AM))
			{
				if(expresio[i]=='(')
				{
					pila_meter(expresio[i]);
				}
				else
				{
					if(expresio[i]=='-')
					pila_meter(expresio[i]);
					else
					{
						if(expresio[i]=='+')
						{
							pila_meter(expresio[i]);
						}
						else
						{
							if(expresio[i]=='*')
							{
								pila_meter(expresio[i]);
							}
							else
							{
								if(expresio[i]=='/')
								{
									pila_meter(expresio[i]);
								}
								else
								{
									if(expresio[i]=='^')
									{
										pila_meter(expresio[i]);
									}
									else
									{
										if(expresio[i]!=')')
										postfija[i]=expresio[i];
									}
								}
							}
						}
					}
				}	
				i++;	
			}
		}			
	}
	//for(i=0;i<TAM;i++)
	//{
		printf("%s\n\n\n",expresio[i]);
	//}
	system("pause");
}
