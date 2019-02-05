#include "dlist.h"
#include <iostream>
int main(void){
	DList<int> list;
	list.push_front(5);
	list.push_front(6);
	list.push_front(3);

	DList<int>::const_iterator it=list.cbegin();
	while(it!=list.cend()){
		std::cout << *it << std::endl;
		it++;
	}
	while(it!=list.cbegin()){
		it--;
		std::cout << *it << std::endl;
	}
	return 0;
}