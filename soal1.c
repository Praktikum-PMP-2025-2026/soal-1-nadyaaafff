#include <stdio.h>
int main(){
    float suhu;
    int izin, radiasi, jam;
    printf("Masukkan izin:");
    scanf("%d", &izin);
    printf("Masukkan suhu (dalam 0.1 derajat celcius):");
    scanf("%f", &suhu);
    printf("Masukkan radiasi:");
    scanf("%d", &radiasi);
    printf("Masukkan jam:");
    scanf("%d", &jam);
    if (radiasi >= 6){
        printf("TOLAK");
    } else if (suhu >= 390){
        printf("KARANTINA");
    } else if (izin == 1){
        printf("MASUK");
        if(jam >= 6 && jam <= 20){
            printf("TOLAK");
        }
    } else if (izin == 2){
        printf("PEMERIKSAAN");
        if(radiasi > 2 || jam <= 8 || jam >= 18){
            printf("TOLAK");
        }
    } else if (izin == 3){
        printf("MASUK");
        if(radiasi >= 380){
            printf("TOLAK");
        }
    }
    else{
        printf("TOLAK");
    }
    return 0;}
