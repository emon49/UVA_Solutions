#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<int>::iterator vit;
#define tst int t;cin>>t;while(t--)
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define loop(i,x,n) for(int i=x;i<n;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

int main()
{
    int a,b,c,d,maxx,cnt,x;
    while(cin>>a>>b)
    {
        maxx=0;
        c=min(a,b);
        d=max(a,b);
        for(int i=c; i<=d; i++)
        {
            x=i;
            cnt=0;
            while(1)
            {
                cnt++;

                if(x==1)
                    break;
                if(x%2!=0)
                    x=(3*x)+1;
                else
                    x=x/2;
            }
            if(cnt>=maxx)
                maxx=cnt;
        }
        cout<<a<<' '<<b<<' '<<maxx<<endl;
    }
    return 0;
}
