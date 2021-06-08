#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* pre;
};
Node* head;

void insertAtHead(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    temp->pre = NULL;

    if(head == NULL){
        head = temp;
        return;
    }
    head->pre = temp;
    temp->next = head;
    head = temp;
}
void Print(){

    Node* location = head;
    while(location != NULL){
        cout<<location->data<<"\t";
        location = location->next;
    }
    cout<<endl;

}
void reversePrint(){
    Node* location = head;

    while(location->next != NULL){
        location = location->next;
    }
    while(location != NULL){
        cout<<location->data<<"\t";
        location = location->pre;
    }
    cout<<endl;
}
int main(){
    head = NULL;

    insertAtHead(4);
    Print();
    insertAtHead(8);
    Print();
    reversePrint();

return 0;
}
