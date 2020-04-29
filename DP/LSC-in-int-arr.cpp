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

int longest_sub(int arr[],int n){
    int mx=-1;
    int ans=-1;

    int list[n];
    reset(list,1);
    for(int i=0;i<n;i++){
        mx=0;
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]){
                mx=max(mx,list[j]);
            }
        }
        list[i]=mx+1;
        ans=max(list[i],ans);
    }
    return ans;

}
int main(){
    input;
    output;
    int cs=1;
    int cn=1;
    cin>>cs;
    while(cs--){
        int n;
        cin>>n;
        int arr[n];
        fri(n)cin>>arr[i];
        cout<<longest_sub(arr,n);
        cout<<endl;
        


    }
}
