#include "node_type.h"

class Queue
{
public:
    Queue(); // Constructor
    ~Queue(); // Destructor
    bool isEmpty() const;
    bool isFull() const;
    void print() const;

    void enqueue(ItemType);
    ItemType dequeue();
private:
    NodeType* front;
    NodeType* rear;
};