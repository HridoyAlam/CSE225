#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;

};
Node* head;

void InsertPosition(int value, int pos){
    Node* temp = new Node();

    temp->data = value;
    temp->next = NULL;

    if(pos == 1){
        temp->next = head;
        head = temp;
        return;
    }
    Node* location ;
    location = head;
    for(int i =0; i<pos-2; i++){
        location = location->next;
    }
    temp->next = location->next;
    location->next = temp;
}

void DeleteAtFirst(){

    Node* location = head;
    head = location->next;
    delete location;

}
void DeleteAtLast(){

    Node* location = head;
    Node* nextNode = location->next;

    if(location->next == NULL){
        delete location;
        return;
    }
    while(nextNode != NULL){
        location = nextNode;
        nextNode = nextNode->next;
    }

    delete location;
    location->next = NULL;
}
void DeleteAtPosition(int n){
    Node* temp = head;
    if(n == 1){
        head = temp->next;
        delete temp;
    }
    else{
        for(int i =0;i<n-2;i++){
            temp = temp->next;
        }
        Node* temp2 = new Node();
        temp2 = temp->next;
        temp->next = temp2->next;

        delete temp2;
    }
}
void DeleteValue(int value){
    Node* pre = NULL;
    Node* location = head;

    if(location->data == value){
        head = head->next;
        delete location;
        return;
    }

    while(location != NULL && location->data != value){
        pre = location;
        location = location->next;
    }
    if(location == NULL){
        cout<<"Value not in the list"<<endl;
        return;
    }
    pre->next = location->next;
    delete location;

}
void Print(){

    Node* location = head;
    while(location!=NULL){
        cout<<location->data<<"\t";
        location = location->next;
    }
    cout<<endl;

}

int main(){

    head = NULL;
    InsertPosition(1,1);
    InsertPosition(8,2);
    InsertPosition(5,3);
    InsertPosition(1,4);
    InsertPosition(2,2);
    Print();
    DeleteAtFirst();
    Print();
    InsertPosition(20,2);
    Print();
    DeleteAtPosition(2);
    Print();
    DeleteValue(8);
    Print();


    DeleteAtLast();
    Print();

return 0;
}
