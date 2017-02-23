#include<stdio.h>

//Problema 381 de aceptaelreto
//Estructura de datos y algoritmos
//Programa en C++
//Realizado por Alfonso++ para Experimentando y Aprendiendo.
//Este problema se puede optimizar en los calculos del MCM y MCD.

/*
Función para hallar el Máximo Común Divisor
*/
int mcd(int num1, int num2) {
    int mcd = 0;
    int a = (num1>num2) ? num1:num2;
    int b = (num1<num2) ? num1:num2;
    do {
        mcd = b;
        b = a%b;
        a = mcd;
    } while(b);
    return mcd;
}

/*
Función para hallar el Mínimo Común Múltiplo
*/
int mcm(int num1, int num2) {
    int mcm = 0;
    int a = (num1>num2) ? num1:num2;
    int b = (num1<num2) ? num1:num2;
    mcm = (a/mcd(a,b))*b;
    return mcm;
}



int main(){
	//Almacenamos la cantidad de planetas en cada caso
	int cantidad;
	//Escaneo de cantidad por entrada estándar
	scanf("%d",&cantidad);
	//Mientras la cantidad != 0
	while(cantidad){
    //Aqui acumularemos el mincm
		int mincm=1;
		
		while(cantidad--){
			//Variable para ir leyendo los datos de entrada
			int datoLeido;
			//Leemos...
			scanf("%d",&datoLeido);
			//Re-calculamos mincm con el mincm actual y el nuevo dato...
			mincm = mcm(mincm,datoLeido);
		
		}
		//Mostramos el resultado y saltamos de línea
		printf("%d\n",mincm);
		
		//Escaneamos el siquiente caso
		scanf("%d",&cantidad);
	}
	return 0;
}


