#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>


int main()
{
    printf("Teclas sao notas\nLa:a\nDo:C\nRe:d\nMi:E\nFa:F\nSol:G\nSi:B\nDo acima:V\nMusica:K\n");
    printf("_______________\n");
    printf("| | | | | | | | \n");
    printf("C D E F G A B C\n");
    while(1){
            if (kbhit())            //Se alguma tecla for pressionada!
            {
                int  codigo_tecla = getch();   //Le codigo da tecla!
                if (codigo_tecla=='a'){
                    Beep(880,600);
                }else if (codigo_tecla=='c'){
                    Beep(523,600);
                }else if (codigo_tecla =='d'){
                    Beep(587,600);
                }else if (codigo_tecla =='e'){
                    Beep(659,600);
                }else if (codigo_tecla =='b'){
                    Beep(987,600);
                }else if (codigo_tecla =='g'){
                    Beep(784,600);
                }else if (codigo_tecla =='f'){
                    Beep(698,600);
                }else if (codigo_tecla =='v'){
                    Beep(1046,1000);
                }else if(codigo_tecla == 'k'){
                    printf("Sound!!!\n");
                    Beep(523,600); Beep(587,600); Beep(659,600); Beep(698,600);   Beep(784,600);   Beep(880,600);     Beep(987,600);  Beep(1046,1000);
                }else if(codigo_tecla == 'i'){
                Beep(987,500); Beep(880,500);  Beep(784,1000);  Beep(987,500);  Beep(987,500); Beep(880,500); Beep(880,500); Beep(784,1000);
                Beep(987,500);  Beep(987,500); Beep(880,500); Beep(880,500); Beep(987,500);  Beep(987,500); Beep(880,500); Beep(880,500);
                Beep(987,500);  Beep(987,500); Beep(880,500); Beep(880,500); Beep(784,1000);
                }
            }

    }

    return 0;
}
