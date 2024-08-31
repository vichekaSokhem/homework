#include<iostream>
using namespace std;
int main(){
system("cls");
int a=2;
int *ptr = &a;
cout << "The original value" << endl;
cout << "A address: " << a << endl;
cout << "pointer of a: " << *ptr << endl;
cout << "The value after modified" << endl;
*ptr = 5;
cout << "A address: " << a << endl;;
cout << "pointer of a: " << *ptr << endl; 
    return 0;
}