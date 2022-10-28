#include<iostream>
using namespace std;

string encoding(string s,int j)
{

    for(int i=j;i<s.length(); i++){

        if( s[i] != ' ' ){

            s[i]=s[i]+j;
            i = i+j;
        }
    }
    return s;

}


int main()
{

    string s = encoding("I am a student", 2);

    cout<<s<<endl;
}
