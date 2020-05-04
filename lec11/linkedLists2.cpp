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

int lengthOfList(LinkedList *l) {
    int count = 0;

    // iterate through the list, increasing count with each Node we see
    Node *n = l->head;
    while (n != nullptr) { // keep going while the pointer is non-null
        count++;
        n = n->next;
    }

    return count;
}

// let's make a print list function!
// let's output for the list [1,2,3] the string "1->2->3->X"
void printList(LinkedList *l) {
    for (Node *n = l->head; n != nullptr; n = n->next) {
        // output our current node's data
        cout << n->data;
        // print an arrow
        cout << "->";
    }

    // now print out the X
    cout << "X\n";
}

void freeLinkedList(LinkedList *list) {
    // first delete the Nodes
    Node *n = list->head; 
    while (n != nullptr) {
        // save the next Node before we delete the current one
        Node *next = n->next;
        // now we can safely delete n and still get to the next node
        delete n;
        n = next;
    }

    // now all the nodes have been deleted
    // let's delete the LinkedList object
    delete list;
}


int main() {
    // Let's use the insertToHeadOfList function to make the list [1,2,3]
    LinkedList *l = new LinkedList;
    l->head = nullptr;
    l->tail = nullptr;
    insertToHeadOfList(l, 3); // [3]
    insertToHeadOfList(l, 2); // [2, 3]
    insertToHeadOfList(l, 1); // [1, 2, 3]

    
    cout << lengthOfList(l) << endl;
    printList(l);

    // now let's free the list
    freeLinkedList(l);

    return 0;
}