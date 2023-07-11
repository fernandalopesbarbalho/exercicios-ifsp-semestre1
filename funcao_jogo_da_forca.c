/*
Sua equipe recebeu a missão de programar um jogo da forca no celular. A você coube programar, em linguagem C, a função verifica() que, após uma jogada, verifica se a letra palpite está presente ou não na palavra secreta. Esta função recebe três parâmetros:

-A letra palpite;
- a palavra secreta, que é uma string de letras maiúsculas e sem acento; 
-uma string de resultado, que tem o mesmo comprimento da palavra secreta, e vem inicialmente preenchida com sublinhados. Exemplo:"_____".

Sua função deve procurar a letra palpite na palavra secreta. Para cada ocorrência, deverá preencher a posição correspondente no resultado com a letra. Além de sublinhados, o resultado pode já conter outras letras, que devem ser preservadas. A função deve retornar o número de ocorrências da letra palpite na palavra secreta, ou seja, retorna zero se não encontrou. Ela deve funcionar para palavras de vários tamanhos.
*/

#include <stdio.h>
#include <string.h>

int verifica(char letra[], char palavra[], char sublinhada[]){
  int i, tamanho, contador = 0;

  tamanho = strlen(palavra);

  for (i = 0; i < tamanho; i++){
    if (palavra[i] == letra){
      sublinhada[i] = letra;
      contador += 1;
    }
  }
  return contador;
}

int main(void) {
  char secreta[] = "SECRET"; 
  char result[] = "_____T";

printf("Palavra secreta %s\n", secreta); 
  
  char letra = 'E';

printf("Encontrou '%c' %d vezes result=%.20s\n", letra, verifica(letra, secreta, result), result);
}