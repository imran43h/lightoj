#include<bits/stdc++.h>
using namespace std;

class S{
public:
    string name;
    int l, w, h;
    int mot(){
        return l*w*h;
    }
};

int main()
{
    struct S ob, thief, fool;
    int t, i, n;
    cin>>t;
    for(i=1; i<=t; i++){
        cin>>n;
        cin>>ob.name>>ob.l>>ob.w>>ob.h;
        thief = ob;
        fool = ob;
        for(int j=0;j<n-1;j++){
            cin>>ob.name>>ob.l>>ob.w>>ob.h;
            if(thief.mot()<ob.mot()) thief = ob;
            else if(fool.mot()>ob.mot()) fool = ob;
        }
        if(thief.mot()==fool.mot()){
            cout<<"Case "<<i<<": no thief"<<endl;
        }
        else{
            cout<<"Case "<<i<<": "<<thief.name<<" took chocolate from "<<fool.name<<endl;
        }
    }

    return 0;
}
