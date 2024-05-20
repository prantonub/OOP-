#include<bits/stdc++.h>
using namespace std;
//base class or parents class
 class Animal{
 public:
    void animalsound(){
    cout << "The animal makes a sound " << endl;
    }
 };
 //derived class or child class
 class pig:public Animal{
public:
    void animalsound(){
    cout << "The pig says: wee wee " << endl;
    }
 };
  //derived class or child class
 class dog: public Animal{
 public:
     void animalsound(){
     cout << "The dog says: Bow Booow" << endl;
     }
 };
 int main(){
   Animal myAnimal;
   pig mypig;
   dog mydog;

   myAnimal.animalsound();
   mypig.animalsound();
   mydog.animalsound();
 }
