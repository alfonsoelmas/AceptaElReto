/*
	Ejercicio 120 de aceptaelreto - Constante m�gica
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
#include<stdio.h>
int main()
{
	int Lado, Semilla;
	
	while (	scanf("%d%d", &Lado, &Semilla) && (Lado || Semilla))
	{
		if (Lado==1) printf("%d\n", Semilla);
		else
		{
			int Incremento = 2+Lado;
			int KonstanteMagica = Semilla;
			int Veces=Lado*0.5;
			
			for (int i=0; i<Veces; i++)
			{
				Semilla += Incremento;
				KonstanteMagica += Semilla;
			}
			Semilla += 2;
			KonstanteMagica += Semilla;
				
			for (int i=1; i<Veces; i++)
			{
				Semilla += Incremento;
				KonstanteMagica += Semilla;
			}
			printf("%d\n", KonstanteMagica);
		}
	}
	return 0;
}