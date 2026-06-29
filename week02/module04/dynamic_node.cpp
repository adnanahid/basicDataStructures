//!  টাস্ক ১: ৪টি নোডের ডাইনামিক লিঙ্কড লিস্ট
// যা করতে হবে:
// ৪টি ডাইনামিক নোড তৈরি করবেন যাদের ভ্যালু হবে যথাক্রমে 5, 10, 15, এবং 20।
// নোডগুলোকে পরস্পরের সাথে লিঙ্ক করবেন।
// কোনো লুপ ব্যবহার না করে, শুধুমাত্র head->next->... এভাবে ম্যানুয়ালি চার নম্বর নোডের ভ্যালু (20) টার্মিনালে প্রিন্ট করবেন।

// #include <bits/stdc++.h>
// using namespace std;

// class Node {
//   public:
//     int val;
//     Node *next;
//     Node(int val) {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     Node *head = new Node(10);
//     Node *second = new Node(20);
//     Node *third = new Node(30);
//     Node *fourth = new Node(40);

//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = NULL;

//     cout << (*(*(*(*head).next).next).next).val << endl;

//     return 0;
// }

//!  টাস্ক ২: লুপ দিয়ে লিঙ্কড লিস্ট প্রিন্ট করা (Traversing)
// যা করতে হবে:
// ৩ বা ৪টি নোডের একটি ডাইনামিক লিঙ্কড লিস্ট তৈরি করুন।
// এবার একটি while লুপ ব্যবহার করে লিস্টের প্রথম নোড থেকে শেষ নোড পর্যন্ত সব ভ্যালু পর পর প্রিন্ট করুন।
// হিন্টস: লুপের জন্য একটি ট্র্যাকার পয়েন্টার নিতে পারেন, যেমন: Node* temp = head; এবং লুপের ভেতর প্রতিবার temp = temp->next; করে সামনে আগাতে পারেন, যতক্ষণ না temp == NULL হয়।

// #include <bits/stdc++.h>
// using namespace std;

// class Node {
//   public:
//     int val;
//     Node *next;
//     Node(int val) {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     Node *head = new Node(10);
//     Node *second = new Node(20);
//     Node *third = new Node(30);

//     head->next = second;
//     second->next = third;
//     third->next = NULL;

//     Node *temp = head;
//     while (temp != NULL) {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
//     cout << endl;

//     return 0;
// }

//!  টাস্ক 3: স্ট্যাটিক ও ডাইনামিক নোডের জোড়াতালি (Hybrid Challenge)
// যা করতে হবে:
// একটি স্ট্যাটিক নোড তৈরি করুন: Node a(50);
// একটি ডাইনামিক নোড তৈরি করুন: Node* b = new Node(100);
// এবার এদেরকে লিঙ্ক করুন! অর্থাৎ a এর পর যেন b থাকে।
// লিঙ্ক করার পর a অবজেক্টটি ব্যবহার করে b এর ভ্যালু (100) প্রিন্ট করুন। (মনে রাখবেন, একটি স্ট্যাটিক আর অন্যটি ডাইনামিক, তাই অপারেটর ব্যবহারের সময় সতর্ক থাকবেন!)

// #include <bits/stdc++.h>
// using namespace std;

// class Node {
//   public:
//     int val;
//     Node *next;
//     Node(int val) {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     Node a(50);
//     Node *b = new Node(100);

//     a.next = b;

//     cout << (*(a.next)).val << endl;

//     return 0;
// }

//! practice problem
// Module-4: Practice Problem

// 5   | 1000    7   | 1050   1   | 2000    14   | 1020    3   | 3000   11 | NULL
//    500           1000        1050           2000            ?          3000

// 1. Why do you think linked-list requires more memory than an array when storing the same number of elements?
// ans: linked list store its value and address of the next element and for that we need to use obj for each element of a linked list so thats why linked list takes more memory than array.

// 2. Write down Three Limitations of the array which can be solved by the use of Linked List.
// ans: so the limitations are:
//     1. we cant increase space for array but we can for linked list.
//     2.
//     3.

// 3.What is the value of Head ?
// ans: the value of head is 5.

// 4. What is the value of ? marked address location?
// ans: the value of ? address location is 1020.

// 5. What will be the value of Head->Next->Next->Value?
// ans: the value of Head->Next->Next->Value is 1.

// 6. What will be the value of Sum following pseudocode snippets?
// Sum = 0
// Temp = Head
// While ( Temp -> Next!= 1020){
// 	Sum += Temp-> value
// 	Temp = Temp -> Next
// }
// Sum -= Temp -> value;
// ans: the sum is -1.
