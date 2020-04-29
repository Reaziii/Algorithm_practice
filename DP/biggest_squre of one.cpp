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

int dpr[10][10];
int dpc[10][10];
int mcx[10][10];
int total=0;

int solve(int x,int y,int a,int b){
    if(a==-1) return 0;
    int f=x-a+1;
    int g=y-b+1;
    if(dpr[a][y]-dpr[a][b-1]==f && dpc[x][b]-dpc[a-1][b]==g){
        if(mcx[x][y]<f)mcx[x][y]=f;
        total=max(total,f);
        return solve(x,y,a-1,b-1);

    }



}





int main(){
    input;
    output;
    clr(dpr);
    clr(dpc);
    clr(mcx);
    int arr[10][20];
    fri(6){
        int sum1=0;
        frj(6){
            cin>>arr[i][j];
            sum1+=arr[i][j];
            dpr[i][j]=sum1;


        }
    }
    fri(6){
        int sum=0;
        frj(6){
            sum+=arr[j][i];
            dpc[j][i]=sum;

        }
    }
    for(int i=5;i>=0;i--){
       for(int j=5;j>=0;j--){     
           solve(i,j,i-1,j-1);
       }
    }

    cout<<total*total<<endl;




}
