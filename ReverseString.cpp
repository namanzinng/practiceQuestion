#include<iostream>
#include<stack>
using namespace std;

int main(){

    string str = "NAMAN IS USING C++";

    stack <char> s;

    for(int i=0; i<str.length(); i++){

        char ch = str[i];
        s.push(ch);
    }

    string ans = "";

    while(!s.empty()){

        char ch = s.top();
        ans.push_back(ch);

        s.pop();


    }

    cout<<" ans = "<< ans <<endl;

    return 0;
}
