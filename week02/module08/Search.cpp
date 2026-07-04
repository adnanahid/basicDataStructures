#include <bits/stdc++.h>
using namespace std;


class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = nullptr;
        }
};

void insterIntoList(Node* &head, Node* &tail, int val);
void search(Node*head, int x);
void clearList(Node* &head);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    
    while(t--){
        Node* head = nullptr;
        Node* tail = nullptr;
        int val;
        while(cin >> val){
            if(val == -1) break;
            insterIntoList(head, tail, val);
        }
        int x; cin >> x;
        search(head, x);
        clearList(head);
    }
    return 0;
}

void insterIntoList(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == nullptr){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void search(Node* head, int x){
    Node* temp = head;
    int index = 0;

    while(temp != nullptr){
        if(temp->val == x){
            cout << index << "\n"; return;
        } else{
            temp = temp->next; index++;
        }
        
    }
    cout << -1 << "\n";
}

void clearList(Node* &head) {
    Node* temp = head;
    while(temp != nullptr) {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
    head = nullptr;
}