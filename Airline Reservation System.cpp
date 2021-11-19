 
 

//Trenton Smith ----- 11/17/2021 ---- 10:27pm. 

//Airline Reservation System C++ 

 
 

 
 

#include <string> 

#include <iostream> 

using namespace std; 

int main() 

{ 

int c, y[10]; 

int i, x; 

string name; 

 
 

 

//Output 

 

cout << "Welcome to X Airline Reservation System!\n"; 

for (x=0; x<10; x++) 

{ 

cout << "Please enter your name: "; 

cin>> name; 

 

cout << "Choose a class: "; 

cin >> c; 

 

// Class options. 

 

switch(c) 

{ 

case 1: 

cout << "First class"; 

cout << "Seats available are 1,2,3,4,5.\n"; 

do { 

    cout << "Pick a seat: "; 

    cin >> y[x]; 

    for (i=0; i<x; i++) if (y[x]==y[i])  

    {cout << "Seat taken. "; 

break;} 

  } while (i!=x); 

  	  if(y[x] <= 5) 

{ 

 
 

cout << "\n"; 

cout << "--------------------------\n"; 

 

cout << "Name: " << name; 

cout << "," << " Class: " << "First class"; 

cout<< ","  << " Seat no.: " << y[x]; 

cout << "--------------------------\n"; 

 
 

} 

else  

cout << "NO SEAT AVAILABLE!\n"; 

break; 

case 2:  

cout << "Economic class\n"; 

cout << "Seats available are 6,7,8,9,10.\n"; 

do { 

cout << "Pick a seat number: "; 

cin >> y[x]; 

for (i=0; i<x; i++) if (y[x]==y[i]) {cout << "Seat taken. "; 

break;}	 

  } while (i!=x); 

if(y[x] >= 6) 

{ 

cout << "\n"; 

cout << "--------------------------\n";	 

cout << "Name: " << name; 

cout << "Class: " << "Economic class"; 

cout << "Seat no.: " << y[x]; 

cout << "--------------------------\n"; 

} 

else  

cout << "NO SEAT AVAILABLE!\n"; 

break; 

default: 

break; 

} 

} 

 

return 0; 

} 

 
