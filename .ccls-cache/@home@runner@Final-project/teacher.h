#include <iostream>
#include <iomanip>
using namespace std;
class teacher{
   private: string name;
            string subject;
            float rating;
           teacher* next;
           teacher* prev;
   public: 
      teacher();
		  void print_name();
       float get_rating(){ return rating;}
       teacher* get_next(){return next;}
       teacher* get_prev(){return prev;}
       void set_next(teacher*);
       void set_prev(teacher*);
       void print_all();
       ~teacher();
       
};

teacher::teacher(){
  cout<<"What is the professor's name??"<<endl;
  cin>>name;
  cout<<"What is the subject that this professor teaches??"<<endl;
  cin>>subject;
  cout<<"Give the rating for this professor from 1-10"<<endl;
  cin>>rating;
}

void teacher::print_all(){
 		cout<<"---Name:"<<name<<"---"<<endl;
   cout<<"Subject:"<<subject<<endl;
  cout<<"Rating:"<<rating<<endl;
}

void teacher::print_name(){
 		cout<<"Name:"<<name<<endl;
}

void teacher::set_next(teacher* t){

 next=t;
  
}
void teacher::set_prev(teacher* t){

  prev=t;
}

teacher::~teacher(){
cout<<"teacher "<<name<<" deleted"<<endl;  
}