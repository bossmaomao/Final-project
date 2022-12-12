#include <iostream>
#include <iomanip>
using namespace std;
#include "sorting.h"
#include "student.h"
//#include "nodeBST.h"
#include "queue.h"
//#include "nodequeue.h"
//#include "nodeBST.h"
//#include "professor.h"
void print_menu();
void print_menu2();
void subjects_menu();
int main() {
  LL a;
  Queue b,c,d;
  STDBST e,f,g;
  string h;
 int choice,option,x,i,j,k,subject,l;
 cout<<"Hello! Welcome to our intelligent education program that can help you a lot easier in this education field."<<endl;
 cout<<"  "<<endl;
 cout<<"Our program suits both professors and students."<<endl;
 cout<<"  "<<endl;
 cout<<"We have the program for students to rating professors, and the program for professors to calculate and show the queue that who is accepted to study in their course based on students' scores."<<endl;
 cout<<"  "<<endl; 
 cout<<"Are you a student or a professor?"<<endl;
 cout<<"1.A student"<<endl;
 cout<<"2.A professor"<<endl;
 cin>>option;
 if(option==1){ 
 print_menu();
  cin>>choice;
  
while(choice!=3){  
  
  switch (choice){ 
  case 1: a.insert(); break;
  
  case 2: a.print_board(); break;


default: cout<<"invalid choice"<<endl;
  break;
}
  print_menu();
  cout<<"?";
  cin>>choice;
  if(choice==3) cout<<"End of the programme"<<endl;
}


  }
  i=0; 
 j=0;
 k=0;
  if(option==2){
  print_menu2();
  cin>>choice;
 
subject=0;
//while(choice!=3){  
  //print_menu2();
 // switch (choice){ 
   if(choice==1){
     while(choice==1){
       while(subject==0||subject>3){
          subjects_menu();
          cin>>subject;
          if(subject==1){ b.enqueue(); i++; }
          if(subject==2){ c.enqueue(); j++; }
          if(subject==3){ d.enqueue();  k++; }
       //else cout<<"invalid choice"<<endl;
         }
       subject=0;
       print_menu2();
       cout<<"?"<<endl;
        cin>>choice;
       while(choice<0||choice>3){
         cout<<"invalid choice"<<endl;
         print_menu2();
         cout<<"?"<<endl;
         cin>>choice;
       }
       }
     }
    if(choice==2){
    if(i<=5){
      while(i>0){
     x=b.dequeue(h);
     e.insert_node(x,h);   
    i--;      
   }
    }
    else{
  for(l=5;l>0;l--){
      x=b.dequeue(h);
     e.insert_node(x,h); 
  }
  
}

 if(j<=5){
      while(j>0){
     x=c.dequeue(h);
     f.insert_node(x,h);   
    j--;      
   }
    }
    else{
  for(l=5;l>0;l--){
      x=c.dequeue(h);
     f.insert_node(x,h); 
  }
  
}

    if(k<=5){
      while(k>0){
     x=d.dequeue(h);
     g.insert_node(x,h);   
    k--;      
   }
    }
    else{
  for(l=5;l>0;l--){
      x=d.dequeue(h);
     g.insert_node(x,h); 
  }
}
   cout<<"Science class:"<<endl<<endl;
   e.print_all();
   cout<<"Math class:"<<endl<<endl;   
   f.print_all();
   cout<<"English class:"<<endl<<endl;   
   g.print_all();

  }
    if(choice==3){ cout<<"End of the programme"<<endl;
    }
  }
  }
void print_menu(){

 cout<<"Choose the number in the menu"<<endl;
 cout<<"1.Rate teacher(s)"<<endl;
 cout<<"2.Show the leaderboard"<<endl;
 cout<<"3.End the programme"<<endl;
  
}

void print_menu2(){

cout<<"1.Sort the students' IDs"<<endl;
cout<<"2.Show final result"<<endl;
cout<<"3.End the programme"<<endl;
  
}
void subjects_menu(){

cout<<"1.Science"<<endl;
cout<<"2.Math"<<endl;
cout<<"3.English"<<endl;

  
}

