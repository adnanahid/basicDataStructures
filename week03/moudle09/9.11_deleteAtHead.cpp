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

void delete_at_head(Node* &head){
    Node* deleteNode = head;
    head = deleteNode->next;
    head->prev = nullptr;
    delete deleteNode;
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

    delete_at_head(head);

    std::cout << "Forward: ";
    print_forward(head);

    std::cout << "Backward: ";
    print_backward(tail);
    return 0;
}