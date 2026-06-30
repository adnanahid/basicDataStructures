#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtTail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }    

    tail->next = newNode;
    tail = newNode; 

};


void printLinkedList(Node* head) {
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
    
    Node* head = NULL;
    Node* tail = NULL;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        insertAtTail(head, tail, x);

    }

    printLinkedList(head);

    return 0;
}