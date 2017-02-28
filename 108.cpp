/*
	Ejercicio 108 de aceptaelreto - De nuevo en el bar de Javier
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
	char	Producto[6][11]={ "*", "DESAYUNOS#", "COMIDAS#", "MERIENDAS#", "CENAS#", "COPAS#" };
	char	Categoria=' ', CRLF=' ';
	double	ImporteMax=0, ImporteMin=0, Importe=0, TotImporte=0;
	double	ImpCat[6]={0, 0, 0, 0, 0, 0};
	int		Max=0, Min=0, CntMax=0, CntMin=0, NumVentas=0, NumComidas=0;

	while(scanf("%c%lf%c", &Categoria, &Importe, &CRLF)!=-1 )
	{
	    TotImporte+=Importe;
	    switch (Categoria)
	    {
	    case 'D':   ImpCat[1]+=Importe; NumVentas++;                 break; 	//Desayunos
		case 'A':   ImpCat[2]+=Importe; NumVentas++; NumComidas++;   break; 	//Comidas
		case 'M':   ImpCat[3]+=Importe; NumVentas++;                 break; 	//Meriendas
		case 'I':   ImpCat[4]+=Importe; NumVentas++;                 break; 	//Cenas
		case 'C':   ImpCat[5]+=Importe; NumVentas++;                 break; 	//Copas
		default :   CntMax=0; CntMin=0; Min=1; Max=1; ImporteMin=ImpCat[1]; ImporteMax=ImpCat[1];
                    for (int i=1; i<6; i++)
                    {
                        if (ImpCat[i]> ImporteMax) { ImporteMax=ImpCat[i]; Max=i; }
                        if (ImpCat[i]< ImporteMin) { ImporteMin=ImpCat[i]; Min=i; }
                    }
                     for (int i=1; i<6; i++)
                    {
                        if (ImpCat[i]==ImporteMax) CntMax++;	// Mira si hay varias Categorias con el Maximo
                        if (ImpCat[i]==ImporteMin) CntMin++;    // Mira si hay varias Categorias con el Minimo
                    }
                    CntMax>1 ? printf("EMPATE#") : printf("%s", Producto[Max]);	// Si hay varias pinta EMPATE#, si no, la Categoria
                    CntMin>1 ? printf("EMPATE#") : printf("%s", Producto[Min]);	// Si hay varias pinta EMPATE#, si no, la Categoria
                    ImpCat[2]/NumComidas>TotImporte/NumVentas ? printf ("SI\n") : printf ("NO\n");   // Si las COMIDAS superan la media, pinta SI,

                    //Inicializacion ---------------------------------------------------------------
                    for (int i=0; i<6; i++)ImpCat[i] = 0;
                    TotImporte=0; NumComidas=0; NumVentas=0;
                    //------------------------------------------------------------------------------
                    break;
	    }
	}
	return 0;
}