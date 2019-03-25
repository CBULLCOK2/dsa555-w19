template <typename T>
class BST{

	struct Node{
		T data_;
		Node* left_;
		Node* right_;
		Node(const T& data=T{},Node* left=nullptr, Node* right=nullptr){
			data_=data;
			left_=left;
			right_=right;
		}
	};

	Node* root_;

	void insert(Node*& curr,const T& value){
		if(curr==nullptr){
			curr=new Node(value);	
		}
		else{
			if(value < curr->data_){
				insert(curr->left_,value);
			}
			else{
				insert(curr->right_,value);
			}
		}
	}
	//subtree is the root of the subtree I wish to print
	//inorder
	void printTreeInorder(const Node* subtree) const{
		if(subtree!=nullptr){
			printTreeInorder(subtree->left_);
			std::cout << subtree->data_ << " - ";
			printTreeInorder(subtree->right_);
		}
	}
	void printTreePreorder(const Node* subtree) const{
		if(subtree){
			std::cout << subtree->data_ << " - ";
			printTreePreorder(subtree->left_);
			printTreePreorder(subtree->right_);
		}
	}

public:
	//create empty BST
	BST(){
		root_=nullptr;
	}
	void insertRecursive(const T& value){
		insert(root_,value);
	}  
	//inserts value into BST
	void insert1(const T& value){
		if(root_){
			Node* curr=root_;
			while(curr!=nullptr){
				if(value < curr->data_){
					if(curr->left_){
						curr=curr->left_;
					}
					else{
						curr->left_=new Node(value);
					}
				}
				else{
					if(curr->right_){
						curr=curr->right_;
					}
					else{
						curr->right_=new Node(value);
					}
				}
			}

		}
		else{
			root_=new Node(value);
		}
	}

	//inserts value into BST
	void insert2(const T& value){
		if(root_){
			Node* curr=root_;
			Node* oldcurr=nullptr;
			while(curr!=nullptr){
				oldcurr=curr;
				if(value < curr->data_){
						curr=curr->left_;
				}
				else{
						curr=curr->right_;

				}
			}
			if(value < oldcurr->data_){
				oldcurr->left_=new Node(value);
			}
			else{
				oldcurr->right_=new Node(value)
			}

		}
		else{
			root_=new Node(value);
		}
	}
	//returns true if a match value exists
	//in the BST, false otherwise
	bool exists(const T& value) const;

    //removes a node with value from tree
	void remove(const T& value);

	//prints out the tree
	void printTreeInorder() const{
		printTreeInorder(root);
		std::cout << std::endl;
	}

	//prints out the tree
	void printTreePreorder() const{
		printTreePreorder(root);
		std::cout << std::endl;

    }
    void printBreadthFirst() const{
    	Queue<Node*> thequeue;
    	thequeue.enqueue(root_);
    	while(!thequeue.isEmpty()){
	    	Node* curr=thequeue.front();
	    	thequeue.dequeue();
	    	if(curr){
	    		std::cout << curr->data_ << " - ";
	    		thequeue.enqueue(curr->left_);
	    		thequeue.enqueue(curr->right_);
	    	}
	    }

    }


	~BST();
};