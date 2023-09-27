#include <stdio.h>

int numero_de_jugador(int numeros []); // Le permite al jugador ingresar un numero y le permite corregirlo en caso de que este este mal (este subprograma debuelve una array, rellena con los numeros elejidos por el jugador)

int main ()
{
    int numero_del_jugador[5];
    numeros_aleatorios(numero_del_jugador); // asi se llama

    return 0;
}

int numero_del_jugador(int numeros [])
{
    int numeros_del_jugador, 
        dato_correcto=1,
        digito=0,
        numeros_del_jugador_array [5];

    //Este "while" lee lo que ingresa el usuario, y verifica que sea valido el dato
    while (dato_correcto == 1) 
    {
        printf ("\n\nIngrese un numeros: ");
        scanf ("%d", &numeros_del_jugador);

        if (numeros_del_jugador > 99999 || numeros_del_jugador < 0){
            printf ("\n\nEl numero ingresado no es valido!");
        }
        else{
            dato_correcto = 0;
        }
    }

    //Este "for" guarda el dato en un array
    for (int i = 5; i > 0; i--)
    {
        digito = numeros_del_jugador % 10;  // Obtener el último dígito del número
        numeros_del_jugador_array[i] = digito;  // Construir el número al revés
        numeros_del_jugador = numeros_del_jugador / 10;  // Eliminar el último dígito del número original
    }
}