#include <iostream>
using namespace std;

// represents a single node in our Linked List
struct Node {
    int data;
    Node* next; // we're using Nodes inside of Nodes!
};

// a LinkedList will package up all the Nodes
// It'll hold the head and the tail pointers
struct LinkedList {
    Node *head; // head is the first element of the list
    Node *tail; // tail is the last element of the list

    // the tail node is nice when you want to add stuff to the end!
};

int main() {
    Node *head = nullptr; // head points to the empty list

    Node *ten = new Node;
    Node *twenty = new Node;

    ten->data = 10; // (*ten).data = 10;
    ten->next = twenty;
    twenty->data = 20;
    twenty->next = nullptr;

    head = ten; // head points to the list [10, 20]

    // let's put this list inside a LinkedList struct
    LinkedList *l = new LinkedList;
    l->head = ten;
    l->tail = twenty;

    return 0;
}