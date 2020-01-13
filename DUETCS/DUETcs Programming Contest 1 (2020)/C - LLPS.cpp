#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char b;
    cin>>s;
    b = s[0];
    int l = s.length();
    for(int i=1; i<l;i++){
        if(b<s[i]) b = s[i];
    }
    int c=0;
    for(int i=0; i<l ; i++){
        if(b==s[i]) c++;
    }
    for(int i=0; i<c; i++){
        cout<<b;
    }
    cout<<endl;

    return 0;
}
