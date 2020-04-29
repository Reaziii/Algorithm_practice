/*
  Bismillahir Rahmanir Raheem
*/
#include<bits/stdc++.h>
#define sc(x)        scanf("%lld",&x)
#define pcase(x)     printf("Case %d: ",x++)
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
char a[10000],b[10000];
int subs(int ai,int bi){
    if(ai==-1 || bi==-1) return 0;
    else if(a[ai]==b[bi]){
        ai--;
        bi--;

        if(dp[ai][bi]==-1)dp[ai][bi]= subs(ai,bi);
        return 1+dp[ai][bi];
    }
    
    if(dp[ai][bi-1]==-1) dp[ai][bi-1]=subs(ai,bi-1);
    if(dp[ai-1][bi]==-1) dp[ai-1][bi]=subs(ai-1,bi);

    return max(dp[ai][bi-1],dp[ai-1][bi]);


}


int main(){
    // input;
    // output;
    int cs=1;
    int cn=1;
    cin>>cs;
    while(cs--){
        reset(dp,-1);
        //start form here//
        int x,y;
        cin>>x>>y;
        
        scanf("%s",a);
        scanf("%s",b);
        printf("%d\n",subs(x-1,y-1));
        


    }
}

