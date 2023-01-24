/**********************************************************************************************
 Implemente a função descrita nas questões a seguir, seguindo as especificações. No mesmo
 exercício, construa a função main() que utilize ou teste a função desenvolvida.

 1. void inverte(char *str);
 Função : Inverte a ordem dos caracteres na string str
 **********************************************************************************************/

 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 #include<locale.h>

 void inverte (char *str)
 {
      int i=0;
      char troca;
      int tamanho=0;

      do
      {
          tamanho++;
          i++;
      } while(*(str+i)!='\0'); // \0 -> fim da string


      for(i=0; i<(tamanho/2); i++)
      {
         troca=*(str+i);
         *(str+i)=*(str+tamanho-i-1);
         *(str+tamanho-i-1)=troca;
      }

 }

 int main ()
 {
     setlocale(LC_ALL,"");

     char string[30];

     //declarando e apontando o ponteiro
     char *pstring;
     pstring=string;

     printf("Digite uma palavra: ");
     gets(string);

     inverte(pstring);

     printf("Palavra invertida: %s \n\n", string);
     system ("pause");
 }
