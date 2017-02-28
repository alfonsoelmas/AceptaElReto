/*
	Ejercicio 100 de aceptaelreto - constante de kaprekar
	Realizado por ALFONSO++ (ALFONSOELMAS) para el canal de experimentando y aprendiendo
	Visitanos en youtube para aprender y consurtarnos dudas!
	https://www.youtube.com/channel/UC6r1T9dSSPxCQ6TA061EJZA
	
	Este codigo pertenece a Alfonso Soria Muñoz.
	Se recomienda NO PLAGIAR sino aprender o ayudarte a encontrar soluciones al ejercicio gracias a nuestra solución
	propuesta.
	
	No garantizamos que esta solución sea la más eficiente ni la más entendible, pero es una solución original al
	problema abordado.
*/

#include<stdio.h>
int main()
{
	const int	KAPREKAR=6174;
	int			NumCasos=0;

	scanf("%d", &NumCasos);
INICIO:
	while(NumCasos--)
	{
		int     Numero;
        char	sNumero[5]={0,0,0,0,0};
		scanf("%d", &Numero);
		if (Numero==KAPREKAR){ printf ("%d\n", 0); goto INICIO; }
		if (Numero==0){ printf ("%d\n", 8); goto INICIO; };
		if (Numero==1111){ printf ("%d\n", 8); goto INICIO; };
		if (Numero==2222){ printf ("%d\n", 8); goto INICIO; };
		if (Numero==3333){ printf ("%d\n", 8); goto INICIO; };
		if (Numero==4444){ printf ("%d\n", 8); goto INICIO; };
		if (Numero==5555){ printf ("%d\n", 8); goto INICIO; };
		if (Numero==6666){ printf ("%d\n", 8); goto INICIO; };
		if (Numero==7777){ printf ("%d\n", 8); goto INICIO; };
		if (Numero==8888){ printf ("%d\n", 8); goto INICIO; };
		if (Numero==9999){ printf ("%d\n", 8); goto INICIO; };
		sprintf(sNumero, "%d", Numero);

        if (Numero<1000) {
        if (sNumero[1]==0) sNumero[1]='0';
        if (sNumero[2]==0) sNumero[2]='0';
        if (sNumero[3]==0) sNumero[3]='0';
        }

		int Veces=0;
		int Diferencia=0;
		while(Diferencia!=KAPREKAR)
		{
			//Ordenamos
			char	AuxMayor[5]={0,0,0,0,0};
			char	AuxMenor[5]={0,0,0,0,0};
			int		Menor = sNumero[0], pMenor = 0;
			int		Mayor = sNumero[0], pMayor = 0;

			if (sNumero[1]>Mayor) {Mayor=sNumero[1]; pMayor=1;}
			if (sNumero[2]>Mayor) {Mayor=sNumero[2]; pMayor=2;}
			if (sNumero[3]>Mayor) {Mayor=sNumero[3]; pMayor=3;}

			if (sNumero[1]<Menor) {Menor=sNumero[1]; pMenor=1;}
			if (sNumero[2]<Menor) {Menor=sNumero[2]; pMenor=2;}
			if (sNumero[3]<Menor) {Menor=sNumero[3]; pMenor=3;}

			AuxMayor[0]=sNumero[pMayor]; AuxMayor[3]=sNumero[pMenor];
			AuxMenor[0]=sNumero[pMenor]; AuxMenor[3]=sNumero[pMayor];

			if ( ((pMayor==0) && (pMenor==1)) || ((pMayor==1) && (pMenor==0)) )
			{	if (sNumero[2] > sNumero[3])	{ AuxMayor[1]=sNumero[2]; AuxMayor[2]=sNumero[3]; AuxMenor[1]=sNumero[3]; AuxMenor[2]=sNumero[2]; }
				else							{ AuxMayor[1]=sNumero[3]; AuxMayor[2]=sNumero[2]; AuxMenor[1]=sNumero[2]; AuxMenor[2]=sNumero[3]; } }

			if ( ((pMayor==0) && (pMenor==2)) || ((pMayor==2) && (pMenor==0)) )
			{	if (sNumero[1] > sNumero[3])	{ AuxMayor[1]=sNumero[1]; AuxMayor[2]=sNumero[3]; AuxMenor[1]=sNumero[3]; AuxMenor[2]=sNumero[1]; }
				else							{ AuxMayor[1]=sNumero[3]; AuxMayor[2]=sNumero[1]; AuxMenor[1]=sNumero[1]; AuxMenor[2]=sNumero[3]; } }

			if ( ((pMayor==0) && (pMenor==3)) || ((pMayor==3) && (pMenor==0)) )
			{	if (sNumero[1] > sNumero[2])	{ AuxMayor[1]=sNumero[1]; AuxMayor[2]=sNumero[2]; AuxMenor[1]=sNumero[2]; AuxMenor[2]=sNumero[1]; }
				else							{ AuxMayor[1]=sNumero[2]; AuxMayor[2]=sNumero[1]; AuxMenor[1]=sNumero[1]; AuxMenor[2]=sNumero[2]; } }

			if ( ((pMayor==1) && (pMenor==2)) || ((pMayor==2) && (pMenor==1)) )
			{	if (sNumero[0] > sNumero[3])	{ AuxMayor[1]=sNumero[0]; AuxMayor[2]=sNumero[3]; AuxMenor[1]=sNumero[3]; AuxMenor[2]=sNumero[0]; }
				else							{ AuxMayor[1]=sNumero[3]; AuxMayor[2]=sNumero[0]; AuxMenor[1]=sNumero[0]; AuxMenor[2]=sNumero[3]; } }

			if ( ((pMayor==1) && (pMenor==3)) || ((pMayor==3) && (pMenor==1)) )
			{	if (sNumero[0] > sNumero[2])	{ AuxMayor[1]=sNumero[0]; AuxMayor[2]=sNumero[2]; AuxMenor[1]=sNumero[2]; AuxMenor[2]=sNumero[0]; }
				else							{ AuxMayor[1]=sNumero[2]; AuxMayor[2]=sNumero[0]; AuxMenor[1]=sNumero[0]; AuxMenor[2]=sNumero[2]; } }

			if ( ((pMayor==2) && (pMenor==3)) || ((pMayor==3) && (pMenor==2)) )
			{	if (sNumero[0] > sNumero[1])	{ AuxMayor[1]=sNumero[0]; AuxMayor[2]=sNumero[1]; AuxMenor[1]=sNumero[1]; AuxMenor[2]=sNumero[0]; }
				else							{ AuxMayor[1]=sNumero[1]; AuxMayor[2]=sNumero[0]; AuxMenor[1]=sNumero[0]; AuxMenor[2]=sNumero[1]; } }

			//Mayor=atoi(AuxMayor);
			//Menor=atoi(AuxMenor);
			Mayor = (AuxMayor[0]-48)*1000 + (AuxMayor[1]-48)*100 + (AuxMayor[2]-48)*10 + (AuxMayor[3]-48);
			Menor = (AuxMenor[0]-48)*1000 + (AuxMenor[1]-48)*100 + (AuxMenor[2]-48)*10 + (AuxMenor[3]-48);
			Diferencia=Mayor-Menor;

			sprintf(sNumero, "%d", Diferencia);

			if (Diferencia<1000) {
			if (sNumero[1]==0) sNumero[1]='0';
			if (sNumero[2]==0) sNumero[2]='0';
			if (sNumero[3]==0) sNumero[3]='0';
			}

			Veces++;
		}
		printf("%d\n", Veces);
	}
	return 0;
}