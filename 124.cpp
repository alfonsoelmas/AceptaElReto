/*
	Ejercicio 124 de aceptaelreto - ¿Cuántas me llevo?
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
typedef char cadena[1002];
int longitudChar(cadena Cadena)
{
	int i=0;
	while(Cadena[i]!=0) i++;
	return i;
}
void igualo(cadena &tomaValor, cadena &cedeValor,const int tamano)
{
	int i;
	for(i=0; i<tamano; i++) tomaValor[i]=cedeValor[i];
	tomaValor[i+1]=0;
}
int main()
{
	cadena Sumando1, Sumando2, Aux;
	int LNum1, LNum2, LAux, Digito1, Digito2, Acarreo;
	int LastAcarreo;

	scanf("%s %s",Sumando1, Sumando2);

	while( (Sumando1[0] != '0' ) || (Sumando2[0] != '0' /*&& Sumando2[1]!='\0'*/) )
	{
		LNum1 = longitudChar(Sumando1);
		LNum2 = longitudChar(Sumando2);
		if (LNum2>LNum1) { igualo(Aux,Sumando2,LNum2); igualo(Sumando2,Sumando1,LNum1); igualo(Sumando1,Aux,LNum2); LAux=LNum2; LNum2=LNum1; LNum1=LAux;}

		Acarreo=0;
		LastAcarreo=0;
		while (LNum2--)
		{
			LNum1--;
			Digito1=Sumando1[LNum1]-48;
			Digito2=Sumando2[LNum2]-48;
		
			if ((Digito1+Digito2+LastAcarreo) > 9) {Acarreo++; LastAcarreo=1;}
			else LastAcarreo=0;
		}


		LNum1--;
		while(LastAcarreo && LNum1>=0)
		{
			Digito1=Sumando1[LNum1]-48;
			if (Digito1+LastAcarreo > 9) {Acarreo++; LastAcarreo=1;}
			else LastAcarreo=0;
			LNum1--;
		}
		printf("%d\n",Acarreo);
		scanf("%s %s",Sumando1, Sumando2);
	}

	return 0;
}