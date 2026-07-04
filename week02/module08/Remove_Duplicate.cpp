// #include <bits/stdc++.h>
// using namespace std;

// class Node {
//   public:
//     int val;
//     Node *next;
//     Node(int val) : val(val), next(nullptr) {}
// };

// void insterIntoList(Node* &head, Node* &tail, int val);
// void printList(Node* head);


// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     vector<int> freq(1001, 0);
    
//     Node* head = nullptr;
//     Node* tail = nullptr;
    
//     int val;
//     while(cin >> val){
//         if(val == -1) break;    
//         if(freq[val] >= 1) continue;
//         insterIntoList(head, tail, val);
//         freq[val]++;
//     }
//     printList(head);    

//     return 0;
// }


// void insterIntoList(Node* &head, Node* &tail, int val){
//     Node* newNode = new Node(val);
//     if(head == nullptr){
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     tail->next = newNode;
//     tail = newNode;
// }

// void printList(Node* head){
//     Node* temp = head;
//     while(temp != nullptr){
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
//     cout << "\n";
// }

#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int val;
    Node *next;
    Node(int val) : val(val), next(nullptr) {}
};

void insterIntoList(Node* &head, Node* &tail, int val);
void printList(Node* head);


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> freq(1000, -1);
    
    Node* head = nullptr;
    Node* tail = nullptr;
    
    int val;
    while(cin >> val){
        if(val == -1) break;
        if(freq[val] >= 0) continue;
        insterIntoList(head, tail, val);
        freq[val]++;
    }

    printList(head);    

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

void printList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << "\n";
}

#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int val;
    Node *next;
    Node(int val) : val(val), next(nullptr) {}
};

void insterIntoList(Node* &head, Node* &tail, int val);
void printList(Node* head);


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> freq(1001, 0);
    
    Node* head = nullptr;
    Node* tail = nullptr;
    
    int val;
    while(cin >> val){
        if(val == -1) break;
        if(freq[val] >= 1) continue;
        insterIntoList(head, tail, val);
        freq[val]++;
    }
    printList(head);    

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

void printList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << "\n";
}
