#include <stdio.h>
#include "merhaba.h"
#include "sayiAl.h"
#include "hesapla.h"

int main()
{
    printf("%s",Merhaba());

    float dizi[2];
    SayiAl(dizi);

    float toplam;
    toplam = Hesapla(dizi);
    printf("\n\nGirilen Sayıların Toplamı: %.2f\n",toplam);
}

