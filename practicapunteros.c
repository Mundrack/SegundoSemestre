#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float *puntero1;
    float a=30;
    
    puntero1=&a;

    printf("El valor de la variable a es: %f \n",a);
    printf("La ubicacion de memoria de la variable a es: %p \n",&a);

    *puntero1=40;

    printf("El contenido del puntero1 es: %f \n",puntero1); //como es contenido si comolo la f del tipo de dato.
    printf("La ubicacion de memoria a la cual apunta el puntero1 es: %p \n",puntero1); //se coloca solo puntero1 porque si se pone con asterisco en cambiar el valor.
    printf("El nuevo valor de a es:%f\n",a);


    return 0;
}


int main(int argc, char const *argv[])
{
    float puntos[3][2]={{0,0},{0,3},{3,0}};

    float perietro= calcularperimetro(puntos);
    float area= calculararea(puntos);

    printf("El area del triangulo es:%f ",area);
    printf("El peripetro del triangulo es: %f",perietro);

    return 0;
}

float calculardistancia(float x1, float y1, float x2, float y2){
    float dist= aqrt(pow(x1-x2,2)+pow(y1-y2,2));
    return dist;
}

float calcularperimetro(float puntos[3][2]){
    float a=calculardistancia(puntos[0][0], puntos[0][1], puntos[1][0], puntos[1][1]);
    float b=calculardistancia(puntos[0][0], puntos[0][1], puntos[2][0], puntos[2][1]);
    float c=calculardistancia(puntos[0][0], puntos[0][1], puntos[1][0], puntos[1][1]);
    float perimetro=a+b+c;
    return perimetro;
}
float calculararea(float puntos[3][2]){
    float base=calculardistancia(puntos[0][0], puntos[0][1], puntos[1][0], puntos[1][1]);
    float basebaja=(calculardistancia(puntos[0][0], puntos[0][1], puntos[1][0], puntos[1][1])/2);
    float distanciaparah=calculardistancia(puntos[0][0], puntos[0][1], puntos[2][0], puntos[2][1]);
    float haltura= aqrt(pow(basebaja,2)+pow(distanciaparah,2));
    float area=(base*haltura)/2;
    return area;
}