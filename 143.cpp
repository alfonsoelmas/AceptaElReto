/*
	Ejercicio 143 de aceptaelreto - Tortitas
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
#include <queue>

using namespace std;

int main()
{

lee:
	int tamTort;
	int volteos, numVolteos;
	deque<int> colaTortitas;
	deque<int> paquete;

	scanf("%d",&tamTort);

	while(tamTort!=-1){
		colaTortitas.push_front(tamTort);
		scanf("%d",&tamTort);
	}

	scanf("%d",&numVolteos);

	while(numVolteos--){
		scanf("%d",&volteos);
		for(int i=0; i<volteos; i++){
			paquete.push_front(colaTortitas.front());
			colaTortitas.pop_front();
		}
		for(int i=0; i<volteos; i++)
		{
			colaTortitas.push_front(paquete.back());
			paquete.pop_back();
		}
	}
	
	if(!colaTortitas.empty()){
			printf("%d\n",colaTortitas.front());
			goto lee;
	}
	return 0;
}