#include <iostream>
// la libreria que vamos a utilizar es gtk. Hay que ver si cuando se cree graficamente la carta hay que agregar algun otro metodo o atributo
// este solo es un borrador, para llevar la cuenta de algunos de los metodos que probablemente vamos a necesitar

enum simbolo{
    diamante = 1,
    pico = 2,
    corazon = 3,
    treboles = 4
};

enum color{
    rojo = 1, 
    negro = 2 
};

class Carta{
    public:
        simbolo palo;
        color color;

        // metodos
       
        void confirmar_movimiento_tablero(){
            /*confirma que la carta se puede colocar donde se desea
            debe comprobar que el color sea diferente al de la carta sobre la que se desea colocar*/
        }

        void confirmar_movimiento_pila(){
            /*confirma que la carta se puede colocar donde se desea
            debe comprobar que el color y simbolo sea el que corresponde, se debe asegurar que el numero es el que sigue segun la secuencia*/
        }

        void voltear(){
            /*si la carta esta volteada (con el torso de frente) le da vuelta 
            se deberia llamar cuando la carta este vacia*/
        }
};