#include<bits/stdc++.h>
using namespace std;
 class overload{
 public:
    void add(int a, int b)
    {
        cout << "Sum of two number: " << a+b <<endl;
    }
    void add(int a, int b, int c)
    {
        cout << "Sum of three number: " << a+b+ c <<endl;
    }
    void add(){
    cout << "No command "<< endl;
    }
 };
int main(){
overload obj;
obj.add(5,10);
obj.add(5,15, 20);
obj.add();
}
