#include <stdio.h>

//4) El usuario ingresa una palabra. Mostrar en pantalla cu�ntas letras A min�sculas contiene.
int main()
{
    char a[20] = {0};
    int flag = 0;
    int flag2 = 0;
    printf("Ingrese una palabra de hasta 20 letras: ");
    scanf("%s", a);
    for (int i = 0; i<20; i++){
        if (a[i] == 97){
            flag++;
        }
    }
    printf("Cantidad de a(s) min�scula(s): %d", flag);
    return 0;
}
