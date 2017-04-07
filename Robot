#include <stdio.h>
#include <conio.h>


int main()
{
    int s1, s2, s3, m1, m2;
    m1 = m2 = s1 = s2 = s3 = 0;
    printf("     Tabela de Sensores\n");
    printf("     Tecla     Sensor 1     Sensor 2    Sensor 3\n        1        1              0             0\n        2        0              1             1\n        3        0              1             0\n        4        0              0             1\n        5        1              1             1\n        6        1              0             0\n        7        1              0             1\n        8        1              1             0\n");
    while(1)
        {//Ler sensor
        if( kbhit()){
            int tecla = getch();
            printf("%d", tecla);
        }
        //Análise dos sensores
        //S1      | S2 |          S3         ||  M1   | M2
        if((s1 = 0) && (s2 = 0) && (s3 = 0)){
                m1 = 1;    m2 = 1;
        }else if((s1 = 0) && (s2 = 1) && (s3 = 1)){
                m1 = 1;    m2 = 0;
        }else if((s1 = 0) && (s2 = 1) && (s3 = 0)){
                m1 = 1;    m2 = 0;
        }else if((s1 = 0) && (s2 = 0) && (s3 = 1)){
                m1 = 1;    m2 = 0;
        }else if((s1 = 1) && (s2 = 1) && (s3 = 1)){
                m1 = 1;    m2 = 0;
        }else if((s1 = 1) && (s2 = 0) && (s3 = 0)){
                m1 = 0;    m2 = 1;
        }else if((s1 = 1) && (s2 = 0) && (s3 = 1)){
                m1 = 1;    m2 = 1;
        }else if((s1 = 1) && (s2 = 1) && (s3 = 0)){
                m1 = 0;    m2 = 1 ;
        }


        }


    return 0;
}

