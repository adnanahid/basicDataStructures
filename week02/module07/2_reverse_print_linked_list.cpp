//recursion basic
// #include <bits/stdc++.h>
// using namespace std;

// void rec(const vector <int> &arr, int idx, int n);

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n; cin >> n;

//     vector <int> arr(n);
//     for(auto &i: arr)
//         cin >> i;
    
//     rec(arr, 0, n);
//     cout << "\n";
        
//     return 0;
// }

// void rec(const vector <int> &arr, int idx, int n){
//     if(idx == n) return;
//     rec(arr, idx + 1, n);
//     cout << arr[idx] << " ";
// }

#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int val;
    Node *next;
    Node(int val) : val(val), next(nullptr) {}
};

void insert_at_tail(int val, Node* &head, Node* &tail);
void print_linkedlist(const Node* head);
void print_reversed_linkedlist(const Node* head);
void delete_linkedlist(Node* &head,  Node* &tail);


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node *head = nullptr, *tail = nullptr;

    int val;
    while(cin >> val){
        if(val == -1) break;
        insert_at_tail(val, head, tail);
    }
    print_linkedlist(head);
    print_reversed_linkedlist(head);
    cout << "\n";
    delete_linkedlist(head, tail);
    cout << head << "\n";
    
    return 0;
}

void insert_at_tail(int val, Node* &head, Node* &tail){
    Node* newNode = new Node(val);  

    if(!head){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_linkedlist(const Node* head){
    const Node* temp = head;
    while(temp){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << "\n";
}

void print_reversed_linkedlist(const Node* temp){
    if(!temp) return;

    print_reversed_linkedlist(temp->next);
    cout << temp->val << " ";
}

void delete_linkedlist(Node* &head, Node* &tail){
        while(head){
            Node* temp = head;
            head = head->next;
            delete temp;
    }
    tail = nullptr;
}