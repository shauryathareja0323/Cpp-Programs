#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }

};

class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
            newNode->next = head;
            head = newNode;
            return;
        }
    }

    void pop_front(){
        if(head == NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        else{
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
            tail->next = newNode;
            tail = newNode;
            return;
        }
    }

    void pop_back(){
        if(head == NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        else{
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;
            tail = temp;
            delete temp;
            return;
        }
    }
};

int main(){

    return 0;
}