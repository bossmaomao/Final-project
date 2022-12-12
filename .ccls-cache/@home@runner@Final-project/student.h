#include "nodeBST.h"
class STDBST {
	int size;
	TreeNodePtr rootPtr;

public:
    STDBST();
    ~STDBST();
   
   void insert_node(int,string);
   void inOrder(TreeNodePtr);
   void print_all();
   void kill(TreeNodePtr);
};


STDBST::STDBST(){
  rootPtr=NULL;
  size=0;
}

void STDBST::insert_node(int value,string name){
  int inserted=0;
  TreeNodePtr new_node,t ;
  new_node=new TreeNode(value,name);
  if(new_node){
    /*First Node*/
    if(!rootPtr) //if(size>0)
     rootPtr=new_node;
    else {
     t=rootPtr;
     while(!inserted){
       if(t->get_value()>=value){
        /* insert to the left*/
         if(t->move_left()==NULL){
          t->set_left(new_node);
           inserted=1;
           }
           else t=t->move_left();
    }
  else{
        if(t->move_right()==NULL){
          t->set_right(new_node);
           inserted=1;
           }
           else t=t->move_right();
        }
      }
    }
    size++;
  }
}

/*void STDBST::inOrder(TreeNodePtr treePtr){ 
 
   if(treePtr){
   // if tree is not empty, then traverse
   inOrder( treePtr->move_left() ); //Recursion to the left
        
     cout<<setw(3)<<treePtr->get_name()<<":"<<treePtr->get_value();//print the value 
    
      inOrder( treePtr->move_right()); //Recursion to the right
   } // end if                          
} // end function */

void STDBST::inOrder(TreeNodePtr treePtr){
    if(treePtr){
      inOrder(treePtr->move_left());
    
      cout<<setw(3)<<treePtr->get_name()<<":"<<treePtr->get_value()<<endl;

      inOrder(treePtr->move_right());
      //cout<<setw(3)<<treePtr-> get_value();
      }
}

void STDBST::print_all(){

inOrder(rootPtr);cout<<endl;

  
}

STDBST::~STDBST(){
cout<<"Kill BST"<<endl; 
  kill(rootPtr);
}

void STDBST::kill(TreeNodePtr treePtr){
if(treePtr){
     kill( treePtr->move_left() ); 
     kill( treePtr->move_right()); 
     delete (treePtr);
   }                        

}

