/*
  Bismillahir Rahmanir Raheem
*/
#include<bits/stdc++.h>
#define sc(x)        scanf("%lld",&x)
#define pcase(x)     printf("Case %d:\n",x++)
#define pn           printf("\n")
#define fri(f)       for(int i=0;i<f;i++)
#define frj(f)       for(int j=0;j<f;j++)
#define reset(x,e)   memset(x,e,sizeof(x))
#define all(x)       x.begin(),x.end()
#define input        freopen("input.txt","r",stdin);
#define output       freopen("output.txt","w",stdout)
#define infi         INT_MAX
#define max_value    3000000
#define pii          pair<int,int>
#define pch          pair<char,char>
#define pll          pair<ll,ll>
#define mgraph       map<int,vector<int> >
#define mp           make_pair
#define pb           push_back
#define clr(x)       memset(x,0,sizeof(x))

using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
 //.................___Start from here___.................//
//.................._____________________................//


int dp[1000][1000];

bool sol(string s1,string s2){
    if(s1==s2) return 1;
    if(s1.empty() || s2.empty()){
        if(s1.empty()) return 0;
        else if(s2.empty()){
            for(int i=0;i<s1.size();i++) if(isupper(s1[i])) return 0;
            else return 1;
        }
    }

    if(s1.back()==s2.back()){
        s1.pop_back();
        s2.pop_back();
        if(dp[s1.size()][s2.size()]==-1) dp[s1.size()][s2.size()] =  sol(s1,s2);
        return dp[s1.size()][s2.size()];
    }

    string s3=s1;
    s3.pop_back();
    if(islower(s1.back())){
        s1[s1.size()-1]=toupper(s1.back());

       if(dp[s1.size()][s2.size()]==-1) dp[s1.size()][s2.size()] = sol(s1,s2)||sol(s3,s2);
        return dp[s1.size()][s2.size()];
    }

    return 0;



}



int main(){
    int cn=1;
    int cs;
    cin>>cs;

    while(cs--){
        string s1,s2;
        cin>>s1>>s2;
        reset(dp,-1);
        if(sol(s1,s2))cout<<"YES";
        else cout<<"NO";
        cout<<endl;

    }


}


/*

    link : https://www.hackerrank.com/challenges/abbr/problem

*/

