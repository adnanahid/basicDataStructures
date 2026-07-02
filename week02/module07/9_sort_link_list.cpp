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
void sort_linked_list(Node* head);


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

    sort_linked_list(head);
    print_list(head);

    return 0;
}

void insert_into_list(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(!head) head = newNode, tail = newNode;

    tail->next = newNode;
    tail = newNode;
}

void sort_linked_list(Node* head){
    for(Node* i = head; i->next != nullptr; i = i->next)
        for(Node* j = i->next; j != nullptr; j = j->next)
            if(i->val > j->val) swap(i->val, j->val);
}

void print_list(const Node* head){
    if(!head) return;
    cout << head->val<< " ";
    print_list(head->next);
}

