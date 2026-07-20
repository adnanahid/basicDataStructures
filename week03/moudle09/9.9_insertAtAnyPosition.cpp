#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int data) : data(data), next(nullptr), prev(nullptr) {}
};

void print_forward(Node* head){
    Node* temp = head;
    while(temp){
      std::cout << temp->data << " ";
      temp = temp->next;
    }
    std::cout << "\n";
}

void print_backward(Node* tail){
    Node* temp = tail;
    while(temp){
      std::cout << temp->data << " ";
      temp = temp->prev;
    }
    std::cout << "\n";
}

void insert_at_any_pos(int pos, int data, Node* &head, Node* &tail){
    Node* newNode = new Node(data);
    if(!head){
        head = newNode;
        tail = newNode;
        return;
    }

    if(!pos){
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }

    Node* currentNode = head;
    for(int i = 0; i < pos - 1 && currentNode->next != nullptr; i++){
        currentNode = currentNode->next;
    }
    
    if(!currentNode->next){
        currentNode->next = newNode;
        newNode->prev = currentNode;
        tail = newNode;
        return;
    }

    Node* nextNode = currentNode->next;

    newNode->next = currentNode->next;
    newNode->prev = currentNode;

    nextNode->prev = newNode;
    currentNode->next = newNode;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    
    head->next = a; 
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    insert_at_any_pos(20, 50, head, tail);

    std::cout << "Forward: ";
    print_forward(head);

    std::cout << "Backward: ";
    print_backward(tail);
    return 0;
}