//
// Created by david on 29/08/23.
//

#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack() {
   structure = NULL;
}

Stack::~Stack() {
    NodeType* tempPtr;
    while(structure != NULL) {
        tempPtr = structure;
        structure = structure->next;
        delete tempPtr;
    }
}

bool Stack::isEmpty() const {
    return (structure == NULL);
}

bool Stack::isFull() const {
    try {
        NodeType* location;
        location = new NodeType;
        delete location;
        return false;
    } catch (std::bad_alloc exception) {
        return true;
    }
}

void Stack::push(int item) {
    if(!isFull()) {
        NodeType* location;
        location = new NodeType;
        location->info = item;
        location->next = structure;
        structure = location;
    } else {
        throw "Stack is already full!";
    }
}

ItemType Stack::pop() {
    if(!isEmpty()) {
        NodeType* itemTemp;
        itemTemp = this->structure;
        structure = itemTemp->next;
        ItemType item = itemTemp->info;
        delete itemTemp;
        return item;
    } else {
        throw "Stack is empty!";
    }
}

void  Stack::print() const {
    NodeType* tempItem = structure;
    while (tempItem != NULL) {
        cout << tempItem->info << " ";
        tempItem = tempItem ->next;
    }
    cout << endl;
}

ItemType Stack::getLast() {
    NodeType* item;
    item = this->structure;
    return item->info;
}

