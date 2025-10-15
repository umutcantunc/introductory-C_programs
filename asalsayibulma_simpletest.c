#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int i = 2;
    scanf("%d",&sayi);
    while (i <= sayi) {

        if (sayi ==2) {
            printf("ASAL");
            break;
        }

        if (sayi % i == 0) {
            printf("ASAL DEGIL");
            break;
        }
        else{
             i +=1;
             if (sayi == i) {
                printf("ASAL");
                break;
             }
        }

    }
    return 0;
}
