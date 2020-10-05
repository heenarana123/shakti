#include<iostream>

using namespace std;


int sum(int a , int b){
    int c= a +b ;
    return 0;
} 
// these will not swap a and b  call by reference pointer
 void  swappointer(int* a,int* b){     //temp   a   b 

 
    int temp = *a;                  ////  4    4    5
     *a= *b;                            //4    5    5
     *b=temp;   
                           //1    5    4
 }
// these will not swap a and b  call by reference using c++ reference variable
   void swapreferencevar(int &a,int  &b){     //temp   a   b 

 
    int temp = a;                  ////  4    4    5
     a= b;                            //4    5    5
     b=temp; 
     return a;                        //1    5    4
 }
         
int main(){
    int a=4,b=5;

    // cout<<"the value of 4 and 5 is"<<sum(4,5); 
    cout<<"the value of a is"   << a<<"and the  value of b is"<<b<<endl;
    // swap(a,b);  thess will not run
    // swappointer(&a ,&b);   these will execute using pointer reference 
     swappointer(a ,b);            // these will execute using  reference variable 
    cout<<"the value of a is"  <<  a<<"and the  value of b is"<<b<<endl;
    return 0;
}
