//
// Created by david on 29/08/23.
//

#include "Stack.h"
#include <iostream>

using namespace std;

int main() {
    ItemType item;
    Stack stack;
    ItemType stackItem;
    int initial = 2;
    int count = 0;
    stack.push(initial);

   while(!stack.isFull() && count < MAX_ITEMS) {
       stackItem = stack.getLast();
       item = stackItem + 2;
       stack.push(item);
       count++;
       cout << "\n added: " << item << "\n";
   }

   cout << "\n----------------\n";
   cout << "\nStack is full\n";
   cout << "\n----------------\n";

   stack.print();

    while(!stack.isEmpty()) {
        item = stack.pop();

        cout << "\n removed: " << item << "\n";
    }
    cout << "\n----------------\n";
    cout << "\nStack is empty\n";
    cout << "\n----------------\n";

    return 0;
};