#include<iostream>
using  namespace std;
void print (int n, int current =1 ){
    if(current>n)
    return;
    cout << current <<" " ;
    print (n, current+1);
    if (current!=n)
    cout << current <<" ";
}
int main()
{
    int n;
    cout << "Enter a number ";
    cin >>n;
    print(n);

}