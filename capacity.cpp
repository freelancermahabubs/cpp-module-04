#include <bits\stdc++.h>
using namespace std;
int main ( ){
    string s = "hello World";
    cout << s.size()<<endl;
    cout<<s.max_size()<<endl;
    string a="jkllllllllllllllllllllllllllll";
    cout<<a.capacity()<<endl;
    cout<<a<<endl;

    string t = "Hello";
    cout << t<<endl;
    t.clear();
    cout<<t.size()<<endl;

string e;
e.clear();
if(e.empty()== true) cout<<"Empty"<<endl;
else cout<<"Not Empty"<<endl;

string in;
cin >> in;
in.resize(5);
in.resize(8, 'X');
cout<<in.size()<<endl;
cout<<in<<endl;
return 0;

}