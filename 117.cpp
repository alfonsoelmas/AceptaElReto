/*
	Ejercicio 117 de aceptaelreto - La fiesta aburrida
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
	int casos;
	char dato1[5],dato2[100];
	scanf("%d",&casos);
	for(int i=0; i<casos; i++)
	{
		scanf("%s %s",dato1,dato2);
		printf("Hola, %s.\n",dato2);
	}
	return 0;
}