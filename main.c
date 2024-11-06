#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    int MIN=50;
    int MAX=-50;
    int num;
    int media;
    int i = 0;
    srand(time(NULL));
    while (i < 10) {
        num = rand() % 100 - 50;
        printf("%d / ", num);
        if (num > MAX){
            MAX=num;
        } else if (num < MIN) {
            MIN = num;
        }
            media =+ num;
            i++;

    }
printf("numero maggiore: %d ", MAX);
    printf("\nnumero minore: %d", MIN);
    media= media/10;
    printf("\nmedia: %d ", media);
}
