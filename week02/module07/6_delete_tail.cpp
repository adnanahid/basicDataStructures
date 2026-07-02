#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int val;
    Node *next;
    Node(int val) : val(val), next(nullptr) {}
};

void insert_into_list(Node* &head, Node* &tail, int val);
void delete_tail(Node *&head, Node *&tail);
void print_list(const Node* head);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Node *head = nullptr, *tail = nullptr;
    
    int val;
    while(cin >> val){
        if(val < 0) break;
        insert_into_list(head, tail, val);
    }
    delete_tail(head, tail);
    print_list(head);
    return 0;
}

void insert_into_list(Node* &head, Node* &tail, int val){
    Node *newNode = new Node(val);
    if(!head){
        head = newNode;
        tail = newNode;
        return;
    }
    
    tail->next = newNode;
    tail = newNode;
}

void delete_tail(Node *&head, Node *&tail){
    Node *currentNode = head;

    while(currentNode->next != tail){
        currentNode = currentNode->next;
    }
    currentNode->next = nullptr;
    delete tail;
    tail = currentNode;
}

void print_list(const Node* head){
    if(!head) return;
    cout << head->val<< " ";
    print_list(head->next);
}