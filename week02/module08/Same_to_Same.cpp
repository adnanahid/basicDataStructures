#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int val;
    Node *next;
    Node(int val) : val(val), next(nullptr) {}
};

void insterIntoList(Node* &head, Node* &tail, int val);
void checkSameOrNot(Node* head1, int len1, Node* head2, int len2);
void clearList(Node* &head);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node* head1 = nullptr;
    Node* tail1 = nullptr;
    int val1;
    int len1 = 0;
    while(cin >> val1){
        if(val1 == -1) break;
        insterIntoList(head1, tail1, val1);
        len1++;
    }

    Node* head2 = nullptr;
    Node* tail2 = nullptr;
    int val2;
    int len2 = 0;
    while(cin >> val2){
        if(val2 == -1) break;
        insterIntoList(head2, tail2, val2);
        len2++;
    }

    checkSameOrNot(head1, len1, head2, len2);

    clearList(head1);
    clearList(head2);

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

void checkSameOrNot(Node* head1, int len1, Node* head2, int len2){
    if(len1 != len2){
        cout << "NO" << "\n";
        return;
    }
    Node* temp1 = head1;
    Node* temp2 = head2;
    bool isSame = true;
    while(temp1 != nullptr){
        if(temp1->val != temp2->val){
            isSame = false;
            break;
        } else{
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    if(isSame) cout << "YES" << "\n";
    else cout << "NO" << "\n"; 
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