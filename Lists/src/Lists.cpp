//============================================================================
// Author      : Rasika Shinde
//============================================================================

#include <iostream>
#include<list>// same as vectors but we can put the values in between the array
using namespace std;

int main() {
	list<int> numbers;//list object uses the concept of double linked list

	numbers.push_front(0);//to push the values in front//1st p
	numbers.push_back(1);// to push the values//2nd p
	numbers.push_back(2);//3rd p
	numbers.push_back(3);//4th p
	numbers.push_back(4);//5th position

	//just to explain how iterator works inside of the loop
	list<int>::iterator it= numbers.begin();//0th position
	advance(it,3);//4rd position i.e 4th number in the list
    //it++;//1st position and with list operator we can only increment by 1 or decrement by 1 eg: "it+2" is not possible
    //so solution for the we have one function "advance(it,2)"

	numbers.insert(it,100);// the value of the element at 3rd position
	cout<<"inserted element:"<<*it<<endl;//this will give the position o th element in the list

	list<int>::iterator eraseIt = numbers.begin();//1st position element i.e 0
	eraseIt++;//2nd positioned element i.e 1
	eraseIt=numbers.erase(eraseIt);//erase 2nd positioned element i.e 1
	cout << "erased element:" << *eraseIt << endl;

	for(list<int>::iterator it= numbers.begin(); it!=numbers.end(); ){
		if(*it==4){//element will be inserted before value 4
			numbers.insert(it, 1234);
		}
        	if(*it== 4){// element valued 4 will be removed
		        it=numbers.erase(it);
		     }else{
		    	 it++;//after the deletion it will go through the list again
		     }

	}
	for(list<int>::iterator it= numbers.begin(); it!=numbers.end(); it++){
		//An iterator is any object that, pointing to some element in a
		//range of elements (such as an array or a container)
		cout<<*it<<endl;
	}


	return 0;

}
