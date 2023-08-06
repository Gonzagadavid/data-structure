//
// Created by david on 05/08/23.
//

#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack() {
    length = 0;
    structure = new ItemType[MAX_ITEMS];
}

Stack::~Stack() {
    delete [] structure;
}

bool Stack::isEmpty() const {
    return (length == 0);
}

bool Stack::isFull() const {
    return (length == MAX_ITEMS);
}

void Stack::push(int item) {
    if(!isFull()) {
        structure[length] = item;
        length++;
    } else {
        throw "Stack is already full!";
    }
}

ItemType Stack::pop() {
    if(!isEmpty()) {
        ItemType aux = structure[length - 1];
        length--;
        return aux;
    } else {
        throw "Stack is empty!";
    }
}

void  Stack::print() const {
    cout << "Pilha = ";
    for(int i = 0; i < length; i++) {
        cout << structure[i];
    }
    cout << endl;
}

ItemType Stack::getItem(int position) {
    return structure[position];
}

ItemType Stack::getLast() {
    return structure[length - 1];
}


