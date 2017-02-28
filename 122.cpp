/*
	Ejercicio 122 de aceptaelreto - Avituallamiento en las etapas ciclistas
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
int main(void)
{
    int AlturaKmAnterior;
    while (scanf("%d", &AlturaKmAnterior) && AlturaKmAnterior!=-1)
    {
      int KmLlanosMax=0;
      int KmLlanosRecorridos=0;
      int AvituallamientoDefinitivoEnKm=0;
      int AvituallamientoActualEnKm=0;
      int AlturaKmSiguiente=0;
      int KmRecorridos=0;
      while(scanf("%d", &AlturaKmSiguiente) && AlturaKmSiguiente!=-1)
      {
         ++KmRecorridos;
         if (AlturaKmAnterior==AlturaKmSiguiente)
         {
            KmLlanosRecorridos++;
            if (KmLlanosRecorridos>KmLlanosMax)
            {
               KmLlanosMax=KmLlanosRecorridos;
               AvituallamientoDefinitivoEnKm=AvituallamientoActualEnKm;
            }
         }
         else
         {
            AvituallamientoActualEnKm=KmRecorridos;
            KmLlanosRecorridos=0;
         }
         AlturaKmAnterior=AlturaKmSiguiente;
      }
      if (KmLlanosMax) printf("%d %d\n", AvituallamientoDefinitivoEnKm, KmLlanosMax);
      else             printf("HOY NO COMEN\n");
   }
   return 0;
}