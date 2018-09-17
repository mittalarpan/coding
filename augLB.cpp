#include <bits/stdc++.h> 
using namespace std ; 
#define ll long long int 
#define pb push_back
#define ff first 
#define dobara(i,a,b) for(int (i) = (a); (i) < (b); (i)++)
#define ss second 
#define S(x) scanf("%d",&x) 
#define SL(x) scanf("%lld",&x)
#define M 1000000007
#define sz(x) (int)x.size()
#define all(a) (a).begin(),(a).end()

int main()
{
   int t ; 
   cin>>t ; 
   while(t--)
   {
   	  ll n , z1 , z2 ; 
   	  cin>>n>>z1>>z2 ; 
   	  ll arr[n+5] ; 
   	  for(int i=0;i<n;i++)
   	  {
   	  	 cin>>arr[i] ; 
   	  }
   	  int flg=0 ; 
   	  ll s=0 ; 
   	  for(int i=0;i<n;i++)
   	  {
   	  	 if(s-arr[i]==z1 || s-arr[i]==z2 || s+arr[i]==z1 || s+arr[i]==z2)
   	  	 {
   	  	 	 flg=1 ; 
   	  	 	 break ; 
   	  	 }
   	  }
   	  if(flg)
   	  {
   	  	 cout<<1<<"\n" ; 
   	  	 continue ; 
   	  }
      int cnt=0 ; 
   	  for(int i=0;i<n;i++)
   	  {
   	  	 ll x=arr[i] , y=-1LL*arr[i] ; 
   	     flg=0 ; 
   	  	 for(int j=0;j<n;j++)
   	  	 {
   	  	 	if(x-arr[j]==z1 || x-arr[j]==z2 || x+arr[j]==z1 || x+arr[j]==z2)
   	  	 	{
   	  	 		flg=1 ;
   	  	 		cnt++ ;  
   	  	 		break ; 
   	  	 	}
   	  	 }
   
   	  	 for(int j=0;j<n;j++)
   	  	 {
   	  	 	if(y-arr[j]==z1 || y-arr[j]==z2 || y+arr[j]==z1 || y+arr[j]==z2)
   	  	 	{
   	  	 		flg=1 ; 
   	  	 		cnt++ ; 
   	  	 		break ; 
   	  	 	}
   	  	 }
   	  	  
   	  }

   	  if(cnt==2*n)
   	  {
   	  	 cout<<2<<"\n" ; 
   	  }
   	  else
   	  {
   	  	cout<<0<<"\n" ; 
   	  }
   }	
}