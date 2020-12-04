#include <stdio.h>

int main() {
   char caracter, caracter2, caracter3, caracter4;
   scanf("%c", &caracter);
   while( caracter != '#' )
        {
  if(caracter == 'L') { // Cerca la lletra 'L' de Lleida
        scanf("%c", &caracter2);
        scanf("%c", &caracter3);
        if(caracter2 == 'l' && caracter3 == 'e') { // Cerca les lletres 'l' i 'e' de Lleida
		do {
			scanf("%c", &caracter4);
     		}
		while(caracter4 != ','); // Escaneja sense fer res fins a la propera coma
		while(caracter4 != '\n' ) { // En sortir del bucle anterior un cop s'ha arribat a la coma, s'escaneja i s'imprimeix tot fins arribar al proper '\n'
			scanf("%c", &caracter4);
			printf("%c", caracter4);
     		}
        }
  }
        scanf("%c", &caracter); // Continua escanejant fins a trobar una altra 'L' o un '#'
    }        
    printf("#\n"); // Imprimeix un '#' que servira per indicar al proper programa quan ha de parar
}
