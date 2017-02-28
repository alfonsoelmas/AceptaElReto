/*
	Ejercicio 123 de aceptaelreto - Conjugar verbos
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
#include<string.h>
int main()
{
	char verbo[50];
	enum conjug{ar,er,ir}conjugs;
	char ctiempo;

	scanf("%s %c", verbo, &ctiempo);

	while(ctiempo!='T')
	{
		int i=0;
		while(verbo[i]!=0)	i++;
		switch(verbo[i-2])
		{
		case 'a':	conjugs=ar;
			break;
		case 'e':	conjugs=er;
			break;
		case 'i':	conjugs=ir;
			break;
		}
		switch(ctiempo)
		{
		case 'P':
			switch (conjugs)
			{
			case ar:
				printf("yo "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("e\n");
				printf("tu "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("aste\n");
				printf("el "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("o\n");
				printf("nosotros "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("amos\n");
				printf("vosotros "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("asteis\n");
				printf("ellos "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("aron\n");
				break;
			case er:
			case ir:
				printf("yo "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("i\n");
				printf("tu "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("iste\n");
				printf("el "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("io\n");
				printf("nosotros "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("imos\n");
				printf("vosotros "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("isteis\n");
				printf("ellos "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("ieron\n");
				break;
			}

			break;
		case 'A':
			switch (conjugs)
			{
			case ar:
				printf("yo "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("o\n");
				printf("tu "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("as\n");
				printf("el "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("a\n");
				printf("nosotros "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("amos\n");
				printf("vosotros "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("ais\n");
				printf("ellos "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("an\n");
				break;
			case er:
				printf("yo "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("o\n");
				printf("tu "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("es\n");
				printf("el "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("e\n");
				printf("nosotros "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("emos\n");
				printf("vosotros "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("eis\n");
				printf("ellos "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("en\n");
				break;
			case ir:
				printf("yo "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("o\n");
				printf("tu "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("es\n");
				printf("el "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("e\n");
				printf("nosotros "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("imos\n");
				printf("vosotros "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("is\n");
				printf("ellos "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("en\n");
				break;
			}

			break;
		case 'F':
			switch (conjugs)
			{
			case ar:
				printf("yo "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("are\n");
				printf("tu "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("aras\n");
				printf("el "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("ara\n");
				printf("nosotros "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("aremos\n");
				printf("vosotros "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("areis\n");
				printf("ellos "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("aran\n");
				break;
			case er:
				printf("yo "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("ere\n");
				printf("tu "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("eras\n");
				printf("el "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("era\n");
				printf("nosotros "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("eremos\n");
				printf("vosotros "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("ereis\n");
				printf("ellos "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("eran\n");
				break;
			case ir:
				printf("yo "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("ire\n");
				printf("tu "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("iras\n");
				printf("el "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("ira\n");
				printf("nosotros "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("iremos\n");
				printf("vosotros "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("ireis\n");
				printf("ellos "); for(int j=0; j<=i-3; j++) printf("%c",verbo[j]); printf("iran\n");
				break;
			}

			break;
		}
		
		scanf("%s %c", verbo, &ctiempo);
	}
	return 0;
}