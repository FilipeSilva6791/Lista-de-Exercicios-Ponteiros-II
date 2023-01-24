/***************************************************************************************
 Implemente a fun��o descrita nas quest�es a seguir, seguindo as especifica��es. No mesmo
 exerc�cio, construa a fun��o main() que utilize ou teste a fun��o desenvolvida.

 5. void ordena(int *dados, int tam, char ordem);
 Fun��o : Ordena em ordem crescente os valores apontados por dados
 Parametros :
 dados � ponteiro para vetor a ser ordenado
 tamanho � numero de itens de dados
 ordem � �c� para ordenamento crescente, �d� para ordenamento decrescente.
 Case insensitive � n�o importa se � maiuscula ou minuscula
 Padr�o � ordenamento crescente.
 DICA : Utilize um algoritmo de ordena��o conhecido, como o bubble sort ou o quick-sort
 ***************************************************************************************/

 #include<stdio.h>
 #include<stdlib.h>
 #include<locale.h>
 #include<time.h>

 #define VAR 20

 //!para ordena��o foi usado o algoritmo BUBBLE SORT

 void ordena (int *dados, int tam, char ordem)
 {
   int i, aux=1, troca;

   if(ordem !='D') //Entra no padr�o, que � crescente
   {
      while (aux==1)
     {
        aux=0; //se o programa n�o cair em nenhum IF, o vetor est� ordenado, portanto pode sair do la�o

        for(i=0; i<(tam-1); i++)
        {
           if( (*(dados+i)) > (*(dados+i+1)))//compara o valor atual do vetor com o pr�ximo
            {
               aux=1;

               //troca os valor atual pelo pr�ximo
               troca = *(dados+i);
               *(dados+i) = *(dados+i+1);
               *(dados+i+1)=troca;
            } //end if
        } //end for
     } //end while
   } //end if

    if (ordem=='D')
   {
      while (aux==1)
     {
        aux=0; //se o programa n�o cair em nenhum IF, o vetor est� ordenado, portanto pode sair do la�o

        for(i=0; i<(tam-1); i++)
        {
           if( (*(dados+i)) < (*(dados+i+1)))//compara o valor atual do vetor com o pr�ximo
            {
               aux=1;

               //troca os valor atual pelo pr�ximo
               troca = *(dados+i);
               *(dados+i) = *(dados+i+1);
               *(dados+i+1)=troca;
            } //end if
        } //end for
     } //end while
   } //end else if
 } //end funcao

 int main ()
{
   setlocale(LC_ALL,"");

   int i;
   int vetor[VAR];
   char opcao;

   //declarando e apontando o ponteiro
   int *pvetor=vetor;

   //preenchendo o vetor com n�meros aleat�rios e exibindo
   srand(time(NULL));

   for(i=0; i<VAR; i++)
    vetor[i]=rand()%1000;

   printf("vetor preenchido com n�meros aleat�rios: \n");

   for(i=0; i<VAR; i++)
    printf("%d ", vetor[i]);

   //escolhendo se o ordenmaneto sera crescente ou decrescente
   printf("\n\nComo voc� deseja ordenar este vetor? Digite C para crescente e D para decrescente.\nOp��o escolhida: ");
   opcao=getchar();

   //transformando o caratere digitado em maiusculo, caso ele seja minusculo
   if (opcao>'Z')
     opcao-=('a'-'A');

   //testando a fun��ao e exibindo os resultados
   ordena(pvetor,VAR,opcao);

   printf("\nvetor ordenado: \n");

   for(i=0; i<VAR; i++)
    printf("%d ", vetor[i]);

   printf("\n\n");
   system("pause");
 }
