/*
	Ejercicio 105 de aceptaelreto - Ventas
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
    float VentasMartes;
    float VentasMiercoles;
    float VentasJueves;
    float VentasViernes;
    float VentasSabado;
    float VentasDomingo;
    float VentasMayor;
    float VentasMenor;
    float VentasMedia;
    char DM[10]="MIERCOLES";
    char Dm[10]="MIERCOLES";

    while (scanf("%f", &VentasMartes) && VentasMartes > -1)
    {
        DM[0]='M';DM[1]='A';DM[2]='R';DM[3]='T';DM[4]='E';DM[5]='S';DM[6]='\0';DM[7]='\0';DM[8]='\0';DM[9]='\0';
        Dm[0]='M';Dm[1]='A';Dm[2]='R';Dm[3]='T';Dm[4]='E';Dm[5]='S';Dm[6]='\0';Dm[7]='\0';Dm[8]='\0';Dm[9]='\0';
        VentasMayor=VentasMartes;
        VentasMenor=VentasMartes;

        scanf("%f", &VentasMiercoles);
        if (VentasMiercoles>VentasMayor) { VentasMayor=VentasMiercoles;
        DM[0]='M';DM[1]='I';DM[2]='E';DM[3]='R';DM[4]='C';DM[5]='O';DM[6]='L';DM[7]='E';DM[8]='S';DM[9]='\0';}
        if (VentasMiercoles<VentasMenor) { VentasMenor=VentasMiercoles;
        Dm[0]='M';Dm[1]='I';Dm[2]='E';Dm[3]='R';Dm[4]='C';Dm[5]='O';Dm[6]='L';Dm[7]='E';Dm[8]='S';Dm[9]='\0';}

        scanf("%f", &VentasJueves);
        if (VentasJueves>VentasMayor) { VentasMayor=VentasJueves;
        DM[0]='J';DM[1]='U';DM[2]='E';DM[3]='V';DM[4]='E';DM[5]='S';DM[6]='\0';DM[7]='\0';DM[8]='\0';DM[9]='\0';}
        if (VentasJueves<VentasMenor) { VentasMenor=VentasJueves;
        Dm[0]='J';Dm[1]='U';Dm[2]='E';Dm[3]='V';Dm[4]='E';Dm[5]='S';Dm[6]='\0';Dm[7]='\0';Dm[8]='\0';Dm[9]='\0';}

        scanf("%f", &VentasViernes);
        if (VentasViernes>VentasMayor) { VentasMayor=VentasViernes;
        DM[0]='V';DM[1]='I';DM[2]='E';DM[3]='R';DM[4]='N';DM[5]='E';DM[6]='S';DM[7]='\0';DM[8]='\0';DM[9]='\0';}
        if (VentasViernes<VentasMenor) { VentasMenor=VentasViernes;
        Dm[0]='V';Dm[1]='I';Dm[2]='E';Dm[3]='R';Dm[4]='N';Dm[5]='E';Dm[6]='S';Dm[7]='\0';Dm[8]='\0';Dm[9]='\0';}

        scanf("%f", &VentasSabado);
        if (VentasSabado>VentasMayor) { VentasMayor=VentasSabado;
        DM[0]='S';DM[1]='A';DM[2]='B';DM[3]='A';DM[4]='D';DM[5]='O';DM[6]='\0';DM[7]='\0';DM[8]='\0';DM[9]='\0';}
        if (VentasSabado<VentasMenor) { VentasMenor=VentasSabado;
        Dm[0]='S';Dm[1]='A';Dm[2]='B';Dm[3]='A';Dm[4]='D';Dm[5]='O';Dm[6]='\0';Dm[7]='\0';Dm[8]='\0';Dm[9]='\0';}

        scanf("%f", &VentasDomingo);
        if (VentasDomingo>VentasMayor) { VentasMayor=VentasDomingo;
        DM[0]='D';DM[1]='O';DM[2]='M';DM[3]='I';DM[4]='N';DM[5]='G';DM[6]='O';DM[7]='\0';DM[8]='\0';DM[9]='\0';}
        if (VentasDomingo<VentasMenor) { VentasMenor=VentasDomingo;
        Dm[0]='D';Dm[1]='O';Dm[2]='M';Dm[3]='I';Dm[4]='N';Dm[5]='G';Dm[6]='O';Dm[7]='\0';Dm[8]='\0';Dm[9]='\0';}

        VentasMedia=(VentasMartes+VentasMiercoles+VentasJueves+VentasViernes+VentasSabado+VentasDomingo)* 0.16666666666666667;

        if (VentasMayor==VentasMenor) printf("EMPATE\n");
        else
        {
            printf("%s %s ", DM, Dm);
            if (VentasDomingo>VentasMedia) printf("SI\n");
            else printf("NO\n");
        }
    }
    return 0;
}