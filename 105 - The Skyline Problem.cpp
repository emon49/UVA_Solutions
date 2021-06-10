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


int skyline[10001], l, h, r;

int main() {

    while (cin>>l>>h>>r) {
        for (int i = l; i < r; i++) {
            if (skyline[i] < h) {
                skyline[i] = h;
            }
        }
    }

    for (int i = 0, f = 1; i <= 10001; i++) {
        if (skyline[i - 1] != skyline[i]) {
            if (f == 1) {
                cout<<i<<' '<<skyline[i];
                f++;
            } else {
                cout<<' '<<i<<' '<<skyline[i];
            }

        }

    }

    printf("\n");


    return 0;
}
