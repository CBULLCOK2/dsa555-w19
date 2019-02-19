template <class T>
class Queue{
	T* theQueue_;
	int capacity_;
	int used_;
	void grow(){
		T* tmp=new T[capacity_+capacity_];
		for(int i=0;i<used_;i++){
			tmp[i]=theQueue_[i];
		}
		capacity_=capacity_+capacity_;
		delete []theQueue_;
		theQueue_=tmp;
	}
public:
	Queue(int cap=13){
		capacity_=cap;
		theQueue_=new T[capacity_];
		used_=0;
	}
	void enqueue(const T& data){
		if(used_==capacity_){
			grow();
		}
		theQueue_[used_++]=data;
	}
	void dequeue(){
		if(used_!=0){
			used_--;
		}
	}
	T front() const{
		T rc;
		if(used_!=0){
			rc=theQueue_[used_-1];
		}
		return rc;
	}
	bool isEmpty() const{
		return used_==0;
	}
	~Queue(){
		delete [] theQueue_;
	}	
};