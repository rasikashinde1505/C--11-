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
        name= other.name;
        age=other.age;
    }
//parameterized constructor
    person(string name, int age):
            name(name),age(age){

    }
    //function to write the name and age and it must be const because
    // the key of the map must be unique which could not able to change
    void print() const{
        cout<<name<<":"<< age <<endl;
    }

    //comparing operator <
    bool operator<(const person &other) const {
        if(name==other.name){//compare the name of the elements if yes then
            return age<other.age;// compare the ages also if same then just update the values
        }else{//if not same
            return name<other.name;//then print the element as new element
        }
    }
};
int main()
{

    map<person,int> listOfPeople;
    listOfPeople[person("rasika", 24)]= 10 ;//keys cant be same
    listOfPeople[person("rasika", 240)]= 10;// it will check the name and the age both if its same it will update the data inside of it otherwise it won't

    listOfPeople[person("rakshu", 12)]= 30;
    listOfPeople[person("shubham", 26)]= 40;


    //iterations
    for (map<person, int>:: iterator it=listOfPeople.begin();
         it!=listOfPeople.end();it++){
        cout<<it->second<<":" <<flush;
        it->first.print();
        cout<<endl;
    }
    return 0;
}



