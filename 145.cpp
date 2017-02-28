/*
	Ejercicio 145 de aceptaelreto - El tren del amor
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
//Vamos a emular una pila con arrays y variables como punteros de pila para ser lo mas eficientes.
int main()
{
	char vagones[50000];
	while(scanf("%s",vagones)!=EOF)
	{
		char  hombres[50000];
		int parejas=0;
		int i=0;
		int stkpntr=0;
		while(vagones[i]!=0)
		{
			switch (vagones[i])
			{
            case 'h':   hombres[stkpntr]='h'; stkpntr++; break;
            case 'H':   hombres[stkpntr]='H'; stkpntr++; break;
            case 'm':   if (stkpntr)
                        {
							if (hombres[stkpntr-1]=='h')
                            {
                                parejas++;
                                stkpntr--;
                            }
							else if (hombres[stkpntr-1]=='H') stkpntr=0;
                        }
                        break;
            case 'M':   if (stkpntr)
                        {
                            if (hombres[stkpntr-1]=='H')
                            {
                                parejas++;
								stkpntr--;
                            }
							else if (hombres[stkpntr-1]=='h') stkpntr=0;
                        }
                        break;
			case '@':   stkpntr=0;
                        break;
            default:    break;
			}
			i++;
		}
		printf ("%d\n", parejas);
	}
	return 0;
}