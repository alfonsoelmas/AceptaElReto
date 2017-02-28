/*
	Ejercicio 131 de aceptaelreto - Llenando piscinas
	Realizado por ALFONSO++ (ALFONSOELMAS) para el canal de experimentando y aprendiendo
	Visitanos en youtube para aprender y consultarnos dudas!
	https://www.youtube.com/channel/UC6r1T9dSSPxCQ6TA061EJZA
	
	Este codigo pertenece a Alfonso Soria Muñoz.
	Se recomienda NO PLAGIAR sino aprender o ayudarte a encontrar soluciones al ejercicio gracias a nuestra solución
	propuesta.
	
	No garantizamos que esta solución sea la más eficiente ni la más entendible, pero es una solución original al
	problema abordado.
*/

#include <stdio.h>
int main()
{
	int Piscina1, Barreno1, Perdida1, Piscina2, Barreno2, Perdida2;
	while (scanf("%d %d %d %d %d %d", &Piscina1, &Barreno1, &Perdida1, &Piscina2, &Barreno2, &Perdida2) && Piscina1*Piscina2)
	{
		int Yo = Barreno1>=Piscina1;
		int Ve = Barreno2>=Piscina2;
		int Diff1=Piscina1-Barreno1; int Dif1=Barreno1-Perdida1; 
		int Diff2=Piscina2-Barreno2; int Dif2=Barreno2-Perdida2; 
		//================================================
		if (Yo==0 && Dif1>0) Yo=Diff1/Dif1+(Diff1%Dif1>0)+1;
		//================================================
		if (Ve==0 && Dif2>0) Ve=Diff2/Dif2+(Diff2%Dif2>0)+1;
		//================================================
		if		(Yo==Ve)	    printf("EMPATE %d\n", Yo);
		else if (Ve<Yo && Ve>0 || Yo==0)	printf("VECINO %d\n", Ve);
		else				    printf("YO %d\n", Yo);
	}
	return 0