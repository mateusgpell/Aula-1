#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int h, m, s;
    int h1, m1, s1;
    s = 0;
    m = s;
    h = m;
    printf("Coloque a hora:");
    scanf("%d", &h1);
    printf("Coloque o minuto:");
    scanf("%d", &m1);
    printf("Coloque a segundo:");
    scanf("%d", &s1);
    while(1){
            printf("\n \n    Hora:\n \n \n");
            while(h < 24){
            while(m < 60){
                while(s < 60){
                    printf("\r           %2dh %2dm %2ds", h, m, s);
                    s = s + 1;
                    if((h1 == h) && (m1 == m) && (s1 ==s)){
                        break;
                    }
                    Sleep(1000);
                }
                if((h1 == h) && (m1 == m) && (s1 ==s)){
                        break;
                }
                s = 0;
                m = m+1;
            }
            if((h1 == h) && (m1 == m) && (s1 ==s)){
                break;
            }
            s = 0;
            m = 0;
            h = h + 1;
        }
                if((h1 == h) && (m1 == m) && (s1 ==s)){
                printf("\a \n \n      ACORDAAAAA!!\a\n \n      ACORDAAAAA!! \a \a");
                break;
            }


    }
}
