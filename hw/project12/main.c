#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, sarj, sarj2, sure;

    printf("Mevcut sarj yuzdenizi yaziniz:% \n");
    scanf("%d", &sarj);

    printf("kac saniye kullandiginizi girin: \n");
    scanf("%d", &sure);

    x=sure/225;
    sarj2=sarj-x;

    if(sarj2==15){
        printf("Kalan sarjiniz; %d\n", sarj2);
        printf("Sarjiniz azaldi, cihazinizi sarja takiniz!");
       } else
        if(sarj2<=5&&sarj2>0) {
        printf("Kalan sarjiniz; %d\n", sarj2);
        printf("Sarjiniz azaldi, cihaziniz kapanmak uzere!");
      }  else
       if(sarj2<=0)
        printf("Sarjiniz bitti, cihaziniz kapanmistir.");








    return 0;
}
