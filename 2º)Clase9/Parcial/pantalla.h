#ifndef PANTALLA_H_INCLUDED
#define PANTALLA_H_INCLUDED

typedef struct{
    int id;
    int tipo;
    char nombrePantalla[50];
    char direccionPantalla[128];
    int isEmpty;
    int precio;
}Pantalla;

#endif // PANTALLA_H_INCLUDED

int pantalla_inicializar(Pantalla* arrayPantalla, int limite);

int pantalla_alta(Pantalla* arrayPantalla, int limite, int index);
int pantalla_modificacion(Pantalla* arrayPantalla, int limite);
int pantalla_baja(Pantalla* arrayPantalla, int limite);
