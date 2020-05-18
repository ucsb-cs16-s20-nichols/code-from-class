#include <iostream>
#include <cassert>
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

// adds one node to the start of the list h
void insertToHeadOfList(LinkedList *h, int value) {
    // make a new Node and put it at the head of the current list
    Node *new_node = new Node;
    new_node->data = value;

    // let's set the next pointer of the new_node
    new_node->next = h->head;

    // now place new_node at the head of h
    h->head = new_node;

    // it's possible that we're inserting into the empty list
    if (h->tail == nullptr) {
        h->tail = new_node;
    }
}

int recursiveMin(Node *head) {
    assert(head != nullptr);

    // base case--size 1 list
    if (head->next == nullptr) {
        // the min is the only data value
        return head->data;
    }
    // recursive case
    int minOfSmallerList = recursiveMin(head->next);
    // build up the final answer by also considering head->data
    if (head->data < minOfSmallerList) {
        return head->data;
    } else {
        return minOfSmallerList;
    }
}

// this function is not recursive
// it'll call the recursive min helper function
int recursiveMinLinkedList(LinkedList *l) {
    return recursiveMin(l->head);
}

int main(int argc, char *argv[])
{
    LinkedList *l = new LinkedList;
    l->head = nullptr;
    l->tail = nullptr;
    insertToHeadOfList(l, 40); // [40]
    insertToHeadOfList(l, 20); // [20, 40]
    insertToHeadOfList(l, 50); // [50, 20, 40]
    insertToHeadOfList(l, 10); // [10, 50, 20, 40]

    // cout << recursiveMin(l->head) << endl;
    // no, we want to use helper functions so that we can pass along l itself!
    cout << recursiveMinLinkedList(l) << endl;


    return 0;
}
