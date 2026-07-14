#include <bits/stdc++.h>

class Node {
  public:
    int val;
    Node *next;
    Node *prev;
    Node(int val) : val(val), next(nullptr), prev(nullptr) {}
};

void print_forword(Node* head){
    Node* temp = head;
    while(temp){
      std::cout << temp->val << " ";
      temp = temp->next;
    }
    std::cout << "\n";
}

void print_backword(Node* tail){
    Node* temp = tail;
    while(temp){
      std::cout << temp->val << " ";
      temp = temp->prev;
    }
    std::cout << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    
    head->next = a; 
    
    a->prev = head;
    a->next = tail;
    
    tail->prev = a;

    print_forword(head);
    print_backword(tail);

    return 0;
}