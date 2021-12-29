#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main() {

srand (time(NULL)); //Random

int computer = rand() % 3 + 1; //RANDOM MOVES FOR COMPUTER 

int user = 0;
 
 
string rock = "1. ROCK\n";
string paper = "2. PAPER\n";
string scissors = "3. SCISSORS\n";
  

cout<<"WELCOME TO ROCK PAPER & SCISSORS!" "ID: 32039 Name: Omer Masood"<<endl;

cout << rock;
cout << paper;
cout << scissors;

cout << "Pick one option:";
cin >> user;

  
cout << "\nYou  pick: ";
  
//USER 
  switch(user){
    case 1 :
    cout << rock;
    	break;
    case 2 :
    cout << paper;
    	break;
    case 3 :
     cout << scissors;
    	break;
    default :
    	cout << "Invalid!\n";
  }
  
  //COMPUTER
cout << "Opponent chose ";
    switch(computer){
    case 1 :
    cout << rock;
    	break;
    case 2 :
    cout << paper;
    	break;
    case 3 :
    cout << scissors;
    	break;
    default :
    cout << "Invalid Option\n";
  }
  
  
  //Battle Outcome
  if(user == computer){
    cout << "Tied\n";
  }
  else if(user == 1 && computer == 3){
    cout << "You Won!\n";
  }
  else if(user == 3 && computer == 2){
    cout << "You Won!\n";
  }
  else if(user == 2 && computer == 1){
    cout << "You Won!\n";
  }
  else{
    cout << "Computer Won!\n";
  }
  
}
