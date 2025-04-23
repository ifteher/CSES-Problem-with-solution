#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,k,ans=0;
    cin >> n>>m>>k;

    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    vector<int>v1(m);
    for(int i=0;i<m;i++)
    {
        cin>>v1[i];
    }
    int i=0,j=0;
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    while(i<n)
    {
        while(j<v1.size() && v1[j]<v[i]-k)
            {
                j++;
            }
        if(abs(v[i]-v1[j])<=k)
        {
            ans++;
            i++;
            j++;
        }
        else i++;
    }
    cout<<ans<<endl;
return 0;
}
