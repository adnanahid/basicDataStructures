#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int val;
    Node *next;
    Node(int val) : val(val), next(nullptr) {}
};

void insert_at_tail(int val, Node* &head, Node* &tail);
void print_linkedlist(const Node* head);
void delete_linkedlist(Node* &head);


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node *head = nullptr, *tail = nullptr;

    int val;
    while(cin >> val){
        if(val == -1) break;
        insert_at_tail(val, head, tail);
    }
    cout << head << "\n";
    print_linkedlist(head);
    delete_linkedlist(head);
    cout << head << "\n";
    
    return 0;
}

void insert_at_tail(int val, Node* &head, Node* &tail){
    Node* newNode = new Node(val);  

    if(head == nullptr){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_linkedlist(const Node* head){
    const Node* temp = head;
    while(temp != nullptr){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << "\n";
}

void delete_linkedlist(Node* &head){
    Node* current = head;
        while(current != nullptr){
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
    }
    head = nullptr;
}