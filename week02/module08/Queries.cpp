#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int val;
    Node *next;
    Node(int val) : val(val), next(nullptr) {}
};

void printList(Node* head);
void insertAtHead(Node* &head, Node* &tail, int v);
void insertAtTail(Node* &head, Node* &tail, int v);
void deleteOne(Node* &head, Node* &tail, int idx);


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Node* head = nullptr;
    Node* tail = nullptr;
    int t; cin >> t;
    while(t--){
        int x, v; cin >> x >> v;
        if(x == 0) insertAtHead(head, tail, v);
        if(x == 1) insertAtTail(head, tail, v);
        if(x == 2) deleteOne(head, tail, v);
        printList(head);
    }   

    return 0;
}


void insertAtHead(Node* &head, Node* &tail, int v){
    Node* newNode = new Node(v);
    if(head == nullptr){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &head, Node* &tail, int v){
    Node* newNode = new Node(v);
    if(head == nullptr){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void deleteOne(Node* &head, Node* &tail, int idx){
    if (head == nullptr) return;

    if(idx == 0){
        Node* deleteNode = head;
        head = deleteNode->next;    
        delete deleteNode;
        if(head == nullptr) tail = nullptr;
        return;
    }
    
    Node* currentNode = head;
    for(int i = 1; i < idx && currentNode != nullptr; i++)
        currentNode = currentNode->next;

    if(currentNode == nullptr || currentNode->next == nullptr)
        return;
        
    Node* deleteNode = currentNode->next;
    if(tail == deleteNode) tail = currentNode;
    currentNode->next = deleteNode->next;
    delete deleteNode;

}

void printList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << "\n";
}