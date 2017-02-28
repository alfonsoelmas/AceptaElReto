/*
	Ejercicio 102 de aceptaelreto - Encriptaci�n de mensajes
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
#include <string.h>

int main()
{
    const int MAXLIN=81;
    char MAY[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //ABCEDARIO MAYUSCULAS
    char MIN[]="abcdefghijklmnopqrstuvwxyz"; //ABCEDARIO MINUSCULAS
    char Cod[MAXLIN];
    char Dec[MAXLIN];
    bool Fin=false;
    int Desplz;

    do
    {
		gets(Cod);
		Desplz=Cod[0]-112;
        int Vocales=0;
        int i=0;
        while (Cod[i])
        {
            if (Cod[i]>64 && Cod[i]<91)
            {
                int j=(Cod[i]-65-Desplz)%26; if (j<0) j+=26;
                Dec[i]=MAY[j];
            }
            else if (Cod[i]>96 && Cod[i]<123)
            {
                int j=(Cod[i]-97-Desplz)%26; if (j<0) j+=26;
                Dec[i]=MIN[j];
            }
            else Dec[i]=Cod[i];

            if  (Dec[i]==65 || Dec[i]== 69 || Dec[i]== 73 || Dec[i]== 79 || Dec[i]== 85 ||
                 Dec[i]==97 || Dec[i]==101 || Dec[i]==105 || Dec[i]==111 || Dec[i]==117
                ) Vocales++;
            i++;
        }
        Dec[i]=0;
        if (strcmp(Dec,"pFIN")) printf("%d\n",Vocales);
        else Fin=true;
    }while(!Fin);
    return 0;
}