#ifndef node_h
#define  node_h

class NODE{
	 int id_num;
   string st_name;
	NODE *nextPtr;
public:
	NODE();
	~NODE();
  int get_value();
 string get_name();
	void set_next(NODE *);
	NODE* get_next();
};
typedef NODE* NodePtr;

NODE::NODE(){
  cout<<"What is this student's name??"<<endl;
  cin>>st_name;
  cout<<"What is this student's id number??"<<endl;
  cin>>id_num;
	//data=x;
	nextPtr=NULL;
}
int NODE::get_value(){
	return id_num;

}

string NODE::get_name(){
	return st_name;

}


NODE* NODE::get_next(){
	return nextPtr;

}

void NODE::set_next(NODE *t){
	 nextPtr=t;

}

NODE::~NODE(){
	 cout<<"deleting " <<st_name<<endl;
}


#endif