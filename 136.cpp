/*
	Ejercicio 136 de aceptaelreto - Encadenando trolls
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

int FuerzaHobbit, FuerzaEnanos;
//------------------------------------------------------------------------
int Trocear(int Cadena)
{
    if (Cadena > FuerzaEnanos)
    {
        int Trozo1 = Cadena / 3;
        int Trozo2 = Cadena - Trozo1;
        return 1 + Trocear(Trozo1) + Trocear(Trozo2);
    }
    else return 0;
}
//------------------------------------------------------------------------
int main()
{
    int EslabonesCadena;
    while (scanf("%d %d", &FuerzaHobbit, &EslabonesCadena) && FuerzaHobbit)
    {
        FuerzaEnanos = FuerzaHobbit + FuerzaHobbit;
        int NumEslabones = Trocear(EslabonesCadena);
        printf("%d\n", NumEslabones);
    }
   return 0;
}