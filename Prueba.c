//Diseñe un programa que reciba como dato un número entero y a partir de este genere un número de un dígito (entre 0 y 9) sumando los dígitos tantas veces como sea necesario.

#include <stdio.h>
int main(){

    
    //Creacion de variables

    int num=0;
    int res=0;
    int t=0;
    //Pedido de numero al usuario

    printf("Ingrese un numero entero: ");
    scanf("%d",&num);

    //Busqueda del numero
    
        t= num%28;
    
    //Suma de los digitos

        res= t/2-1;

    printf("La suma de los digitos es: %d",res);

return 0;

}


