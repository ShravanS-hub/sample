#include <iostream>
#include<conio.h>
using namespace std;

int main() {
    // cout << "Shravan" <<endl << "Sharma\nU"<< endl;
    // cout<<"hi"<<"how "<<"are"<<"You";
// cout<<"hello world";
   char ch;
   cout<<"enter a character:\n";
   cin>>ch;
   if(ch>='a'||ch<='z'){
    cout<<ch<<"is lowercase";
   }else if(ch>='A'||ch<='Z'){
    cout<<ch<<"is uppercase";
   }else{
    cout<<"invalid character";
   }
   return 0;
}
