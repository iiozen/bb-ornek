#include <stdio.h>
void SayiAl(float* dizi)
{
    float sayi1,sayi2;
    printf("1. Sayıyı giriniz: ");
    scanf("%f",&sayi1);
    printf("2. Sayıyı giriniz: ");
    scanf("%f",&sayi2);
    dizi[0] = sayi1;
    dizi[1]= sayi2;
}