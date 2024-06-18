#include<iostream>
using namespace std;
class Animal{
    public:
    // Virtual function eat
    virtual void eat(){
        cout<<"Animal is eating generic food."<<endl;
    }
};
//Derived class Dog
class Dog : public Animal{
    public:
    //Overide virtual function
    void eat() override{
        cout<<"Dog is eating bones."<<endl;
    }
};
//
//Derived class cat
class Cat : public Animal{
    public:
    void eat() override{
        cout<<"Cat is eating fish"<<endl;
    }
};
int main(){
    Animal* animal1 = new Animal();
    Animal* animal2 = new Dog();
    Animal* animal3 = new Cat();

    animal1->eat();
    animal2->eat();
    animal3->eat();
 
    delete animal1;
    delete animal2;
    delete animal3;
     
}