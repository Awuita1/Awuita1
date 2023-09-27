// """Este codigo no es un subprograma, esto hiria dentro del main"""  //

#include <stdio.h>
#include <time.h>

int main() {
    clock_t inicia_el_tiempo, fin_del_tiempo;
    double tiempo_trascurrido;



    
    
    getchar(); // Espera a que el jugador presione Enter
    inicia_el_tiempo = clock(); // Registra el tiempo de inicio del juego

    // Aca va el juego 

    // Si el jugador termina el juego y lo logra completar
    getchar();
    fin_del_tiempo = clock(); // Registra el tiempo de finalización del juego
    
    

    // Calcula el tiempo transcurrido en segundos
    tiempo_trascurrido = (double)(fin_del_tiempo - inicia_el_tiempo) / CLOCKS_PER_SEC;

    printf("El jugador tardó %.2f segundos en completar el juego.\n", tiempo_trascurrido);

    return 0;
}