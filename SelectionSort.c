#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAMANHO 4


int aleatorio(){

    int vetor[TAMANHO]; //vetor com tamanho definido
    int aux = 0; //varivel para ser usada na troca
    int eleito, menor, posicaoDoMenor;
    clock_t tempoInicial, tempoFinal; //Variaveis para guardar o tempo de execucao
    srand(time(NULL)); //Cria uma semente para numeros aleatorios
    tempoInicial = clock(); //inicia contagem do tempo
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 10; //Atribui um inteiro aleatorio entre 0 e 5
    }
    //Mostra valores do vetor nao ordenado
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    //Ordena vetor pelo metodo da da selecao
    for (int i = 0; i < TAMANHO-2; i++) {// 0 -> penultina posicao
        eleito = vetor[i];
        menor = vetor[i+1];
        posicaoDoMenor = i+1;
        for (int j = i+1; j < TAMANHO; j++) {            
            if (vetor[j] < menor) {
                menor = vetor[j]; 
                posicaoDoMenor = j;
            }
        }
        if( menor < eleito ){
            vetor[i] = vetor[posicaoDoMenor];
            vetor[posicaoDoMenor] = eleito;
        }
    }
    //Mostra valores do vetor ordenado   
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    tempoFinal = clock(); //finaliza contagem do tempo
    //calcula e mostra o tempo total de execucao
    printf("Tempo: %f s\n", (double) (tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
}

int crescente() {
    int vetor[TAMANHO]; //vetor com tamanho definido
    int aux = 0; //varivel para ser usada na troca
    int eleito, menor, posicaoDoMenor;
    int cont = 0;
    clock_t tempoInicial, tempoFinal; //Variaveis para guardar o tempo de execucao
    //srand(time(NULL)); //Cria uma semente para numeros aleatorios
    tempoInicial = clock(); //inicia contagem do tempo
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = i; //Atribui um inteiro aleatorio entre 0 e 5
    }
    //Mostra valores do vetor nao ordenado
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    //Ordena vetor pelo metodo da da selecao
    for (int i = 0; i < TAMANHO-2; i++) {// 0 -> penultina posicao
        eleito = vetor[i];
        menor = vetor[i+1];
        posicaoDoMenor = i+1;
        for (int j = i+1; j < TAMANHO; j++) {            
            if (vetor[j] < menor) {
                menor = vetor[j]; 
                posicaoDoMenor = j;
            }
        }
        if( menor < eleito ){
            vetor[i] = vetor[posicaoDoMenor];
            vetor[posicaoDoMenor] = eleito;
        }
	cont = cont + 1;
    }
    //Mostra valores do vetor ordenado   
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n Comparações: %d ", cont);
    printf("\n");
    tempoFinal = clock(); //finaliza contagem do tempo
    //calcula e mostra o tempo total de execucao
    printf("Tempo: %f s\n", (double) (tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
}

int decrescente() {
    int vetor[TAMANHO]; //vetor com tamanho definido
    int aux = 0; //varivel para ser usada na troca
    int eleito, menor, posicaoDoMenor;
    int cont = 0;
    clock_t tempoInicial, tempoFinal; //Variaveis para guardar o tempo de execucao
    //srand(time(NULL)); //Cria uma semente para numeros aleatorios
    tempoInicial = clock(); //inicia contagem do tempo
    for (int i = TAMANHO; i >= 0; i--) {
        vetor[i] = i; //Atribui um inteiro aleatorio entre 0 e 5
    }
    //Mostra valores do vetor nao ordenado
    for (int i = TAMANHO; i > 0; i--) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    //Ordena vetor pelo metodo da da selecao
    for (int i = 0; i < TAMANHO-2; i++) {// 0 -> penultina posicao
        eleito = vetor[i];
        menor = vetor[i+1];
        posicaoDoMenor = i+1;
        for (int j = i+1; j < TAMANHO; j++) {            
            if (vetor[j] > menor) {
                menor = vetor[j]; 
                posicaoDoMenor = j;
            }
        }
        if( menor > eleito ){
            vetor[i] = vetor[posicaoDoMenor];
            vetor[posicaoDoMenor] = eleito;
        }
	cont = cont + 1;
    }
    //Mostra valores do vetor ordenado   
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n Comparações: %d ", cont);
    printf("\n");
    tempoFinal = clock(); //finaliza contagem do tempo
    //calcula e mostra o tempo total de execucao
    printf("Tempo: %f s\n", (double) (tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
}


void main() {

    int opcao = 0;
    printf("Aleatório = 1/n Crescente = 2\n Decrescente = 3\n");
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
