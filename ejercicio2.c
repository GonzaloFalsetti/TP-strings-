#include <stdio.h>

//2) Permitir el ingreso de una palabra y mostrarla en pantalla al rev�s.

int main()
{
    char a[20];
    char b;
    int col = 0;
    int col2 = 0;
    printf("Ingrese una palabra de hasta 20 letras: ");
    scanf("%s", a);
    for(int i = 0; i < 20 && a[i]!='\0'; i++){
        col++;
    }
    col2 = (col)/2;
    col--;
    for(int i = 0; i < col2; i++){
        b = a[i];
        a[i] = a[col-i];
        a[col-i] = b;
    }
    printf("\nCantidad de letras: %d", col+1);
    printf("\nInversa: %s", a);
    return 0;
}
