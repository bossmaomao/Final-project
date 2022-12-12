#include "teacher.h"
class LL{

private: teacher* hol;
int size;

public:
void insert();
LL();
void print_board();
~LL();
};

 LL::LL(){

hol=NULL;
size=0;

  
}

void LL::insert(){  
teacher *newptr;
teacher *current;
teacher *previous;
newptr = new teacher();
   if ( newptr != NULL ) {
      previous = NULL;
      current = hol;
      // loop to find the correct location in the list       
      while ( current != NULL && newptr->get_rating() < current->get_rating() ) {
         previous = current;               
         current = current->get_next(); 
      }               

      if ( previous == NULL ) { 
         newptr->set_next(hol);
       if(current!=NULL) {current->set_prev(newptr);}
         hol = newptr;//if(current)
        
      } 
      else { 
         previous->set_next(newptr);
         newptr->set_prev(previous);

         newptr->set_next(current);
      if(current!=NULL)current->set_prev(newptr);
         
      } // end else
    
     ++size;
   } 
   else {
      cout<<"teacher's rating not inserted"<<endl;
        
     }
  }
        
  void LL::print_board(){
     teacher* current=hol;
        if ( size==0) {
      cout<< " Leaderboard is empty."<<endl;
   } // end if
   else { 
       cout<< " The list is:" <<endl;
    
   
     int i;
     for(i=0;i<size;i++){
           cout<<i+1<<".";
       current->print_all();
           // cout<<"  ->";
         current = current->get_next();   
      } 
     cout<<endl;
     
   } 


      }

LL::~LL(){

cout<<"deleting all teachers"<<endl;
  teacher* t;
  t=hol;
  int i;
 for(i=0;i<size;i++){
      hol=hol->get_next();
      delete t;
      t=hol;
  } 
}




  
  

  
  
  

  
