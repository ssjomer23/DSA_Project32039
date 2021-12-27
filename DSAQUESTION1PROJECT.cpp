//QUESTION 1 DSA PROJECT
#include <iostream>
#include <fstream>
#include<cstdlib>
#include<ctime>
using namespace std;
//USING INSERTION SORT FUNCTION HERE
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
//PRINTING FUNCTION
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
//SWAP FUNCTION FOR BUBBLE SORT
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 //BUBBLE SORT FUNCTION
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)    
     
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
}
 //SELECTION SORT FUNCTION
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
 
        swap(&arr[min_idx], &arr[i]);
    }
}

//LINKED LIST NODE CODE
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
//DISPLAYING AND INSERTING LINKED LIST VALUES
void display() {
   insert(5);
   insert(4);
   insert(3);
   insert(2);
   insert(1);
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   
   }
}
//MAIN FUNCTION
int main()
{
     int arr[] = { 100,600,40,20,10 }; //INITIALIZING ARRAY FOR SORTING ALGOS
    int n = sizeof(arr) / sizeof(arr[0]);
    int choice; //CHOICE FOR SWITCH STATEMENT
    do{ 
        cout<<"                   "<<endl;
        cout<<"Omer Masood || 32039"<<endl;
        cout<<"                   "<<endl;
        cout<<"     -------------              "<<endl;
    cout<<"PRESS 1 for INSERTION SORT"<<endl;//CHOICES
    cout<<"PRESS 2 for BUBBLE SORT"<<endl;
    cout<<"PRESS 3 for SELECTION SORT"<<endl;
    cout<<"PRESS 4 for Linked List"<<endl;
    cout<<"PRESS 5 to create a .txt file with sorted arrays"<<endl;
    cout<<"Press 6 to exit.";
    cin>>choice;
    
        
    
    switch(choice) {
         case 1 ://INSERTION SORT FOR CASE 1
         cout<<"You chose Insertion Sort"<<endl;
          insertionSort(arr, n);
    printArray(arr, n);
         break;
         case 2 :
         cout<<"YOU CHOSE BUBBLE SORT!"<<endl; // BUBBLE SORT FOR CASE 2
             bubbleSort(arr, n);
             printArray(arr, n);
         break;
         case 3:
         cout<<"YOU CHOSE SELECTION SORT!"<<endl; //SELECTION SORT FOR CASE 3
             selectionSort(arr, n);
             printArray(arr, n);
             break;
             case 4:
             cout<<"You chose Linked List:"<<endl; //LINKED LIST ON CASE 4
             display(); //DISPLAYING LINKED LIST FROM CALLING FUNCTION
             case 5: //CASE 5 IS USED FOR FILE HANDLING, AND WRITING THE SORTED ALGO ARRAY TO THE .TXT FILE
             {
             ofstream MyFile("Numbers.txt");
             for(int i=0; i<n;i++)
             {
                 MyFile<<arr[i]<<" "<<endl;
             }
             }
            break;
            case 6:
            cout<<"EXIT!";
            break;
            default:
            if(choice<0||choice>6)
            {
            cout<<"Your selection must be between 1-6"<<endl;
            }
           
    }
    
    } while (choice !=6);
   
 
    return 0;

}
 