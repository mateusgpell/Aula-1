#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int h, m, s;
    s = 00;
    m = s;
    h = m;
    while(1){
        printf("\n \n    Hora:\n \n \n");
        while(h < 24){
            while(m < 60){
                while(s < 60){
                    printf("\r           %2dh %2dm %2ds", h, m, s);
                    s = s + 1;
                    Sleep(1000);
                }
                s = 0;
                m = m+1;
            }
            s = 0;
            m = 0;
            h = h + 1;
        }
    }
    return 0;
}
