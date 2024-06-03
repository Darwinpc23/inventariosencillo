#include <stdio.h>

#define MAX_PRODUCTOS 100

typedef struct {
    char nombre[50];
    int cantidad;
    float precio;
} Producto;

int main() {
    Producto productos[MAX_PRODUCTOS];
    int contador = 0;
    char opcion;

    printf("Bienvenido al sistema de inventario del supermercado\n");

    do {
        if (contador >= MAX_PRODUCTOS) {
            printf("Inventario lleno. No se pueden agregar más productos.\n");
            break;
        }

        printf("Ingrese el nombre del producto: ");
        scanf("%s", productos[contador].nombre);

        printf("Ingrese la cantidad del producto: ");
        scanf("%d", &productos[contador].cantidad);

        printf("Ingrese el precio del producto: ");
        scanf("%f", &productos[contador].precio);

        contador++;

        printf("¿Desea ingresar otro producto? (s/n): ");
        scanf(" %c", &opcion);

    } while (opcion == 's' || opcion == 'S');

    printf("\nTotal de productos ingresados: %d\n", contador);

    printf("Lista de productos:\n");
    for (int i = 0; i < contador; i++) {
        printf("Producto %d:\n", i + 1);
        printf("  Nombre: %s\n", productos[i].nombre);
        printf("  Cantidad: %d\n", productos[i].cantidad);
        printf("  Precio: %.2f\n", productos[i].precio);
    }

    return 0;
}
