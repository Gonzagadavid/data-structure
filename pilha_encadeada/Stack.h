//
// Created by david on 29/08/23.
//

#ifndef ESTRUTURA_DE_DADOS_STACK_H
#define ESTRUTURA_DE_DADOS_STACK_H
#include "NodeType.h"
const int MAX_ITEMS = 20;

class Stack {
public:
    Stack(); // construtor
    ~Stack(); // destrutor
    bool isEmpty() const;
    bool isFull() const;
    void print() const;

    void push(ItemType);
    ItemType pop();
    ItemType getLast();

private:
    NodeType* structure;
};


#endif //ESTRUTURA_DE_DADOS_STACK_H
