/*
	Ejercicio 140 de aceptaelreto - Suma de d�gitos
	Realizado por ALFONSO++ (ALFONSOELMAS) para el canal de experimentando y aprendiendo
	Visitanos en youtube para aprender y consultarnos dudas!
	https://www.youtube.com/channel/UC6r1T9dSSPxCQ6TA061EJZA
	
	Este codigo pertenece a Alfonso Soria Mu�oz.
	Se recomienda NO PLAGIAR sino aprender o ayudarte a encontrar soluciones al ejercicio gracias a nuestra soluci�n
	propuesta.
	
	No garantizamos que esta soluci�n sea la m�s eficiente ni la m�s entendible, pero es una soluci�n original al
	problema abordado.
*/
#include<stdio.h>
int main()
{
	char	sNumero[13];
	int		Suma, i;
	scanf("%s",&sNumero);
	while(sNumero[0]!='-')
	{
		Suma=0;
		i=0;
		while(sNumero[i+1]!=0)
		{
			printf("%c + ",sNumero[i]);
			Suma+=sNumero[i]-48;
			i++;
		}
		Suma+=int(sNumero[i]-48);
		printf("%c = %d\n",sNumero[i], Suma);
		scanf("%s",&sNumero);
	}
	return 0;
}