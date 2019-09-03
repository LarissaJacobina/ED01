#include <stdio.h>
#include <string.h>
#define TAM 14


typedef struct {
    char nome[TAM];
     char cpf[TAM];
    float peso;
    int idade;
    float altura;
} Pessoa;

void imprimirPessoa(Pessoa p) {
    printf("Nome: %s\t CPF: %s\t Idade: %d\t Peso: %.2f\t Altura: %.2f\n", p.nome, p.cpf, p.idade, p.peso, p.altura);
}

void setPessoa(Pessoa *p, char nome[], char cpf[], int idade, float peso, float altura) {

    for (int i = 0; i < TAM; i++) {
        p->nome[i] = nome[i];
    }
    for (int i = 0; i < TAM; i++) {
        p->cpf[i] = cpf[i];
    }
    (*p).idade = idade;
    p->peso = peso;
    p->altura = altura;
}

int main() {
    Pessoa pessoa01;
    char nome[TAM] = "larissa";
    char cpf[TAM] = "111.111.111-00";
    setPessoa(&pessoa01, nome, cpf, 20, 72, 1.70);
    imprimirPessoa(pessoa01);
    return 0;
}
