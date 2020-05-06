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

ll dp[1000][1000];
ll sol(int x,int y){
    if(x==0 && y==0) return 1;
    if(x==0){
        if(dp[x][y]==-1)dp[x][y]=sol(x,y-1);
        return dp[x][y];


    }
    if(y==0){
        if(dp[x][y]==-1)dp[x][y]=sol(x-1,y);
        return dp[x][y];

    }

    if(dp[x][y]==-1) dp[x][y]=sol(x,y-1)+sol(x-1,y);

    return dp[x][y];




}




int main(){
input;
    int cs=1;
    int cn=1;
    cin>>cs;
    while(cs--){
        //start form here//
        reset(dp,-1);
        int x,y;
        cin>>x>>y;
        //For using dp use this function
//        cout<<sol(x-1,y-1);
      //Next using matrix :)
        int matrix[x][y];
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                if(i==0 || j==0) matrix[i][j]=1;
                else{
                    matrix[i][j]=matrix[i-1][j]+matrix[i][j-1];

                }

            }

        }


        cout<<matrix[x-1][y-1]<<endl;



    }
}


/*
    Question:

    Given a M X N matrix with your initial position at top-left cell, find the number of possible unique paths to reach the bottom right cell of the matrix from the initial position.

    Note: Possible moves can be either down or right at any point in time, i.e., we can move to matrix[i+1][j] or matrix[i][j+1] from matrix[i][j].

    Input:
    The first line contains an integer T, depicting total number of test cases. Then following T lines contains an two integers A and B depicting the size of the grid.

    Output:
    Print the number of unique paths to reach bottom-right cell from the top-left cell.

        Constraints:
        1 ≤ T ≤ 30
        1 ≤ M ≤ 15
        1 ≤ N ≤ 15

        Example:
        Input:
        2
        2 2
        3 4

        Output:
        2
        10

        Note It can be done with many ways;

        //Using matrix :
        if quesion is 4 4
        :
        1 1  1  1
        1 2  3  4
        1 3  6 10
        1 4 10 20

        Here, we can go in a path using two path top and left;
        so we can add top path and left path and we will get our ans for that path where we are

        Or also can be use a formula (m-1+n-1)/(m-1)!*(n-1)!;




*/
