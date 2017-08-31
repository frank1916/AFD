#include <stdio.h>
#include <stdlib.h>
//CONSTANTES
#define PI 3.14;
//CONSTANTE
#define CUBO(a) a*a*a

//ESTRUCTURA

struct artista {
    char nombre[10];
    int edad;
    float documento;
} artista1 = {"FrankParra", 22, 1049640};

int main() {
    struct artista artista2, artista3;
    artista2.edad = 50;
    artista2.documento = 100;

    artista3.edad=25;
    artista3.documento = 102;
    
    //arreglo
    struct artista arregloArtista [4];
    
    arregloArtista[0] = artista1;
    arregloArtista[1] = artista2;
    arregloArtista[2] = artista3;
    
    for (int i = 0; i<=3;i++){
       printf("el nombre es %s, tiene: %i años y su documento es: %.2f\n", arregloArtista[i].nombre,
               arregloArtista[i].edad,arregloArtista[i].documento);  
    }

   




    // *EJEMPLO OPERACION
    /**
    int num1;
    int num2;
    printf ("ingrese el primer valor\n");
    scanf("%d",&num1);
    printf ("ingrese el segundo valor\n");
    scanf("%d",&num2);
    printf ("la sumatoria es:%d\n",operacion(num1,num2));
     * 
     */



    /**
     * EJEMPLO DIRECTORES
     * int a = 5;
     * printf("el cubo de la variable es :%i\n",CUBO(a));
     */

    /*EJEMPLO IMPRESION
     * int a = 23;
     * printf("string %s\n,entero %i\n flotante %.2f\n double %.3f\n caracter %c\n",a,(float)a,(double)a);
     */


    //* EJEMPLO ARREGLOS
    //      struct arreglo[] = {1,2};
    //     // int multi [3][4] =
    //     
    //      for (int i=0;i<=2;i++){
    //          printf("%i\n",arreglo[i]);
    //      }




    return 0;
}



//METODO OPERACION
//int operacion(int num1, int num2) {
//    int suma = num1 + num2;
//    return suma;
//}




