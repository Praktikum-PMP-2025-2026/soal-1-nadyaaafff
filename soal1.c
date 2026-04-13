#include <stdio.h>
int main(){
    int izin, radiasi, jam, suhu; 
    scanf("%d %d %d %d", &izin, &suhu, &radiasi, &jam);
    if (radiasi >= 6){
        printf("TOLAK");
    }
    else if (suhu >= 390){
        printf("KARANTINA");
    }

    else if (izin == 1 && radiasi != 0 && radiasi < 6 && radiasi > 2){
        printf("MASUK");

    }else if(jam < 6 || jam > 20){
            printf("TOLAK");
        }
    else if (izin == 2 && suhu < 390 && suhu >= 380 && radiasi != 0 && radiasi <= 2){
        printf("PEMERIKSAAN");}
        else if(radiasi <= 2 && jam >= 8 && jam <= 18){
            printf("MASUK");
        }
    
    else if (izin == 3 && radiasi != 0 &&suhu < 380 && suhu >= 370){
        printf("MASUK");}
        else if(radiasi == 0 && suhu < 380){
            printf("TOLAK");
        }
    
    else{
        printf("TOLAK");
    }
    return 0;}



