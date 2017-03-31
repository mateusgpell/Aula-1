#include <stdio.h>
#include <stdlib.h>
#include <windows.h>    // Para usar a funcao Sleep(1000)
#include <mmsystem.h>

int main()
{   int hora, minuto, segundo, h1, m1, s1;    //Declara variaveis inteiras: hora, minuto e segundo
    hora=minuto=segundo=h1=m1=s1=0;
    printf("Isira hora, minuto e segundo para despertar:");
    scanf("%d %d %d", &h1, &m1, &s1);
    printf("\n\n\n\n\n\n\n\n");     //Imprime linhas em Branco!

    //Inicio do Loop
while(1)
    {
    printf("\r       Hora: %2dh %2dm %2ds", hora, minuto, segundo); 	//%2d  ->  Imprime o inteiro com 2 casa decimais!
									//\r retorna o cursor para o inicio da linha
    segundo++;                              //Incrementa o segundo!
    if(segundo==60) {segundo=0; minuto++;}  //Se segundo = 60, zera segundo e incrementa minuto
    if(minuto==60) {minuto=0; hora++;}      //Se minuto = 60, zera minuto e incrementa hora
    if(hora==24) hora=0;                    //Se hora = 24, zera hora!

    Sleep(1000);            //Dorme por 1 segundo!

    if (kbhit())            //Se alguma tecla for pressionada!
   		{
		int  codigo_tecla = getch();    //Le codigo da tecla!
         	if (codigo_tecla=='f') break;   //Se codigo da tecla for "f", interrompe o While!
                }   //Fim do if!

    if(h1==hora && m1==minuto && s1==segundo){
                printf("\n \n \n \n       !------------ACORDA!!!!------------!");
                PlaySound("test.wav", NULL, SND_ASYNC);
                while(1){
                if (kbhit())            //Se alguma tecla for pressionada!
                    {
                    int  codigo_tecla = getch();    //Le codigo da tecla!
                        if (codigo_tecla=='f') break;   //Se codigo da tecla for "f", interrompe o While!
                    }   //Fim do if!
                }
        break;
    }

    }   //Fim do while  ou  Loop!
    printf("\n \n \n \nACORDA!!!!");

    //Fim do Loop!;
    return 0;   //Retorna 0 para dizer que deu tudo certo!
}   //Final do Main!
