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

string str[] = {"BCG", "BGC" ,"CBG" ,"CGB" ,"GBC" ,"GCB"};

vi v(9);
vi m(6);
int main()
{
    //optimize();
    int a,b,c,x,y,z,minn,pos,sum;
    while(cin>>v[0])
    {
        sum=0;
        loop(i,1,9)
        {
            cin>>v[i];
        }
        loop(i,0,9)
            sum+=v[i];

        m[0] = sum - v[0] - v[5] - v[7];
        m[1] = sum - v[0] - v[4] - v[8];
        m[2] = sum - v[2] - v[3] - v[7];
        m[3] = sum - v[2] - v[4] - v[6];
        m[4] = sum - v[1] - v[3] - v[8];
        m[5] = sum - v[1] - v[5] - v[6];

        minn=*min_element(all(m));
        pos=min_element(all(m))-m.begin();
        cout<<str[pos]<<' '<<minn<<endl;
    }





    return 0;
}

