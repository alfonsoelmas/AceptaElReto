//Ejercicio 111 de aceptaelreto - Aprobar Química
//Solución más eficiente, creada por alfonsoelmas(alfonso++) para el canal de experimentando y aprendiendo
//Si quieres ver el vídeo y la explicación del código visita nuestro canal:
// https://www.youtube.com/channel/UC6r1T9dSSPxCQ6TA061EJZA


#include <stdio.h>
int main()
{
	char Elemento[50];
	
	while (scanf("%s", Elemento) && (Elemento[0]!= 'E' || Elemento[1]!='x' || Elemento[2]!='i' || Elemento[3]!='t' || Elemento[4]!=0))
	{
		int Num; scanf("%d", &Num);
		switch (Num)										// 1s 2s 2p 3s 3p 4s 3d 4p 5s 4d 5p 6s 4f 5d 6p 7s 5f 6d 7p 
		{
		case   0: printf("1s0\n");																					break; //Isitopo del Hidrogeno 0
		case   1: printf("1s1\n"); 																					break; //Hidrógeno
		case   2: printf("1s2\n");																					break; //Helio
		case   3: printf("1s2 2s1\n"); 																				break; //Litio
		case   4: printf("1s2 2s2\n"); 																				break; //Berilio
		case   5: printf("1s2 2s2 2p1\n");					 														break; //Boro
		case   6: printf("1s2 2s2 2p2\n"); 																			break; //Carbono
		case   7: printf("1s2 2s2 2p3\n");																			break; //Nitrógeno
		case   8: printf("1s2 2s2 2p4\n"); 																			break; //Oxígeno
		case   9: printf("1s2 2s2 2p5\n"); 																			break; //Flúor
		case  10: printf("1s2 2s2 2p6\n"); 																			break; //Neón
		case  11: printf("1s2 2s2 2p6 3s1\n"); 																		break; //Sodio
		case  12: printf("1s2 2s2 2p6 3s2\n"); 																		break; //Magnesio
		case  13: printf("1s2 2s2 2p6 3s2 3p1\n"); 																	break; //Aluminio
		case  14: printf("1s2 2s2 2p6 3s2 3p2\n"); 																	break; //Silicio
		case  15: printf("1s2 2s2 2p6 3s2 3p3\n"); 																	break; //Fósforo
		case  16: printf("1s2 2s2 2p6 3s2 3p4\n"); 																	break; //Azufre
		case  17: printf("1s2 2s2 2p6 3s2 3p5\n"); 																	break; //Cloro
		case  18: printf("1s2 2s2 2p6 3s2 3p6\n"); 																	break; //Argón
		case  19: printf("1s2 2s2 2p6 3s2 3p6 4s1\n"); 																break; //Potasio
		case  20: printf("1s2 2s2 2p6 3s2 3p6 4s2\n"); 																break; //Calcio
		case  21: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d1\n");	 														break; //Escandio
		case  22: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d2\n");															break; //Titanio
		case  23: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d3\n"); 															break; //Vanadio
		case  24: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d4\n"); 															break; //Cromo
		case  25: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d5\n"); 															break; //Manganeso
		case  26: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d6\n"); 															break; //Hierro
		case  27: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d7\n"); 															break; //Cobalto
		case  28: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d8\n"); 															break; //Niquel
		case  29: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d9\n"); 															break; //Cobre
		case  30: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10\n"); 														break; //Cinc
		case  31: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p1\n");		 												break; //Galio
		case  32: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p2\n"); 													break; //Germanio
		case  33: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p3\n"); 													break; //Arsénico
		case  34: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p4\n"); 													break; //Selenio
		case  35: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p5\n"); 													break; //Bromo
		case  36: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6\n"); 													break; //Kriptón
		case  37: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s1\n");													break; //Rubidio
		case  38: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2\n");													break; //Estroncio
		case  39: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d1\n"); 											break; //Ytrio
		case  40: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d2\n"); 											break; //Circonio
		case  41: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d3\n"); 											break; //Niobio
		case  42: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d4\n"); 											break; //Molibdeno
		case  43: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d5\n"); 											break; //Tecnecio
		case  44: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d6\n"); 											break; //Rutenio
		case  45: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d7\n"); 											break; //Rodio
		case  46: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d8\n"); 											break; //Paladio
		case  47: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d9\n");				 								break; //Plata
		case  48: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10\n"); 											break; //Cadmio
		case  49: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p1\n"); 										break; //Indio
		case  50: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p2\n");			 							break; //Estaño
		case  51: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p3\n"); 										break; //Antimonio
		case  52: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p4\n"); 										break; //Teluro
		case  53: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p5\n");										break; //Yodo
		case  54: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6\n"); 										break; //Xenón
		case  55: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s1\n"); 									break; //Cesio
		case  56: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2\n");		 							break; //Bario
		case  57: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f1\n");								break; //Lantano 1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 5d1
		case  58: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f2\n"); 								break; //Cerio
		case  59: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f3\n"); 								break; //Praseodimio
		case  60: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f4\n"); 								break; //Neodimio
		case  61: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f5\n");	 							break; //Prometio
		case  62: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f6\n"); 								break; //Samario
		case  63: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f7\n"); 								break; //Europio
		case  64: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f8\n");								break; //Gadolinio
		case  65: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f9\n"); 								break; //Terbio
		case  66: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f10\n"); 								break; //Disprosio
		case  67: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f11\n"); 								break; //Holmio
		case  68: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f12\n"); 								break; //Erbio
		case  69: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f13\n"); 								break; //Tulio
		case  70: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14\n");								break; //Yterbio
		case  71: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d1\n"); 							break; //Lutecio
		case  72: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d2\n"); 							break; //Hafnio
		case  73: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d3\n"); 							break; //Tántalo
		case  74: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d4\n"); 							break; //Wolframio
		case  75: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d5\n"); 							break; //Renio
		case  76: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d6\n"); 							break; //Osmio
		case  77: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d7\n"); 							break; //Iridio
		case  78: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d8\n"); 							break; //Platino
		case  79: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d9\n");							break; //Oro
		case  80: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10\n");							break; //Mercurio
		case  81: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p1\n");						break; //Talio
		case  82: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p2\n");						break; //Plomo
		case  83: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p3\n");						break; //Bismuto
		case  84: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p4\n");						break; //Polonio
		case  85: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p5\n");						break; //Astato
		case  86: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6\n");						break; //Radón
		case  87: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s1\n");					break; //Francio
		case  88: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2\n");					break; //Radio
		case  89: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f1\n");				break; //Actinio 1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 6d1
		case  90: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f2\n");				break; //Torio 1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 6d2
		case  91: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f3\n");				break; //Protactinio
		case  92: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f4\n");				break; //Uranio
		case  93: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f5\n");				break; //Neptunio
		case  94: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f6\n");				break; //Plutonio
		case  95: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f7\n");				break; //Americio
		case  96: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f8\n");				break; //Curio
		case  97: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f9\n");				break; //Berkelio
		case  98: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f10\n");				break; //Californio
		case  99: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f11\n");				break; //Einsteinio
		case 100: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f12\n");				break; //Fermio
		case 101: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f13\n");				break; //Mendelevio
		case 102: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f14\n");				break; //Nobelio
		case 103: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f14 6d1\n");			break; //Lawrencio
		case 104: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f14 6d2\n");			break; //Rutherfordio
		case 105: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f14 6d3\n");			break; //Dubnio
		case 106: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f14 6d4\n");			break; //Seaborgio
		case 107: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f14 6d5\n");			break; //Bohrio
		case 108: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f14 6d6\n");			break; //Hassio
		case 109: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f14 6d7\n");			break; //Meitnerio
		case 110: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f14 6d8\n");			break; //Darmstadtio
		case 111: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f14 6d9\n");			break; //Roentgenio
		case 112: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f14 6d10\n");		break; //Copernicio
		case 113: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f14 6d10 7p1\n");	break; //Ununtrio
		case 114: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f14 6d10 7p2\n");	break; //Flerovio
		case 115: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f14 6d10 7p3\n");	break; //Ununpentio
		case 116: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f14 6d10 7p4\n");	break; //Livermorio
		case 117: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f14 6d10 7p5\n");	break; //Ununseptio
		case 118: printf("1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f14 6d10 7p6\n");	break; //Ununoctio
		}
	}
	return 0;
}
                          
