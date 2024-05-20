//function overriding using virtual function and pointer
#include<bits/stdc++.h>
using namespace std;
//base class
class person{
  public:
       virtual void display()
      {
          cout << "I am a person " << endl;
      }
};
//derived class
class HeadTeacher : public person{
 public:
     void display() override
     {
         cout << "I am a Head Teacher " <<endl;
     }
};
//derived class
class Teacher: public person{
   public:
       void display() override
       {
           cout << "I am a Teacher " << endl;
       }
};
int main(){
  person *p;//using pointer
  HeadTeacher h;//create object for HeadTeacher and Teacher
  Teacher t;

   p = &h;
   p -> display();

   p= & t;
   p -> display();
}

