// 1-> Convert arr to lnklist;;;;;

// #include <bits/stdc++.h>
// using namespace std;
// // base method for node initialization;//hope the spelling the correct;
// struct Node {
//     int data;
//     Node *nextptr;

//     Node(int data1) : data(data1), nextptr(nullptr) {};
// };
// // method for creating the head
// Node *convert_arr_to_lnklist(int arr[], int size){
//     Node *head = new Node(arr[0]);
//     Node *current = head;//used for traversing across the arr;

//     for(int i = 1; i < size; i++){
//         current->nextptr = new Node(arr[i]);
//         current = current->nextptr;
        
//     }
//     return head;
// }
// //method for printing the ele in lnklist;
// void Print_ele(Node *call_arr_to_lnk){
//     Node *current = call_arr_to_lnk;
//     while(current != nullptr){
//         cout << current->data << "->";
//         current = current->nextptr;
//     }
// }

// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int size = 5;

//     Node *call_arr_to_lnk = convert_arr_to_lnklist(arr, size);

//     Print_ele(call_arr_to_lnk);
//     return 0;
// }

// 2 -> length of the lnklist

// #include <bits/stdc++.h>
// using namespace std;
// // initialize the node 
// struct Node{
//     int data;
//     Node *next;

//     Node(int data1) : data(data1), next(nullptr){}
// };

// // method the convert the arr to lnklist;

// Node *arr_to_lnklist(int arr[], int size){
//     Node *head = new Node(arr[0]);
//     Node *current = head;

//     for(int i = 1; i < size; i++){
//         current->next = new Node(arr[i]);
//         current = current->next;
//     }
//     return head;
// }

// // method for counting the length of th lnklist;;

// void count(Node *head){
//     Node *current = head;
//     int count = 0;
//     while(current != nullptr){
//         count += 1;
//         cout << current->data << "->";
//         current = current->next;
//     }
//     cout << "nullptr" << endl;
//     cout << "count: " << count;
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int size = 5;

//     Node *head = arr_to_lnklist(arr, size);
//     count(head);
//     return 0;
// }

// 3-> Search an element in lnklist

#include <bits/stdc++.h>
using namespace std;
// base code to initialize the node keyword as a datatype
struct Node{
    int data;
    Node *next;

    Node(int data1) : data(data1), next(nullptr) {}
};

// convert arr to lnklist

Node *arr_to_lnklist(int arr[], int size){
    Node *head = new Node(arr[0]);
    Node *current = head;

    for(int i = 1; i < size; i++){
        current->next = new Node (arr[i]);
        current = current->next; 
    }

    return head;
}

//find the key;;

bool find_key(Node *head, int key){
    Node *current = head;
    while(current != nullptr){
        if(current->data == key){
            return true;
        }
        current = current->next;
    }
        else return false;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size =5;

    Node *head = arr_to_lnklist(arr, size);
    find_key(head);
    return 0;
}