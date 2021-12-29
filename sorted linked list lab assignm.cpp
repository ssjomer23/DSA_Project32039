//ID 32039 || Omer Masood****
#include <iostream>
#include <stdlib.h>
using namespace std;
   
struct node{  
    int data;  
    struct node *next;  
};      
struct node *head, *tail = NULL;  
void nodeInsertion(int data) {  
   
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    newNode->next = NULL;  
    if(head == NULL) {  
        head = newNode;  
        tail = newNode;  
    }  
    else {  
        tail->next = newNode;  
       
        tail = newNode;  
    }  
}  
    void SortAlgo() {  
        //Node current will point to head  
        struct node *current = head, *index = NULL;  
        int temp;  
        if(head == NULL) {  
            return;  
        }  
        else {  
            while(current != NULL) {  
                index = current->next;  
                  
                while(index != NULL) {  
                    if(current->data > index->data) {  
                        temp = current->data;  
                        current->data = index->data;  
                        index->data = temp;  
                    }  
                    index = index->next;  
                }  
                current = current->next;  
            }      
        }  
    }  
void display() {  
    //Node current will point to head  
    struct node *current = head;  
    if(head == NULL) {  
        cout<< "EMPTYY!!! "<<endl;  
        return;  
    }  
    while(current != NULL) {  
        cout<<" "<<current->data;  
        current = current->next;  
    }  
    cout<<endl; 
}  
      
int main()  
{  
    nodeInsertion(239);  
    nodeInsertion(10);  
    nodeInsertion(25);  
    nodeInsertion(3000);  
    nodeInsertion(500);  
    nodeInsertion(1000);
      
    cout<<"Before Sorting:"<<endl;  
    display();  
      
    SortAlgo();  
      
   cout<< "After applying Sorting: " <<endl;
    display();  
          
    return 0;  
}
