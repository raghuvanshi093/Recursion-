#include<iostream>
using namespace std;
// function to find sum of odd number 
int sumodd(int a, int b){
    if (a>b)
    return 0;

    if (a%2!=0)

    return a + sumodd(a+1 , b);

    else
    return sumodd(a+1 , b);
}
 int main(){
    int a, b;
    cout<< "Enter the value of A and B";

    cin>>a>>b;//user input 

    int result =sumodd(a,b);// call function


    cout<<"sum of odd number from "<< a <<" to "<< b <<" is "<< result <<endl;
 }