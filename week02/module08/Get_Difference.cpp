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

void inserIntoList(Node* &head, Node* &tail, lld val);
lld findMax(Node* head);
lld findMin(Node* head);


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node* head = nullptr;
    Node* tail = nullptr;
    
    lld val;
    while(cin >> val){
        if(val == -1) break;
        inserIntoList(head, tail, val);
    }

    lld max = findMax(head);
    lld min = findMin(head);
    cout << max - min << "\n";

    return 0;
}

void inserIntoList(Node* &head, Node* &tail, lld val){
    Node* newNode = new Node(val);
    
    if(head == nullptr){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;

}

lld findMax(Node* head){
    lld max = head->val;
    Node* temp = head;
    while(temp != nullptr){
        if(temp->val > max) max = temp->val;
        temp = temp->next;
    }
    return max;
}

lld findMin(Node* head){
    lld min = head->val;
    Node* temp = head;
    while(temp != nullptr){
        if(min > temp->val) min = temp->val;
        temp = temp->next;
    }
    return min;
}