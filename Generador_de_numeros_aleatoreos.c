

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numeros_aleatorios(int numeros []); // Genera un número aleatorio entre 0 y 9, no repetidos entre si (este subprograma debuelve una array, rellena con los numeros aleatorios)

int main ()
{
    int array_numeros[5];
    srand(time(NULL)); // Se inicializa el "time(NULL)" dentro del main
    numeros_aleatorios(array_numeros); // asi se llama

    return 0;
}


int numeros_aleatorios(int numeros []) // Genera un número aleatorio entre 0 y 9, no repetidos entre si
{

    int numero_aleatorio, contador = 0, repetido = 0; 

    while (i < 5)
    {
        numero_aleatorio = rand() % 10;  // Genera un número aleatorio entre 0 y 9
        repetido = 0;


        // Verifica si el número ya existe en el array
        for (int j = 0; j < contador; j++) 
        {
            if (numeros[j] == numero_aleatorio) {
            repetido = 1;
            break;  
            }
        }

        // Si no es un número repetido, guárdalo en el array
        if (repetido==0) {
        numeros [contador] = numero_aleatorio;
        contador++;
        }
   
    }
    
}

