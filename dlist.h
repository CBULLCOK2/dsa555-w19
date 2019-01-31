#include <iostream>

template <typename T>
class DList{
	struct Node{
		T data_;
		Node* next_;
		Node* prev_;
		Node(const T& data=T{},Node* next=nullptr, Node* prev=nullptr){
			data_=data;
			next_=next;
			prev_=prev;
		}
	};
	Node* head_;
	Node* tail_;
public:
	DList(){
		head_=nullptr;
		tail_=nullptr;
	}
	void push_front(const T& data);
	void pop_front();
	void print() const;
	void reversePrint() const;
	~DList();
	class const_iterator{
		friend class DList;
		Node* curr_;

	protected:
		const_iterator(Node* curr){
			curr_=curr;
		}
	public:
		const_iterator();
		const_iterator operator++();     //++x
		const_iterator operator++(int);  //x++
		const T& operator*() const;

	};
	class iterator:public const_iterator{

	};
	const_iterator cbegin() const{
		return const_iterator(head_);
	}
	const_iterator cend() const;


};





template <typename T>
void DList<T>::push_front(const T& data){
    Node* nn = new Node(data,nullptr,head_);
    if(head_){
        head_->prev_=nn;
    }
    else{
        tail_=nn;
    }
    head_=nn;
}

template <typename T>
void DList<T>::pop_front(){
    if(head_){
        Node* rm = head_;
        head_=head_->next_;
        if(head_==nullptr){  //if only one node exists
            tail_=nullptr;
        }
        else{
            head_->prev_=nullptr;
        }
        delete rm;
    }
}

template <typename T>
void DList<T>::print() const{
	Node* curr=head_;
	while(curr!=nullptr){
		std::cout << curr->data_ << " ";
		curr=curr->next_;
	}
	std::cout << std::endl;
}
template <typename T>
void DList<T>::reversePrint() const{
	Node* curr=tail_;
	while(curr!=nullptr){
		std::cout << curr->data_ << " ";
		curr=curr->prev_;
	}
	std::cout << std::endl;
}
template <typename T>
DList<T>::~DList(){
	Node* curr=head_;
	while(curr){
		Node* rm=curr;
		curr=curr->next_;
		delete rm;
	}
}
template <typename T>
class Sentinel{
	struct Node{
		T data_;
		Node* next_;
		Node* prev_;
		Node(const T& data=T{},Node* next=nullptr, Node* prev=nullptr){
			data_=data;
			next_=next;
			prev_=prev;
		}
	};
	Node* head_;
	Node* tail_;
public:
	Sentinel(){
		head_=new Node();
		tail_=new Node();
		head_->next_=tail_;
		tail_->prev_=head_;
	}
	void push_front(const T& data);
	void pop_front();
	void print() const;
	void reversePrint() const;
	~Sentinel();
};


template <typename T>
void Sentinel<T>::push_front(const T& data){
		Node* frontSentinel=head_;
		Node* afterFrontSentniel=head_->next_;
		Node* nn = new Node(data, afterFrontSentniel, frontSentinel);
		frontSentinel->next_=nn;
		afterFrontSentniel->prev_=nn;
}


template <typename T>
void Sentinel<T>::pop_front(){
	if(head_->next_!=tail_){
		Node* rm=head_->next_;
		head_->next_=rm->next_;
		rm->next_->prev_=head_;
		delete rm;
	}
}

template <typename T>
void Sentinel<T>::print() const{

template <typename T>
void Sentinel<T>::reversePrint() const{

}
template <typename T>
Sentinel<T>::~Sentinel(){

}
