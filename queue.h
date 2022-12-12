#include "nodequeue.h"


class Queue {
	NodePtr headPtr,tailPtr;
	int size;
public:
   void enqueue();
   int dequeue(string &);
   Queue();
   ~Queue(); // dequeue all
};

 Queue::Queue(){
  size=0;
  headPtr=NULL;
  tailPtr=NULL;
}


void Queue::enqueue(){

  NodePtr new_node= new NODE();
  if(new_node){
    if(headPtr==NULL) 
      headPtr=new_node;
    else 
      tailPtr->set_next(new_node);
  
    tailPtr=new_node;
    ++size; 
  } 
}

int Queue::dequeue(string &name){
int value;
NodePtr t; 
t=headPtr;
  if(t!=NULL){
     value=t->get_value();
     name=t->get_name();
    headPtr=headPtr->get_next(); 
    if(headPtr==NULL) tailPtr=NULL;
    delete t;
    --size;
    return value;
  } 
  else {
    cout<<"Queue is empty"<<endl;
    return 0;
    }
  }
  
Queue::~Queue(){ //destructor
  int i;
  int n=size;
  string h;
  //while(size>0)
  for(i=0;i<n;i++){
    dequeue(h); 
  }
 
  cout<<"deleting queue"<<endl;
}



