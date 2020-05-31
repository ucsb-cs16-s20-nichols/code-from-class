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

void printListHelper(Node *head) {
  if (head == nullptr) {
    cout << "X\n";
  } else {
    // non-empty list
    cout << head->data << "->";
    // print the rest of the list, recursively
    printListHelper(head->next);
  }
}

void printList(LinkedList *l) {
  printListHelper(l->head);
}

// remember to give back the updated list
Node* deleteNodeRecursiveHelper(Node *head, int value) {
  if (head == nullptr) {
    // base case - empty list 
    // do nothing!
    // result is an empty list still
    return nullptr;
  } else {
    // recursive case - nonempty list
    // we can assume that we get back a pointer to the head of a new smaller list
    // with all nodes where data=value deleted
    Node *headOfSmallerListWithValueDeleted = deleteNodeRecursiveHelper(head->next, value);
    if (head->data == value) {
      // uh oh
      // we better delete our own head
      delete head;
      // the result is the modified smaller list
      return headOfSmallerListWithValueDeleted;
    } else {
      // head stays!
      // head->next needs to be modified, because we might have deleted its
      // old next Node
      head->next = headOfSmallerListWithValueDeleted;
      return head; // return the modified list with head still in it
    }
  }
}

void deleteNodeRecursive(LinkedList *list, int value) {
  // call helper to get the new head
  Node *newHead = deleteNodeRecursiveHelper(list->head, value);

  // it's possible that the tail changed as well! So we better find the new tail
  Node *newTail = list->head;
  if (newHead == nullptr) {
    newTail = nullptr;
  } else {
    while (newTail->next != nullptr) {
      // keep going until we find the last node 
      // (i.e., the node whose next pointer is null)
      newTail = newTail->next;
    }
    // now newTail is in the right spot
  }

  list->head = newHead;
  list->tail = newTail;
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

    deleteNodeRecursive(l, 50);
    printList(l);
    deleteNodeRecursive(l, 10);
    printList(l);

    return 0;
}
