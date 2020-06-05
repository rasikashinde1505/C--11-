//============================================================================
// Author      : Rasika Shinde
//============================================================================

#include <iostream>
#include <set>
using namespace std;

class Test{
private:
	int id ;
	string name;
public:
	//defaul constructor
	Test():id(0), name(""){

	}
	//parameterize constructor
	Test (int id,string name):id(id), name(name){
		}
	// const method because iterator does not support to variable methods
	void print() const{
		cout<< id <<": "<<name<<endl;
	}
	//less than operator
	bool operator<(const Test &other)const{
		return name<other.name;
	}
};

int main()
{

	set<int> numbers;

	numbers.insert(10);
	numbers.insert(30);
	numbers.insert(40);
	numbers.insert(10);

	for (set<int>:: iterator it=numbers.begin();
	    		it!=numbers.end(); it++){
	    	cout<< *it<<endl;
	    }

	//way to find element from the list
	set<int>::iterator itFind= numbers.find(30);

	if(itFind != numbers.end()){
		cout<<"number found: "<<endl;
	}


 //another way to find element from list
	if(numbers.count(30)){
		cout<<"number found: "<< endl;
	}

	cout<<"================"<<endl;
	set<Test>tests;
	tests.insert(Test(10,"rasika"));
	tests.insert(Test(40,"rakshu"));
	tests.insert(Test(70,"gunjan"));
	tests.insert(Test(20,"shubham"));

	for(set<Test>::iterator it=tests.begin(); it!=tests.end(); it++){
		it->print();
	}



    return 0;
}



