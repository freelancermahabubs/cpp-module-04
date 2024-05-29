#include<bits\stdc++.h>
using namespace std;

int main(){
    string a = "hello";
    string b = "A";
    // a+=b;
    a.append(b);

    cout << b << endl;

    // push back 
    // a[5]= 'A' --> didn't wrok 
    // a = "helloA"
    // a=a+b  //--> Works; 
    a.push_back('A'); // works
 
    a = "Gelo";
    a.assign("gelos");


    string e=  "HelloWorld";
    e.erase(4, 1);
    cout << e << endl;

    e.replace(4, 3, "SO");
    e.insert(5, "Mahabub");
    cout << a << endl;
    return 0;
}