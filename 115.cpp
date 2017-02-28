/*
	Ejercicio 115 de aceptaelreto - Numero de kaprekar
	Realizado por ALFONSO++ (ALFONSOELMAS) para el canal de experimentando y aprendiendo
	Visitanos en youtube para aprender y consultarnos dudas!
	https://www.youtube.com/channel/UC6r1T9dSSPxCQ6TA061EJZA
	
	Este codigo pertenece a Alfonso Soria Mu�oz.
	Se recomienda NO PLAGIAR sino aprender o ayudarte a encontrar soluciones al ejercicio gracias a nuestra soluci�n
	propuesta.
	
	No garantizamos que esta soluci�n sea la m�s eficiente ni la m�s entendible, pero es una soluci�n original al
	problema abordado.
*/
#include <stdio.h>

#include <stdio.h>

int main()
{
	//long long int Cuadrado=0;
	//int Digit=0;
	int Num=0;
	
	bool KaprekarNumbers[38963]={0};
	
	KaprekarNumbers[1]=true;
	KaprekarNumbers[9]=true;
	KaprekarNumbers[45]=true;
	KaprekarNumbers[55]=true;
	KaprekarNumbers[99]=true;
	KaprekarNumbers[297]=true;
	KaprekarNumbers[703]=true;
	KaprekarNumbers[999]=true;
	KaprekarNumbers[2223]=true;
	KaprekarNumbers[2728]=true;
	KaprekarNumbers[4879]=true;
	KaprekarNumbers[4950]=true;
	KaprekarNumbers[5050]=true;
	KaprekarNumbers[5292]=true;
	KaprekarNumbers[7272]=true;
	KaprekarNumbers[7777]=true;
	KaprekarNumbers[9999]=true;
	KaprekarNumbers[17344]=true;
	KaprekarNumbers[22222]=true;
	KaprekarNumbers[38962]=true;
	
	
	while (scanf("%d", &Num) && Num)
	{
		
		if (Num<38963 && KaprekarNumbers[Num]) printf("SI\n");
		else					  printf("NO\n");

	}
	
return 0;
}