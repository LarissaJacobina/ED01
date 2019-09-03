#include <stdio.h>
#include <string.h>
#include <math.h>
#define TAM_NOME 30
#define TAM_CPF 14


typedef struct {
    char nome[TAM_NOME];
     char cpf[TAM_CPF];
    float peso;
    int idade;
    float altura;
    float imc;
} Pessoa;

void imprimirPessoa(Pessoa p) {
    printf(" Nome: %s\n CPF: %s\n Idade: %d\n Peso: %.2f\n Altura: %.2f\n IMC: %.2f\n", p.nome, p.cpf, p.idade, p.peso, p.altura, p.imc);
}

void setPessoa(Pessoa *p, char nome[], char cpf[], int idade, float peso, float altura, float imc) {

    for (int i = 0; i < TAM_NOME; i++) {
        p->nome[i] = nome[i];
    }
    for (int i = 0; i < TAM_CPF; i++) {
        p->cpf[i] = cpf[i];
    }
    (*p).idade = idade;
    p->peso = peso;
    p->altura = altura;
    imc = peso/(altura * altura);
    p->imc = imc;
}

int main() {
    Pessoa pessoa01;
    char nome[TAM_NOME] = "Larissa Jacobina";
    char cpf[TAM_CPF] = "111.111.111-00";
    float imc;
    setPessoa(&pessoa01, nome, cpf, 20, 72, 1.70, imc);
    
    imprimirPessoa(pessoa01);
    return 0;
}
