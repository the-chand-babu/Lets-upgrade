#include<iostream>
using namespace std;

//create Node type class
class Node{
    public :
    int data;
    Node *add;

    //costructor called..
    Node(int data){
        this ->data = data;
        this ->add = NULL;
    }
};

//insert in at Head always..

void inserATHead(Node * &Head,int data){
        //new Node create..
        Node *temp = new Node(data);
        temp->add=Head;
        Head=temp;
}

//print function ..
void print (Node* &Head){
    Node * temp = Head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->add;
    }cout<<endl<<endl;
}

//insert AT TAil..
void insertATTail(Node * &Tail, int data){
        Node *temp = new Node(data);
        Tail->add=temp;
        Tail=temp;
}

//insert AT Middle Position ..

void inserATMiddle(Node * &Tail,Node* &Head, int position, int data){
    
    //insert AT first Position..
    if(position==1){
        inserATHead(Head,data);
        return;
    }
    //middle part..
    Node *temp1= Head;
    int cnt = 1;
    while(cnt < position-1){
        cnt++;
        temp1=temp1->add;
            
    }
    //insert AT last Position..
    if(temp1->add==NULL){
        insertATTail(Tail,data);
        return;
    }
    //new node create..
    Node *temp = new Node (data);
    temp->add=temp1->add;
    temp1->add=temp;
}

int main (){
    Node *Node1= new Node (10);
    Node *Head=Node1;

    //insert at tail position..

    Node *Tail=Node1;
    insertATTail(Tail,18);
    insertATTail(Tail,12);
    insertATTail(Tail,14);
    insertATTail(Tail,16);
    print(Head);
    

    inserATMiddle(Tail,Head,6,22);
    cout<<"Head "<<Head->data<<endl;
    cout<<"Tail "<<Tail->data<<endl;
    print(Head);



//insert at Head posotion..
    // inserATHead(Head,12);
    // inserATHead(Head,14);
    // inserATHead(Head,16);
    // print(Head);


}