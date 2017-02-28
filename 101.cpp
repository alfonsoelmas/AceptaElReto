/*
	Ejercicio 101 de aceptaelreto - Cuadrados diabólicos y esotéricos
	Realizado por ALFONSO++ (ALFONSOELMAS) para el canal de experimentando y aprendiendo
	Visitanos en youtube para aprender y consultarnos dudas!
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
	int Lado=0;

	while (scanf("%d", &Lado) && Lado!=0)
	{
		long long int Esquina1=0, Esquina2=0, Esquina3=0, Esquina4=0;
		long long int Centro1=0, Centro2=0, Centro3=0, Centro4=0;
		long long int Lado11=0, Lado12=0;
		long long int Lado21=0, Lado22=0;
		long long int Lado31=0, Lado32=0;
		long long int Lado41=0, Lado42=0;
		long long int Dato;
		long long int CMagica1=0, CMagica2=0;
		long long int SumaFil[1024]={};
		long long int SumaCol[1024]={};
		long long int SumaDg1=0;
		long long int SumaDg2=0;
		long long int SumaLados=0;
		long long int SumaCentr=0;
		long long int SumaEsqui=0;

		int PosEsq1=0, PosEsq2=0, PosEsq3=0, PosEsq4=0;
		int PosCtr1=0, PosCtr2=0, PosCtr3=0, PosCtr4=0;
		int PosLd11=0, PosLd12=0;
		int PosLd21=0, PosLd22=0;
		int PosLd31=0, PosLd32=0;
		int PosLd41=0, PosLd42=0;
		int AuxCuadrado=0, AuxMitad=0;

		AuxCuadrado=Lado*Lado;
		AuxMitad=Lado/2;

		PosEsq2=Lado-1;														// Calculo la posicion de las esquinas
		PosEsq3=AuxCuadrado-Lado;
		PosEsq4=AuxCuadrado-1;
		
		if (Lado % 2)														// Si es impar calculo la posicion de los lados
		{
			PosLd11=Lado/2;
			PosLd21=Lado*AuxMitad;
			PosLd31=Lado*(PosLd11+1)-1;
			PosLd41=AuxCuadrado-AuxMitad-1;
			PosCtr1 = AuxCuadrado/2;										// Y el centro
		}
		else																// Si es par calculo la posicion de los lados
		{
			PosLd11 = AuxMitad-1;				PosLd12 = AuxMitad;
			PosLd31 = Lado*AuxMitad-1;			PosLd32 = PosLd31+Lado;
			PosLd22 = PosLd31+1;				PosLd21 = PosLd22-Lado;
			PosLd41 = AuxCuadrado-AuxMitad-1;	PosLd42 = PosLd41+1;
			PosCtr2 = AuxCuadrado/2-AuxMitad;	PosCtr1 = PosCtr2-1;		// Y los centros
			PosCtr3 = PosCtr1+Lado;				PosCtr4 = PosCtr3+1;
		}
			
		//De una sola lectura, Calculo la suma de filas, columnas y diagonales. Tambien las casillas especiales..

		bool Diabolico=false, Esoterico=true;

		//Diabolico: Suma de Filas=Suma Columnas=Suma Diagonales.
		//Esoterico: Magico + Cifras en orden + Suma esquinas=CM2 + Control Esquinas + Control laterales(*) + Control Centro(*)
		//(*) depende de si el Lado es par o impar

		int Menor=AuxCuadrado+1, Mayor=-1;
		int IndiceFilas=-1;
		for(int i=0; i<AuxCuadrado; i++)
		{
			scanf("%lld", &Dato);

			if (Dato > AuxCuadrado) Esoterico=false;							// Si un dato es mayor que el cuadrado no es Esoterico...
			if (Dato > Mayor) Mayor=Dato;
			if (Dato < Menor) Menor=Dato;
				
			if (i%Lado)	{				 SumaFil[IndiceFilas]+=Dato; }			// Para calcular la Suma de Filas
			else		{ IndiceFilas++; SumaFil[IndiceFilas]+=Dato; }

			SumaCol[i%Lado]+=Dato;												// Para calcular la Suma de Columnas

			if (!(i%Lado)) SumaDg1+=Dato;										//Diagonal 1
			if ((i && i<AuxCuadrado-1) && !(i%(Lado-1))) SumaDg2+=Dato;			//Diagonal 2

			if (i==PosEsq1) Esquina1=Dato;
			if (i==PosEsq2) Esquina2=Dato;
			if (i==PosEsq3) Esquina3=Dato;
			if (i==PosEsq4) Esquina4=Dato;
			if (i==PosLd11) Lado11=Dato;
			if (i==PosLd12) Lado12=Dato;
			if (i==PosLd21) Lado21=Dato;
			if (i==PosLd31) Lado31=Dato;
			if (i==PosLd22) Lado22=Dato;
			if (i==PosLd32) Lado32=Dato;
			if (i==PosLd41) Lado41=Dato;
			if (i==PosLd42) Lado42=Dato;
			if (i==PosCtr1) Centro1=Dato;										//E squinas, Lados y Centros
			if (i==PosCtr2) Centro2=Dato;
			if (i==PosCtr3) Centro3=Dato;
			if (i==PosCtr4) Centro4=Dato;
		}

		CMagica1=SumaFil[0];													//Si es Magico la CM1 es cualquier SumaFila
		CMagica2=4*CMagica1/Lado;

		if (SumaDg1==CMagica1 && SumaDg2==CMagica1) Diabolico=true;

		for (int i=0; i<Lado; i++)
		{
			if (SumaFil[i]!=CMagica1 || SumaCol[i]!=CMagica1) { Diabolico=false; Esoterico=false; break;}
		}
			
		SumaEsqui=Esquina1+Esquina2+Esquina3+Esquina4;
		if (Mayor!=AuxCuadrado || Menor!=1) Esoterico=false;


		if (Diabolico && Esoterico)				//Si tiene las cifras secuenciales...
		{
			if (Lado%2)							//Si es impar
			{
				SumaLados=Lado11+Lado21+Lado31+Lado41;
				SumaCentr=Centro1;
				if (!(SumaLados==CMagica2 || SumaEsqui==CMagica2 || SumaCentr*4==CMagica2)) Esoterico=false;
				
			}
			else								//Si es par
			{
				SumaLados=Lado11+Lado21+Lado31+Lado41+Lado12+Lado22+Lado32+Lado42;
				SumaCentr=Centro1+Centro2+Centro3+Centro4;
				if (!(SumaLados==CMagica2*2 || SumaEsqui==CMagica2 || SumaCentr==CMagica2)) Esoterico=false;
				
			}
		}
		/*
		printf("l11=%lld l12=%lld l21=%lld l31=%lld l22=%lld l32=%lld l41=%lld l42=%lld  \n", Lado11, Lado12, Lado21, Lado31, Lado22, Lado32, Lado41, Lado42);
		printf("l11=%d l12=%d l21=%d l31=%d l22=%d l32=%d l41=%d l42=%d  \n", PosLd11, PosLd12, PosLd21, PosLd31, PosLd22, PosLd32, PosLd41, PosLd42);
		for (int z=0; z<Lado; z++) printf(" SumaColumna=%lld    SumaFila=%lld  \n", SumaCol[z], SumaFil[z]); 
		printf("   Diagonal1=%lld   Diagonal2=%lld  \n", SumaDg1, SumaDg2);
		printf("    Esquina1=%lld    Esquina2=%lld      Esquina3=%lld  Esquina4=%lld \n", Esquina1, Esquina2, Esquina3, Esquina4);
		printf("SumaEsquinas=%lld   SumaLados=%lld   SumaCentros=%lld \n", SumaEsqui, SumaLados, SumaCentr);
		printf("         CM1=%lld         CM2=%lld\n", CMagica1, CMagica2);
		*/
		if (Esoterico) printf ("ESOTERICO\n");
		else if (Diabolico) printf ("DIABOLICO\n");
		else
		{
			printf ("NO\n");
		/*

		*/
		}

	}
	return 0;
}