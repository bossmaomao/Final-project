class TreeNode {                               
   TreeNode *leftPtr; // pointer to left subtree 
   int data; // node value                      
   TreeNode *rightPtr; // pointer to right subtree
   string name;
public:
        TreeNode(int,string); 
        ~TreeNode();
        void set_left(TreeNode* t){ leftPtr=t;}
        void set_right(TreeNode* t){ rightPtr=t;}
        TreeNode* move_right(){ return rightPtr;}
        TreeNode* move_left(){ return leftPtr;}
        int get_value() { return data;}
        string get_name() { return name;}
}; // end structure treeNode 
typedef TreeNode * TreeNodePtr; 

// synonym for TreeNode*
TreeNode::TreeNode(int x,string y){
 data=x;
 name=y;
 leftPtr=NULL;
 rightPtr=NULL;
  
}


TreeNode::~TreeNode(){
  cout<<"Deleting "<<data<<endl;
}



