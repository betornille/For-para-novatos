#include <stdio.h>

int main() {
    int i, a;
    float DA = 0, D = 0, VA = 0, costo, vidautil, valorrescate;
    
    printf("Año en el que se compró el auto: ");
    scanf("%d", &a);    
    printf("Precio en el que se compró: ");
    scanf("%f", &costo);    
    printf("Tiempo de vida útil en años: ");
    scanf("%f", &vidautil);    
    printf("Ingrese el valor de recuperación: ");
    scanf("%f", &valorrescate);
    
    D = (costo - valorrescate) / vidautil;
    
    for (i = 1; i <= vidautil; i++) {
        DA = D * i;
        VA = costo - DA;
        
        printf("%d año: Depreciación: %.1f Depreciación acumulada: %.1f Valor anual: %.1f\n", a + i, D, DA, VA);
    }    
      
    return 0;
}