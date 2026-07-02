#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int val;
    Node *next;
    Node(int val) : val(val), next(nullptr) {}
};

void insert_into_list(Node* &head, Node* &tail, int val);
void print_list(const Node* head);
void delete_at_any_pos(Node* &head, int idx);


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node* head = nullptr;  
    Node* tail = nullptr;
    
    int val;
    while(cin >> val){
        if(val < 0) break;
        insert_into_list(head, tail, val);
    }

    delete_at_any_pos(head, 4);
    delete_at_any_pos(head, 6);
    print_list(head);


    return 0;
}

void insert_into_list(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(!head) head = newNode, tail = newNode;

    tail->next = newNode;
    tail = newNode;
}

void print_list(const Node* head){
    if(!head) return;
    cout << head->val<< " ";
    print_list(head->next);
}

void delete_at_any_pos(Node* &head, int idx){
    if (idx == 0){
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }

    Node* currentNode = head;
    for(int i = 1; i < idx; i++){
        if(currentNode == nullptr) return;
        currentNode = currentNode->next;
    }
    if(currentNode == nullptr || currentNode->next == nullptr)
        return;
    Node* deleteNode = currentNode->next;
    currentNode->next = deleteNode->next;
    delete deleteNode;
    
}