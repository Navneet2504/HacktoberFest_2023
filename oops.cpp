#include<iostream>
using namespace std;
//  Size of Empty class is  1;
// Acess method to class property 1. public 2. private (by default set)
class Animal{
   // static property
   private:
   int weight;
   public:
   int age;
   string name;
   //Constructor :[1]. It is automatically(BY default) called with object .[2].  when create own constructor then it is override with default constructor.[3]. Constructor is used to initiliase the object .
   // Default constructor
   Animal(){
    this->weight=0;
    this->age=0;
    this->name="";
    cout<<"constrictor called"<<endl;
   }
   // Parameterised constructor
   Animal(int age){
    this->age=age;
    cout<<"Parameterised cionstructor"<<endl;
   }
   Animal(int age,int weight){
    this->age=age;
    this->weight=weight;
    cout<<"Parameterised cionstructor 2 "<<endl;
   }
   Animal(int age,int weight,string name){
    this->age=age;
    this->weight=weight;
    this->name=name;
    cout<<"Parameterised cionstructor 3 "<<endl;
   }
   // COPY CONSTRUTOR
   Animal(Animal &obj){
    this->age= obj.age;
    this->weight=obj.weight;
    this->name=obj.name;
    cout<<"I am inside copy constructor "<<endl;
   }
   
   // behaviour 
   void eat(){
    cout<<"EATING"<<endl;
   }
   void Sleep(){
    cout<<"Sleeping "<<endl;
   }
   // getter is use to acess private data and Setter is use to set the data in private

   int getweight(){
    return weight;
   }
   void setweight(int w){
    weight=w;
   }
};
int main(){
    cout<<sizeof(Animal)<<"\n";
    // object creation 
    //static
    Animal abhay;
    /*abhay.age=15;
    abhay.name="LION";
    cout<<"Age of abhay is:"<<abhay.age<<endl;
    cout<<"Name of abhay:"<<abhay.name<<endl;
    abhay.setweight(502);// wset the value
    cout<<"Weight :"<<abhay.getweight()<<endl;// To access the value*/

    // Dynamic Memory 
    Animal*rohit=new Animal(12,45,"navneet");
    rohit->age=20;// or (*rohit).age=20;
    rohit->name="baby";
    (*rohit).eat();
    // copy constructor called
    Animal b=abhay;
    Animal a(abhay);
    Animal c=a;

}
