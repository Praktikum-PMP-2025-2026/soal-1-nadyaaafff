#include <stdio.h>
int main(){
    float suhu;
    int izin, radiasi, jam; 
    scanf("%d %d %d %d", &izin, &suhu, &radiasi, &jam);
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



