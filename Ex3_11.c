/****************************************************************************************
 Implemente a fun��o descrita nas quest�es a seguir, seguindo as especifica��es. No mesmo
 exerc�cio, construa a fun��o main() que utilize ou teste a fun��o desenvolvida.

 3. void par_impar(int *vetor, int tamanho, int *par, int *npar, int *impar, int *nimpar);
 Fun��o : Copia os valores pares de vetor para par e valores impares para impar
 Parametros :
 vetor � ponteiro para variavel de entrada de dados
 tamanho � numero de itens de vetor
 par � ponteiro para vetor que armazena valores pares
 *npar � numero de valores copiados para par
 impar � ponteiro para vetor que armazena valores impares
 *nimpar � numero de valores copiados para par
 DICA : declare vari�vel para armazenar os dados apontados por par e impar no programa
 principal.
 ****************************************************************************************/

 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>
 #include<locale.h>

 #define VAR 10

 void par_impar(int *vetor, int tamanho, int *par, int *npar, int *impar, int *nimpar)
 {
    int j;

    int x,y;
    x=0; y=0;

    for(j=0; j<tamanho; j++)
    {
       if(*(vetor+j)%2==0) //valor � par
       {
          *(par+x)=*(vetor+j);
          x++;
       }
       else               //valor � impar
       {
          *(impar+y)=*(vetor+j);
          y++;
       }
    }
    *npar=x;
    *nimpar=y;
 }

 int main ()
 {
    setlocale(LC_ALL,"");

    int i;
    int vetor[VAR];
    int pares[VAR];
    int impares[VAR];
    int xpar=0, ximpar=0;


    //declarando os ponteiros e apontando eles
    int *pvetor=vetor;
    int *ppares=pares;
    int *pimpares=impares;
    int *pxpar=&xpar;
    int *pximpar=&ximpar;


    //preenchendo o vetor com valores aleat�rios
    srand(time(NULL));

    for(i=0;i<VAR;i++)
        vetor[i]=rand()%100;

    //testando a fun��o
    par_impar(pvetor,VAR,ppares,pxpar,pimpares,pximpar);

    printf("Vetor com os n�meros aleat�rios:\n");

    for(i=0;i<VAR;i++)
        printf("%d ", vetor[i]);

    printf("\n\nVetor apenas com os valores pares: \n");

    for(i=0;i<xpar;i++)
        printf("%d ", pares[i]);

    printf("\n\nVetor apenas com os valores impares: \n");

    for(i=0;i<ximpar;i++)
        printf("%d ", impares[i]);




    printf("\n\n");
    system("pause");
 }
