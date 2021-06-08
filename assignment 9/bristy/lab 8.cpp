#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head;

void InsertAtLast(int item){
    Node* temp;
    temp = new Node();

    temp->data = item;
    temp->next = NULL;

    if(head == NULL){
        head = temp;
    }
    else{
        Node *location = head;
        while(location->next!=NULL){
            location = location->next;
        }
        location->next = temp;
    }
}
void InsertAtFirst(int item){
    Node* temp = new Node();
    temp->data = item;
    temp->next = NULL;

    Node *location = head;
    if(head != NULL){
        temp->next= head;
    }

    head = temp;

}

void PrintList(){
    Node *location;
    location = head;
    while(location != NULL){
        cout<<location->data<<"\t";
        location = location->next;
    }
    cout<<endl;
}

int main(){
    head = NULL;
    InsertAtFirst(5);
    InsertAtFirst(6);
    InsertAtFirst(7);
    InsertAtFirst(8);
    InsertAtLast(9);

    PrintList();
return 0;
}
