/*
	Ejercicio 112 de aceptaelreto - Radares tramo
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
	float porcento, velocidad;
	int espacio, velocidadLim, tiempo;
	scanf("%d %d %d", &espacio, &velocidadLim, &tiempo);
	while( espacio || velocidadLim || tiempo)
	{
		if(espacio<=0 || velocidadLim<=0 || tiempo<=0)	printf("ERROR\n");
		else
		{
			velocidad = 3.6 * espacio / tiempo;
			porcento  = 1.2 * velocidadLim;
			if(velocidad<=velocidadLim*1.0)  printf("OK\n");
			else if(velocidad> porcento) printf("PUNTOS\n");
			else                         printf("MULTA\n");
		}
        scanf("%d %d %d", &espacio, &velocidadLim, &tiempo);
	}
	return 0;
}