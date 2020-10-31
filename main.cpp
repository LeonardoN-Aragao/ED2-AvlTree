#include <iostream>
#include "ArvoreAvl.h"

using namespace std;

/*
    Implementar uma árvore AVL para armazenar chaves inteiras e efetuar comparações do tempo de busca com relação à árvore binária de busca tradicional.
 
    Nesta atividade,  você deve fazer:
        Criar um TAD NoAVL contendo, minimamente, quatro campos: informação a ser armazenada, ponteiro para filho esquerdo, ponteiro para filho direito e fator de balanceamento.
        Obs.: o ponteiro para o pai pode ou não ser necessário, dependendo da sua implementação.

        Criar um TAD ArvoreAVL contendo o ponteiro para a raiz e um campo booleano para indicar se o balanceamento deve ou não ser realizado. O TAD deve conter todas as operações básicas de uma árvore binária de busca: inserção, remoção e busca.
        
        Implementar as operações necessárias para o balanceamento (rotações e verificação do fator de balanceamento).
        
        Contabilizar número de comparações de chaves, altura da árvore e tempo de execução.
        
        Comparar os dados obtidos no passo 4 para a árvore com e sem o balanceamento ativado (quando o balanceamento está desabilitado, a árvore equivale a uma árvore binária de busca padrão). Utilize as duas situações abaixo para efetuar a comparação:
        
        Sequência de M buscas após a inserção de N valores aleatórios.
       
        Sequência de M buscas após a inserção de N valores em uma sequência ordenada.
*/

int main(){

    srand(time(NULL)*clock());
    clock_t t0, tf;

    t0 = clock();
    ArvoreAvl a(true);
    int tam = 10;

    for(int i = 0; i<tam; i++){
        int j = rand()%20;
        a.insere(j);
    }

    cout<<"Altura: " << a.getAltura()<<endl;

    for(int i = 0; i<tam; i++){
        int j = rand()%20;
        a.busca(j);
    }

    for(int i = 0; i<tam; i++){
        int j = rand()%20;
        a.remove(j);
    }
    tf = clock();

    cout<<"Comparacoes: " << a.getComparacao()<<endl;
    cout<<"Tempo: " << tf-t0/CLOCKS_PER_SEC<<endl;

    return 0;
}