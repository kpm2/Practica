 #include<stdio.h>
 int main() {
 char text;
 int comptador = 0, num_de_comes = 0;
 float valor, acumulador = 0, mitjana;

    do 
    { 
           scanf("%c", &text);
           while (comptador < 5 && text != '#') {
               scanf("%c", &text);
               if(text == ',') {
                   num_de_comes++;
                   if (num_de_comes == 3) { // El valor numéric es troba despres d'una tercera coma
                    scanf("%f", &valor); 
                    acumulador = acumulador + valor; 
                    num_de_comes = 0; // Reiniciem el nombre de comes per llegir la línia següent
                    scanf("%c", &text);
                    if (text == '\n') {
                        comptador++;
                        // Quan el comptador arribi a 5 se surt del bucle
                    }
                }
            }
           } 
        mitjana = acumulador/5; // Estem al laboratori 4, fem mitjanes de 5
           printf("Resultat %.2f\n", mitjana);           
        comptador = 0; // Reiniciem el comptador per poder tornar a entrar al bucle
   } while( text != '#' );
}

