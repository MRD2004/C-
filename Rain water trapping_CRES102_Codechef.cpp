#include <iostream>
using namespace std;
void solve()
{
int n;
cin>> n;
int arr[n];
for (int i = 0;i < n; i++)
cin >>arr[i];
int water=0,lmax = arr[0],rmax = arr[n-1];
for (int i =1; i < n-1 ; i++)
{
for(int j=i; j>=0; j--)
{
if(arr[j]>lmax)
{
lmax = arr[j];
 }
}
for(int j=i; j<n; j++)
{
if(arr[j]>rmax)
{
rmax=arr[j];
}
}
water += (min(lmax,rmax) - arr[i]);
}
cout<<water<<endl;
}
signed main()
{
int t;
cin >> t;
while (t--)
{
solve();
}
return 0;
}
