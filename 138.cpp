/*
	Ejercicio 138 de aceptaelreto - Ceros del factorial
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


int fact_num_zeros(int n){
    
	if (n > 0)
        return (n/ 5 + fact_num_zeros(n / 5));
    else
        return 0;
}

int main()
{
	int n,a;
	scanf("%d",&a);
	while(a)
	{
		scanf("%d",&n);
		printf("%d\n",fact_num_zeros(n));
		a--;
	}
	return 0;
}