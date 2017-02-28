/*
	Ejercicio 109 de aceptaelreto - Liga de pádel
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
#include <cstring> // strcmp
using namespace std;

#define MAX 2000
int main()
{
	char cParejas[MAX][17];
	int iParejas[MAX];
    char categoria[17];
    scanf("%s", categoria);								// Nombre categoría / FIN

    while(strcmp(categoria, "FIN") != 0)
    {
        char cEquipoLocal[17], cEquipoVisitante[17];	// Lectura equipos
        char cEquipoPrimero[17];						// Vale con saber el nombre del primero
		int equipoPrimero=0, equipoSegundo=0;			// Vale con saber los puntos de los 2 primeros
		int numEquipos=0;								// Numero de equipos en la categoria:
        int setsLocal, setsVisitante;					// Lectura sets
        int partidosJugados = 0;						// Partidos jugados de la categoria

		for (int i=0; i<MAX; i++) { cParejas[i][0]=0; iParejas[i]=0; }

		scanf("%s", cEquipoLocal);						// Nombre pareja local / FIN
        while (strcmp(cEquipoLocal, "FIN") != 0)
		{
            scanf("%d %s %d", &setsLocal, cEquipoVisitante, &setsVisitante );

			// Busco los equipos
			bool existe=false;
			int indLocal=0;
			int i=0;
			for (i=0; i<numEquipos; i++)
			{
				if (strcmp(cEquipoLocal, cParejas[i])==0)
				{
					existe=true;
					break;
				}
			}
			indLocal=i;
			if (!existe) { numEquipos++; strcpy(cParejas[i], cEquipoLocal); }

			existe=false;
			int indVisitante=0;
			for (i=0; i<numEquipos; i++)
			{
				if (strcmp(cEquipoVisitante, cParejas[i])==0)
				{
					existe=true;
					break;
				}
			}
			indVisitante=i;
			if (!existe) { numEquipos++; strcpy(cParejas[i], cEquipoVisitante); }

			if(setsLocal > setsVisitante)
            {
                iParejas[indLocal] += 2;				// Dos puntos al ganador
                iParejas[indVisitante]++;				// Un punto al otro
            }
			else
			{
                iParejas[indLocal]++;
                iParejas[indVisitante] += 2;
            }
            partidosJugados++;

			//Calculo el primero y el segundo de la categoria
			//-----------------------------------------------
			if (iParejas[indLocal]>equipoPrimero)
			{
				equipoSegundo=equipoPrimero;
				equipoPrimero=iParejas[indLocal];
				strcpy(cEquipoPrimero, cEquipoLocal);
			}
			else if (iParejas[indLocal]==equipoPrimero || iParejas[indLocal]>equipoSegundo)
			{
				equipoSegundo=iParejas[indLocal];
			}

			if (iParejas[indVisitante]>equipoPrimero)
			{
				equipoSegundo=equipoPrimero;
				equipoPrimero=iParejas[indVisitante];
				strcpy(cEquipoPrimero, cEquipoVisitante);
			}
			else if (iParejas[indVisitante]==equipoPrimero || iParejas[indVisitante]>equipoSegundo)
			{
				equipoSegundo=iParejas[indVisitante];
			}
			//----------------------------------------------
			//printf ("%d %d \n", equipoPrimero, equipoSegundo);

			scanf("%s", cEquipoLocal );					// Pareja local / FIN
		}

		int maxPartidos = (numEquipos*(numEquipos-1));		// Combinaciones posibles de partidos

		if(equipoPrimero==equipoSegundo)
		{
            printf("%s %d\n", "EMPATE", maxPartidos-partidosJugados );
        }
		else
		{
            printf("%s %d\n", cEquipoPrimero, maxPartidos-partidosJugados );
        }
		scanf("%s", categoria ); // Nombre categoría / FIN
    }
    return 0;
}