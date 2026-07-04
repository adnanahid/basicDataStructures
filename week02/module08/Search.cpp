#include <bits/stdc++.h>
using namespace std;
typedef long long lld;


class Node{
    public:
        lld val;
        Node* next;
        Node(lld val){
            this->val = val;
            this->next = nullptr;
        }
};

void insterIntoList(Node* &head, Node* &tail, lld val);
void search(Node*head, lld x);
void clearList(Node* &head);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    
    while(t--){
        Node* head = nullptr;
        Node* tail = nullptr;
        lld val;
        while(cin >> val){
            if(val == -1) break;
            insterIntoList(head, tail, val);
        }
        lld x; cin >> x;
        search(head, x);
        clearList(head);
    }
    return 0;
}

void insterIntoList(Node* &head, Node* &tail, lld val){
    Node* newNode = new Node(val);
    if(head == nullptr){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void search(Node* head, lld x){
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