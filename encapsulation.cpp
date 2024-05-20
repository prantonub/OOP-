#include<bits/stdc++.h>
using namespace std;

class student{
   private :
       string name;
   public :
    void setname(string x)
    {
        name = x;
    }
    string getname()
    {
        return name;
    }
};
int main(){
  student s1;
  s1.setname("Pranto");
  cout << s1.getname();
}
