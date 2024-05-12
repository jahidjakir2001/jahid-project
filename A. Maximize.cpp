
   /*******************************************************
    *   IN THE NAME OF ALLAH  ,  BISMILLAHIR RAHMANIR RAHIM*
    ********************************************************/
    /**.....................................আল্লাহ্ ব্যাতিত কোন মাবুদ নাই............................**/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
#define endl '\n'
#define faster() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
string s="abcdefghijklmnopqrstuvwxyz";
int main()
{
    faster();
    int t;
    cin>>t;
    while(t--){
       int a;
       cin>>a;
       int mx=0,y=0;
       for(int i=1;i<a;i++)
       {
           int x;
           x=i+(__gcd(i,a));
           //cout<<x<<" "<<i<<endl;
           if(x>mx)
           {
               mx=x;
               y=i;
           }
       }
       cout<<y<<endl;
    }
}
