#include <iostream>
using namespace std;

class Node {
    public: 
        int data;
        Node* next;

        Node(int val) {
            data = val;
            next = nullptr;
        }

};


int main () {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    // Node* current = head;
    // while (current != nullptr) {
    //     cout << "Node data: " << current->data << endl;
    //     current = current->next;
    // }

    //Reverse the linked list
    Node* prev = nullptr;
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next; //Store the next node, because we are about to overwrite current->next
        current->next = prev; //Reverse the link
        prev = current; //Move prev and current one step forward
        current = nextNode; //Move to the next node
    }

    // Clean up memory
    current = head;
    Node* nextNode;
    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}