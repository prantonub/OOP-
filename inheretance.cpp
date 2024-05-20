//Inheritance using in c++
#include<bits/stdc++.h>
using namespace std;

//Base class or Parent class
class Animal {
    public:
      void eat(){
      cout << "I cat eat" << endl;
      }
      void sleep(){
      cout << "I can sleep" << endl;
      }
};
//Derived class or Child class
class doge: public Animal{
    public:
       void bark(){
       cout << "I can bark" <<endl;
       }
};
int main(){
//create object for the dog class
doge dog1;
//calling member of the base class
dog1.eat();
dog1.sleep();
//calling member of the derived class
dog1.bark();
}
