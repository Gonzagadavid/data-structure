//
// Created by david on 05/08/23.
//

#ifndef ESTRUTURA_DE_DADOS_STACK_H
#define ESTRUTURA_DE_DADOS_STACK_H
#include "ItemType.h"
const int MAX_ITEMS = 20;

class Stack {
public:
    Stack(); // construtor
    ~Stack(); // desconstrutor
    bool isEmpty() const;
    bool isFull() const;
    void print() const;

    void push(ItemType);
    ItemType pop();
    ItemType getItem(int position);
    ItemType getLast();
private:
    int length;
    ItemType* structure;
};


#endif //ESTRUTURA_DE_DADOS_STACK_H
