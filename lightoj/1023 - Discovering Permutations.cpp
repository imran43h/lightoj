#include<bits/stdc++.h>

using namespace std;

int used[27], n, k;
char ch[27];


void permutation(int at, int n)
{
    if(k==0) return ;
    else if(at==n){
        k--;
        for(int j=0; j<n; j++){
            cout<<ch[j];
        }
        cout<<endl;
        return ;
    }

    for(int i=0; i<n; i++){
        if(!used[i]){
            used[i] = 1;
            ch[at] = i + 'A' ;
            permutation(at+1, n);
            used[i] = 0;
        }
    }
}

int main()
{
    int t, i;
    cin>>t;
    for(i=1; i<=t; i++){
        cin>>n>>k;
        memset(used, 0, sizeof(used));
        cout<<"Case "<<i<<":"<<endl;
        permutation(0, n);
    }

    return 0;
}
