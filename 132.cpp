/*
	Ejercicio 132 de aceptaelreto - Las cartas del abuelo
	Realizado por ALFONSO++ (ALFONSOELMAS) para el canal de experimentando y aprendiendo
	Visitanos en youtube para aprender y consultarnos dudas!
	https://www.youtube.com/channel/UC6r1T9dSSPxCQ6TA061EJZA
	
	Este codigo pertenece a Alfonso Soria Mu�oz.
	Se recomienda NO PLAGIAR sino aprender o ayudarte a encontrar soluciones al ejercicio gracias a nuestra soluci�n
	propuesta.
	
	No garantizamos que esta soluci�n sea la m�s eficiente ni la m�s entendible, pero es una soluci�n original al
	problema abordado.
*/
#pragma GCC optimize ("O2")

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int AuxLinea[1000001];
int main()
{
	string Linea;
	while(getline(cin, Linea, '\n'))
	{
		int LonLinea = (int)Linea.size();
		AuxLinea[0] = 0;
		for(int i=1; i<LonLinea; ++i) AuxLinea[i] = Linea[i]==Linea[i-1] ? AuxLinea[i-1] : i;

		int NumTest;
		scanf("%d", &NumTest);

		if(NumTest==0) return 0;

		while(NumTest--)
		{
			int Inicio, Final;
			scanf("%d%d\n", &Inicio, &Final);

			if(Inicio>Final) swap(Inicio, Final);
			printf((AuxLinea[Final]<=Inicio ? "SI\n" : "NO\n"));
		}
		printf("\n");
	}
}