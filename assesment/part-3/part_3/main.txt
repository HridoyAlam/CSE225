#include<bits/stdc++.h>
#include <iostream>
using namespace std;
struct Node{

    int data;
    Node* next;
    Node* pre;

};

Node* head;

void insertAtFirst(int item){

    Node* temp = new Node();
    temp->data = item;
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

void insertAtLast(int item){
    Node* temp = new Node();
    temp->data = item;
    temp->next = NULL;
    temp->pre = NULL;

    if(head == NULL){
        head = temp;
        return;
    }
    Node* location = head;
    while(location->next!=NULL){
        location = location->next;
    }
    location->next = temp;
    temp->pre = location;
    return;

}
void inserAtPostition(int p,int item){
    Node* temp = new Node();
    temp->data = item;
    temp->next = NULL;
    temp->pre = NULL;

    if(p==1){
        if(head==NULL){
            head = temp;
        }
        else{
            head->pre = temp;
            temp->next = head;
            head = temp;
        }
    }
    else{
        Node* location = head;
        for(int i=0;i<p-2;i++){
            location = location->next;
        }

        temp->next = location->next;
        temp->pre = location;
        location->next = temp;
    }

}
void deleteFrist(){
    Node* location = head;
    head = location->next;
    delete location;
    head->pre = NULL;
}
void deleteLast(){
    Node* location = head;
    Node* temp;
    if(location->next == NULL){
        delete location;
        return;
    }
    while(location->next != NULL){
        location = location->next;
    }

    temp = location->pre;
    temp->next = NULL;
    delete location;
}
void deletePosition(int p){
    Node* location = head;
    Node* temp = NULL;
    if( p==1){
        deleteFrist();
    }
    while(p>1){
        location = location->next;
        p--;
    }
    if(location->next == NULL){
        deleteLast();
        //return;
    }
    else{
        temp = location->pre;
        temp->next=location->next;
        location->next->pre = temp;
        delete location;
        location = NULL;
    }
}
void deleteValue(int value){
    Node* location = head;
    Node* temp = NULL;
    if(location->data == value){
        deleteFrist();
        return;
    }
    while(location != NULL && location->data !=value){
        location = location->next;
    }
    temp = location->pre;
    temp->next=location->next;
    location->next->pre = temp;
    delete location;
    location = NULL;
}
void Print(){
    Node* location = head;
    while(location!=NULL){
        cout<<location->data<<" \t";
        location = location->next;
    }
    cout<<endl;
}
void PrintReverse(){

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
int main()
{
    head = NULL;
    Print();
    insertAtFirst(4);
    Print();
    insertAtFirst(5);
    Print();
    PrintReverse();
    insertAtLast(6);
    Print();
    PrintReverse();
    insertAtLast(10);
    Print();
    PrintReverse();
    inserAtPostition(1,1);
    Print();
    PrintReverse();
    inserAtPostition(3,3);
    Print();

    inserAtPostition(4,4);
    Print();

    insertAtLast(20);
    Print();
    deleteFrist();
    Print();
    deleteLast();
    Print();
    deleteLast();
    Print();
    deletePosition(2);
    Print();
    deleteValue(5);
    Print();
    deleteValue(4);
    Print();
    return 0;
}
