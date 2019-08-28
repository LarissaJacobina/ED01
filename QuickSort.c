#include<stdlib.h> 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAMANHO 10
void Quick(int vetor[TAMANHO], int inicio, int fim);

int comp = 0, troca = 0;

int aleatorio() {
	
	int vetor[TAMANHO]; //vetor com tamanho definido
    clock_t tempoInicial, tempoFinal; //Variaveis para guardar o tempo de execucao
    srand(time(NULL)); //Cria uma semente para numeros aleatorios
    tempoInicial = clock(); //inicia contagem do tempo
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 10; //Atribui um inteiro aleatorio entre 0 e 9
    }
    //Mostra valores do vetor nao ordenado
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    //Chama a fucao passando o vetor como parametro
    Quick(vetor, 0, TAMANHO - 1);
    
    //Mostra valores do vetor ordenado
   for (int i = 0; i < TAMANHO; i++) {
       printf("%d\t", vetor[i]);
    } 
    printf("\nComparação: %d", comp);
    printf("\nTroca: %d", troca);
    printf("\n");
    tempoFinal = clock(); //finaliza contagem do tempo
    //calcula e mostra o tempo total de execucao
    printf("Tempo: %f s\n", (double) (tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
}


int crescente() {
	
	int vetor[TAMANHO]; //vetor com tamanho definido
    clock_t tempoInicial, tempoFinal; //Variaveis para guardar o tempo de execucao
    //srand(time(NULL)); //Cria uma semente para numeros aleatorios
    tempoInicial = clock(); //inicia contagem do tempo
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = i; //Atribui um inteiro aleatorio entre 0 e 9
    }
    //Mostra valores do vetor nao ordenado
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    //Chama a fucao passando o vetor como parametro
    Quick(vetor, 0, TAMANHO - 1);
    
    //Mostra valores do vetor ordenado
   for (int i = 0; i < TAMANHO; i++) {
       printf("%d\t", vetor[i]);
    } 
    printf("\nComparação: %d", comp);
    printf("\nTroca: %d", troca);
    printf("\n");
    tempoFinal = clock(); //finaliza contagem do tempo
    //calcula e mostra o tempo total de execucao
    printf("Tempo: %f s\n", (double) (tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
}


int decrescente() {
	
	int vetor[TAMANHO]; //vetor com tamanho definido
    clock_t tempoInicial, tempoFinal; //Variaveis para guardar o tempo de execucao
    //srand(time(NULL)); //Cria uma semente para numeros aleatorios
    tempoInicial = clock(); //inicia contagem do tempo
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = TAMANHO - i; //Atribui um inteiro aleatorio entre 0 e 9
    }
    //Mostra valores do vetor nao ordenado
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    //Chama a fucao passando o vetor como parametro
    Quick(vetor, 0, TAMANHO - 1);
    
    //Mostra valores do vetor ordenado
   for (int i = 0; i < TAMANHO; i++) {
       printf("%d\t", vetor[i]);
    } 
    printf("\nComparação: %d", comp);
    printf("\nTroca: %d", troca);
    printf("\n");
    tempoFinal = clock(); //finaliza contagem do tempo
    //calcula e mostra o tempo total de execucao
    printf("Tempo: %f s\n", (double) (tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
}


void Quick(int vetor[TAMANHO], int inicio, int fim){
   
   int pivo, aux, i, j, meio;
   
   i = inicio;
   j = fim;
   
   meio = (int) ((i + j) / 2);
   pivo = vetor[meio];
   
   do{
      while (vetor[i] < pivo) i = i + 1;
      comp = comp + 1;
      while (vetor[j] > pivo) j = j - 1;
      comp = comp + 1;
      
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
         troca = troca + 1;
      }
      
   }while(j > i);
   
   if(inicio < j) Quick(vetor, inicio, j);
   if(i < fim) Quick(vetor, i, fim);
   

}


void main() {

    int opcao = 0;
    printf("Aleatório = 1\n Crescente = 2\n Decrescente = 3\n");
    printf("Ordem: ");
    scanf("%d", &opcao);
    printf("\n");

    switch (opcao) {
	case 1:
	aleatorio();
	break;
	
	case 2:
	crescente();
	break;

	case 3:
	decrescente();
	break;
    }
}

