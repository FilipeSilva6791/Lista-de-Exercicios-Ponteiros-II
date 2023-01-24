/****************************************************************************************
 Implemente a função descrita nas questões a seguir, seguindo as especificações. No mesmo
 exercício, construa a função main() que utilize ou teste a função desenvolvida.

 2. int vetorpares (int *vetor, int tamanho, int *p);
 Função : Copia os valores pares de vetor para p.
 Parametros : p – ponteiro para vetor de numeros pares
 vetor – ponteiro para vetor com todos os numeros
 tamanho – numero de itens de vetor
 Retorno : quantidade de valores copiados para p.
 DICA : declare variável para armazenar os dados apontados por p no programa principal.
 ****************************************************************************************/

 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>

 #define VAR 20

 int vetorpares (int *vetor, int *p, int tamanho)
 {
    int j;
    int qtdpares=0; //armazena quantos numeros pares foram encontrados

    for(j=0; j<tamanho; j++)
    {
       if( *(vetor+j)%2 == 0)
       {
           *(p+qtdpares)=*(vetor+j);

           qtdpares++;
       }
    }

    return qtdpares;
 }

 int main ()
 {
   int i;
   int vetor[VAR];
   int pares[VAR];  //vetor para armazenar os valores pares do vetor
   int xp;          //armazena qts valores pares existem no vetor

   //declarando os ponteiros
   int *pvetor;
   int *ppares;

   //apontando os ponteiros
   pvetor=vetor;
   ppares=pares;

   //preenchendo o vetor com valores aleatórios
   srand(time(NULL));

   for(i=0; i<VAR; i++)
        vetor[i]=rand()%100;

   //testando a função
   xp=vetorpares(pvetor,ppares,VAR);

   //exibindo o vetor com os valores aleatorios e o vetor com os pares

   printf("Vetor preenchido com valores aleatorios: \n");

   for(i=0; i<VAR; i++)
    printf("%d ", *(vetor+i));

   printf("\n\nVetor preenchido com os valores pares do vetor acima: \n",xp);

   for(i=0; i<xp; i++)
    printf("%d ", *(pares+i));

   printf("\n\n");
   system("pause");
 }
