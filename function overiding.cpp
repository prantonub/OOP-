#include<bits/stdc++.h>
using namespace std;
//base class
class person{
  public:
        void display()
      {
          cout << "I am a person " << endl;
      }
};
//derived class
class HeadTeacher : public person{
 public:
     void display()
     {
         cout << "I am a Head teacher " <<endl;
     }
};
//derived class
class Teacher: public person{
   public:
       void display(){
           cout << "I am a teacher " << endl;
       }
};
int main(){
  person P1;
  HeadTeacher H1;
  Teacher T1;

  P1.display();
  H1.display();
  T1.display();
}
