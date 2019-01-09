template <typename T>
class MyVector{
	T* data_;
	size_t capacity_;
	size_t size_;

public:
	MyVector(int capacity=20){
		data_=new T[capacity];
		capacity_=capacity;
		size_=0;
	}
	MyVector(const MyVector& other);
	MyVector(MyVector&& other);
	MyVector& operator=(const MyVector& other);
	MyVector& operator=(MyVector&& other);
	~MyVector();
};