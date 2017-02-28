/*
	Ejercicio 146 de aceptaelreto - Números afortunados
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
	int Caso;
	while(scanf("%d", &Caso) && Caso)
	{
        int Origen=Caso;
        Caso/=2;
        int *Lista=new int [Caso];
        int *Ayuda=new int [Caso];
        int Switch=1;
        for (int i=0; i<Caso; i++) { Lista[i]=2*(i+1); Ayuda[i]=2*(i+1); }

        int Quedan=Caso;
        int TachoUnaCada=3;
        while (Quedan>=TachoUnaCada)
        {
            int Veces=0;
            if (Switch)
            {
                for (int Indice=1; Indice<Quedan; Indice++)
                    if (Indice % TachoUnaCada) {Ayuda[Veces]=Lista[Indice]; Veces++;}
            }
            else
            {
                for (int Indice=1; Indice<Quedan; Indice++)
                    if (Indice % TachoUnaCada) {Lista[Veces]=Ayuda[Indice]; Veces++;}
            }

            Switch ^= 1;
            Quedan=Veces;
            TachoUnaCada++;
        }
		//--------------------------------------
		printf("%d:", Origen);
		if (Switch) for (int i=Quedan-1; i>-1; i--) printf (" %d", Lista[i]);
		else        for (int i=Quedan-1; i>-1; i--) printf (" %d", Ayuda[i]);
		printf("\n");
		delete[] Lista;
		delete[] Ayuda;
	}
	return 0;
}

