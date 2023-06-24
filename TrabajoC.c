#include <stdio.h>
#include <math.h>
float calculardistancia(float x1, float x2, float z1, float y1, float y2, float z2);
float calcularperimetro(float puntos[4][3], float *a, float *b, float *c, float *d, float *e, float *f);
float calculararea(float *a, float *b, float *c,float *d, float *e, float *f);
float volumen(float *a, float *b, float *c, float *d, float *e, float *f);
int main(int argc, char const *argv[])
{
    float puntos[4][3]={{0,0,0},{0,0,3},{3,0,0},{1,7,1}};
    float a, b, c, d, e, f;


    float perietro= calcularperimetro(puntos, &a,&b, &c,&d,&e,&f);
    printf("El peripetro del triangulo es: %f\n",perietro);
    float area= calculararea(&a,&b,&c,&d,&e,&f);
    printf("El area del triangulo es:%f\n", area);
    float volumentotal=volumen(&a,&b,&c,&d,&e,&f);
    printf("El volumen total es de:%f\n",volumentotal);

    return 0;
}

float calculardistancia(float x1, float y1,float z1, float x2, float y2, float z2){
    float dist= sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));
    return dist;
}

float calcularperimetro(float puntos[4][3], float *a, float *b, float *c, float *d, float *e, float *f){
    *a=calculardistancia(puntos[0][0], puntos[0][1], puntos[0][2], puntos[1][0], puntos[1][1],puntos[1][2]);//p1-p2
    *b=calculardistancia(puntos[0][0], puntos[0][1], puntos[0][2], puntos[2][0], puntos[2][2],puntos[2][2]);//p1-p3
    *c=calculardistancia(puntos[1][0], puntos[1][1], puntos[1][2], puntos[3][0], puntos[3][1],puntos[3][2]);//p1-p4

    *d=calculardistancia(puntos[0][0], puntos[0][1], puntos[0][2], puntos[3][0], puntos[3][1],puntos[3][2]);//p1-p4
    *e=calculardistancia(puntos[1][0], puntos[1][1], puntos[1][2], puntos[2][0], puntos[2][1],puntos[2][2]);//p2-p3
    *f=calculardistancia(puntos[2][0], puntos[2][1], puntos[2][2], puntos[3][0], puntos[3][1],puntos[3][2]);//p3-p4
    float perimetro=*a+*b+*c+*d+*e+*f;
    return perimetro;
}
float calculararea(float *a, float *b, float *c, float *d, float *e, float *f){
    float base=*a;
    float basebaja=(*a/2);
    float distanciaparah=*b;
    float haltura= sqrt(pow(basebaja,2)+pow(distanciaparah,2));
    float area1=(base*haltura)/2;
    
    base=*a;
    basebaja=(*a/2);
    distanciaparah=*d;
    haltura= sqrt(pow(basebaja,2)+pow(distanciaparah,2));
    float area2=(base*haltura)/2;  

    base=*b;
    basebaja=(*b/2);
    distanciaparah=*d;
    haltura= sqrt(pow(basebaja,2)+pow(distanciaparah,2));
    float area3=(base*haltura)/2;

    base=*c;
    basebaja=(*c/2);
    distanciaparah=*f;
    haltura= sqrt(pow(basebaja,2)+pow(distanciaparah,2));
    float area4=(base*haltura)/2;
    
    
    float area=(area1+area2+area3+area4);
    return area;
}
float volumen(float *a, float *b, float *c, float *d, float *e, float *f){
    float base=*a;
    float basebaja=(*a/2);
    float distanciaparah=*b;
    float haltura= sqrt(pow(basebaja,2)+pow(distanciaparah,2));
    float volumen1=(((3*base)*haltura))/3;

    float volumentotal=volumen1;
    return volumentotal;
}