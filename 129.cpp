/*
	Ejercicio 129 de aceptaelreto - Marcadores de 7 segmentos
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
				//	 0  1  2  3  4  5  6  7  8  9 10 
	int T[10][11]={{0, 4, 3, 3, 4, 3, 2, 3, 1, 2, 6}, // 0
					{4, 0, 5, 3, 2, 5, 6, 1, 5, 4, 2}, // 1  
					{3, 5, 0, 2, 5, 4, 3, 4, 2, 3, 5}, // 2  
					{3, 3, 2, 0, 3, 2, 3, 2, 2, 1, 5}, // 3  
					{4, 2, 5, 3, 0, 3, 4, 3, 3, 2, 4}, // 4  
					{3, 5, 4, 2, 3, 0, 1, 4, 2, 1, 5}, // 5  
					{2, 6, 3, 3, 4, 1, 0, 5, 1, 2, 6}, // 6  
					{3, 1, 4, 2, 3, 4, 5, 0, 4, 3, 3}, // 7  
					{1, 5, 2, 2, 3, 2, 1, 4, 0, 1, 7}, // 8  
					{2, 4, 3, 1, 2, 1, 2, 3, 1, 0, 6}  // 9
				  };
	
	int Anterior;
	while (scanf("%d", &Anterior) && Anterior!=-1)
	{
		int Cnt=1;
		int Siguiente=0;
		int Suma=T[Anterior][10];
		while (scanf("%d", &Siguiente) && Siguiente!=-1)
		{
			Cnt++;
			Suma += T[Anterior][Siguiente];
			Anterior = Siguiente;
		}
		Suma += T[Anterior][10];
		Suma *= Cnt;
		printf ("%d\n", Suma);
	}
	return 0;
}