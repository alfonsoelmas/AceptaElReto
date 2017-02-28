/*
	Ejercicio 141 de aceptaelreto - Paréntesis balanceados
	Realizado por ALFONSO++ (ALFONSOELMAS) para el canal de experimentando y aprendiendo
	Visitanos en youtube para aprender y consultarnos dudas!
	https://www.youtube.com/channel/UC6r1T9dSSPxCQ6TA061EJZA
	
	Este codigo pertenece a Alfonso Soria Muñoz.
	Se recomienda NO PLAGIAR sino aprender o ayudarte a encontrar soluciones al ejercicio gracias a nuestra solución
	propuesta.
	
	No garantizamos que esta solución sea la más eficiente ni la más entendible, pero es una solución original al
	problema abordado.
*/

#include<stdio.h>
#include <iostream>
using namespace std;
const int AbreLlave=123;
const int AbreCorchete=91;
const int AbreParentesis=40;
const int CierraLlave=125;
const int CierraCorchete=93;
const int CierraParentesis=41;

int main()
{
    char LineaIn[10001];

	while((cin.getline(LineaIn,10001)) )
	{
        bool Error = false;
		int IndiceLinea=0;
		int IndicePila=-1;
        char Pila[5001];

		while(LineaIn[IndiceLinea]!='\0' && !Error)
		{
			switch(LineaIn[IndiceLinea])
			{
			case AbreLlave:
			case AbreCorchete:
			case AbreParentesis:
                ++IndicePila;
				Pila[IndicePila]=LineaIn[IndiceLinea];
				break;
			case CierraLlave:
				if(IndicePila==-1) Error = true;
				else
				{
					if(Pila[IndicePila] != AbreLlave) Error = true;
					else --IndicePila;
                }
				break;
			case CierraCorchete:
				if(IndicePila==-1) Error = true;
				else
				{
					if(Pila[IndicePila] != AbreCorchete) Error = true;
					else --IndicePila;
				}
				break;
			case CierraParentesis:
				if(IndicePila==-1) Error = true;
				else
				{
					if(Pila[IndicePila] != AbreParentesis) Error = true;
					else --IndicePila;
				}
				break;
			default://ignoramos
				break;
			}
			++IndiceLinea;
		}
		if(Error || IndicePila>-1) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}

