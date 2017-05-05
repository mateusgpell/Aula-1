#include <stdio.h>
#include <windows.h>

int S1, S2, S3, M1, M2;

void LeSensores(void);
void IA(void);
void DirigirMotores(void);

int main(){
   while(1){

        LeSensores();

        IA();
        printf("\n\n %d %d %d", S1, S2, S3);

        DirigirMotores();
   }

    return 0;
}

void LeSensores(void){
    int distancia1, distancia2, distancia3;
    printf("Escreva a distancia ao S1, S2, S3 \n");
    scanf("%d %d %d", &distancia1, &distancia2, &distancia3);
    if(distancia1 < 50){
        S1 = 1;
    }else{
        S1 = 0;
    }
    if(distancia2 < 50){
        S2 = 1;
    }else{
        S2 = 0;
    }
    if(distancia3 < 50){
        S3 = 1;
    }else{
        S3 = 0;
    }
    return;
}

void IA(void){
    if((S1 == 0) && (S2 == 0) && (S3 == 0)){
            M1 = 1;    M2 = 1;
    }else if((S1 == 0) && (S2 == 1) && (S3 == 1)){
            M1 = 1;    M2 = 0;
    }else if((S1 == 0) && (S2 == 1) && (S3 == 0)){
            M1 = 1;    M2 = 0;
    }else if((S1 == 0) && (S2 == 0) && (S3 == 1)){
            M1 = 1;    M2 = 0;
    }else if((S1 == 1) && (S2 == 1) && (S3 == 1)){
            M1 = 1;    M2 = 0;
    }else if((S1 == 1) && (S2 == 0) && (S3 == 0)){
            M1 = 0;    M2 = 1;
    }else if((S1 == 1) && (S2 == 0) && (S3 == 1)){
            M1 = 1;    M2 = 1;
    }else if((S1 == 1) && (S2 == 1) && (S3 == 0)){
            M1 = 0;    M2 = 1 ;
    }
    return;
}

void DirigirMotores(void){
    printf("\n\n      Motor 1    Motor 2\n");
    printf("         %d        %d\n \n", M1, M2);
    return;
}
