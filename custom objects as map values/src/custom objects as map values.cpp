//============================================================================
// Author      : Rasika Shinde
//============================================================================

#include <iostream>
#include <map>

using namespace std;

class person{
private:
    string name;
    int age;

public:
    //default constructor to create an object for the person object listOfPerson
    person(): name(""), age(0){

    }
    //copy constructor to not override the value
    person(const person &other){
        cout<<"copy constructor"<<endl;
        name= other.name;
        age=other.age;
    }
//parameterized constructor
    person(string name, int age):
    name(name),age(age){

    }
    //function to write the name and age
    void print(){
        cout<<name<<":"<< age <<endl;
    }
};
int main()
{

    map<int,person> listOfPeople;
    listOfPeople[1]= person("rasika", 24);//keys can't be same
    listOfPeople[1]= person("rasika", 29);// but if we use the same key the values will update

    listOfPeople[18]= person("gunjan", 24);
    listOfPeople[15]= person("rakshu", 24);

    listOfPeople.insert(make_pair(55,person ("teju", 17)));//insert the element in list
    listOfPeople.insert(make_pair(55,person ("om", 7)));

    //iterations
    for (map<int,person>:: iterator it=listOfPeople.begin();
    it!=listOfPeople.end();it++){
        cout<<it->first<<":" <<flush;
        it->second.print();
    }
    return 0;
}



