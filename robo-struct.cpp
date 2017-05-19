#include <stdio.h>

struct distancia 
	{int x1;
	int x2;
	int x3;
	};

struct motores
	{int M1;
	int M2;
	};

struct distancia LeSensores(void){
	int distancia1, distancia2, distancia3, s1, s2, s3;
    printf("Escreva a distancia ao S1, S2, S3 \n");
    scanf("%d %d %d", &distancia1, &distancia2, &distancia3);
    if(distancia1 < 50){
        s1 = 1;
    }else{
        s1 = 0;
    }
    if(distancia2 < 50){
        s2 = 1;
    }else{
        s2 = 0;
    }
    if(distancia3 < 50){
        s3 = 1;
    }else{
        s3 = 0;
    }

    struct distancia retorna_sensores = {s1, s2, s3}; 

    return retorna_sensores;
}

struct motores IA(struct distancia pega_sensores){
	int S1 = pega_sensores.x1;
	int S2 = pega_sensores.x2;
	int S3 = pega_sensores.x3;
	int m1, m2;
	if((S1 == 0) && (S2 == 0) && (S3 == 0)){
            m1 = 1;    m2 = 1;
    }else if((S1 == 0) && (S2 == 1) && (S3 == 1)){
            m1 = 1;    m2 = 0;
    }else if((S1 == 0) && (S2 == 1) && (S3 == 0)){
            m1 = 1;    m2 = 0;
    }else if((S1 == 0) && (S2 == 0) && (S3 == 1)){
            m1 = 1;    m2 = 0;
    }else if((S1 == 1) && (S2 == 1) && (S3 == 1)){
            m1 = 1;    m2 = 0;
    }else if((S1 == 1) && (S2 == 0) && (S3 == 0)){
            m1 = 0;    m2 = 1;
    }else if((S1 == 1) && (S2 == 0) && (S3 == 1)){
            m1 = 1;    m2 = 1;
    }else if((S1 == 1) && (S2 == 1) && (S3 == 0)){
            m1 = 0;    m2 = 1 ;
    }

    struct motores retorna_motores = {m1, m2};

    return retorna_motores;
}

void DirigirMotores(struct motores pega_motores){
	printf("\n\n      Motor 1    Motor 2\n");
    printf("         %d        %d\n \n", pega_motores.M1, pega_motores.M2);
    return;
}

int main()
{
	struct distancia leituras = LeSensores();

	struct motores comanda = IA(leituras);

	DirigirMotores(comanda);

	return 0;
}
