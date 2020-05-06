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


int main(){
   // input;
    int cs;
    cin>>cs;
    while(cs--){
        ll n;
        ll k;

        cin>>n;
        ll arr[n];
        fri(n) cin>>arr[i];
        cin>>k;
        int ans=0;
        bool vis[1000][1000];
        clr(vis);

        sort(arr,arr+n,greater<int>());
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && arr[i]!=infi && arr[j]!=infi){
                    if(abs(arr[i]-arr[j])<k){

                        ans+=arr[i]+arr[j];
                        arr[i]=infi;
                        arr[j]=infi;

                    }



                }

            }


        }

        cout<<ans<<endl;
    }
}


/*

    Question:
    Given an array of integers A[] and a number k.You can pair two number of
     array if difference between them is strictly less than k.
     The task is to find maximum possible sum of such disjoint pairs.
     Sum of P pairs is sum of all 2P numbers of pairs

     Input:
    2
    7
    3 5 10 15 17 12 9
    4
    4
    5 15 10 300
    12

    Output:
    62
    25


    Link : https://practice.geeksforgeeks.org/problems/pairs-with-specific-difference/0/

*/

