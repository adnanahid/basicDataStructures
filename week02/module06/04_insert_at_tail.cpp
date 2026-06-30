#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};


void insertAtTail(int val, Node* &head) {
    Node* newNode = new Node(val);
    
    if (head == NULL) {
        head = newNode;
        return;
    }
    
    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    
    temp->next = newNode;    
    
};

void prinLinkedList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node* head = new Node(10);
    Node* a = new Node(11);
    Node* b = new Node(12);

    head->next = a;
    a->next = b;

    insertAtTail(13, head);
    prinLinkedList(head);

    return 0;
}