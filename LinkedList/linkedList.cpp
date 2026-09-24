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
            return;
        }
    }

    void print_ll(){
        if(head == NULL){
            cout<<"NULL"<<endl;
        }
        else{
            Node* temp = head;
            while(temp->next != NULL){
                cout<<temp->data<<"->";
                temp = temp->next;
            }
            cout<<temp->data<<"->";
            cout<<"NULL"<<endl;
            return;
        }
    }

    void insert(int val, int pos){
        Node* newNode = new Node(val);

        if(pos<0){
            cout<<"Not a valid position"<<endl;
            return;
        }
        
        else if(pos == 0){
            push_front(val);
            return;
        }

        else{
            int cur_pos = 0;
            Node* tempNode = head;

            while(cur_pos<pos-1){
                if(tempNode->next == NULL){
                    cout<<"Invalid position"<<endl;
                }
                tempNode = tempNode->next;
                cur_pos++;
            }

            newNode->next = tempNode->next;
            tempNode->next = newNode;
            
            return;
        }
    }

    void search(int val){
        if(head == NULL){
            cout<<"List is empty"<<endl;
            return;
        }

        Node* temp = head;

        while(temp->next != NULL && temp->data != val){
            temp = temp->next;
        }

        if(temp->next == NULL && temp->data == val){
            cout<<"Exists"<<endl;
        }
        else if(temp->next == NULL && temp->data != val){
            cout<<"Does Not Exist"<<endl;
        }
        else if(temp->next != NULL && temp->data == val){
            cout<<"Exists"<<endl;
        }
        return;
    }
};



int main(){
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.print_ll();

    ll.pop_front();
    ll.push_back(1);
    ll.insert(10,2);
    ll.push_back(3);

    ll.search(2);
    
    ll.print_ll();

    ll.pop_back();

    ll.print_ll();

    ll.pop_back();
    ll.pop_back();
    ll.pop_back();

    ll.search(10);

    ll.print_ll();

    ll.pop_front();

    ll.search(2);

    ll.print_ll();

    return 0;
}
