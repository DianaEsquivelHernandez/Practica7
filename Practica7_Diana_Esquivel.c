/*Practica7                                 Esquivel Hernandez Diana Karen
Fecha de entrega:23/11/2020
*/

//Aqui se muestra la biblioteca que usaremos para utilizar ciertas funciones
#include <stdio.h>
/*En este bloque se muestra la manera en la que se declaran las variables */
int main(){
        //Variables tipo flotantes
        float totalSencillo, totalDoble, totalPaleta, total;
        //Variables tipo entero
        int tipo1, tipo2, tipo3;
        //Variable tipo entero contante
        const int heladoSencillo=16.50, heladoDoble=29.50, paleta=20;
        //Uso del printf y scanf para imprimir frases y guardar varibles
        printf("Buen dia, la heladeria Cetl le ofrece\nHelado Sencillo:16.50\nHelado Doble:29.50\nPaleta:20\n");
        printf("Cuantos helados sencillos desea llevar?  ");
        scanf("%i", &tipo1);
        //Uso de operadores aritmeticos
        totalSencillo=tipo1*heladoSencillo;
        printf("Cuantos helados doble desea llevar?  ");
        scanf("%i", &tipo2);
        totalDoble=tipo2*heladoDoble;
        printf("Cuantas paletas desea llevar?  ");
        scanf("%i", &tipo3);
        totalPaleta=tipo3*paleta;
        total=totalSencillo+totalDoble+totalPaleta;
        printf("El total a pagar es de: %.2f\n", total);
        return 0;
}


~                                                                                                                                                                                                                  ~                                              
