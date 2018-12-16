#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
ll a[n];
ll arr[600001]={0};
int main(){
ll n,q,k,x,prev=-1,last=400000,first,i;
string str;
cin>>n>>q>>k;

for(i=0;i<n;i++)
{
cin>>x;
a[i]=x;
if(x!=prev)last++;
if(x==1)arr[last]++;
else arr[last]--;
prev=x;
}
first=400001;
ll second_largest=0;
     int count = 0; //intitialize count 
    int result = 0; //initialize max 
  
    for (ll i = 0; i < n; i++) 
    { 
        // Reset count when 0 is found 
        if (a[i] == 0) 
            count = 0; 
  
        // If 1 is found, increment count 
        // and update result if count becomes 
        // more. 
        else
        { 
            count++;//increase count 
            //result = max(result, count);
            if(count>result){second_largest=result;
                                result=count;
                            }

        }
         
    }
x=*max_element(arr+(first-1),arr+(last+1));
cin>>str;
for(i=0;i<q;i++)
{
if(str[i]=='?')
{
		   if(x<arr[first] )
		   x=arr[first];
		 if(second_largest>arr[first])x=second_largest;
		if(x>k)
		x=k;

		cout<<x<<endl;
}
else	
	{
		if((arr[first]>0)&&(arr[last]>0))
		{
		arr[first]++;
		arr[last]--;
		}
		else if((arr[first]<0)&&(arr[last]<0))
		{
		arr[first]--;
		arr[last]++;
		}
		else if((arr[first]>0)&&(arr[last]<0))
		{
		arr[last]++;
		first--;
		arr[first]--;
		}
		else if((arr[first]<0)&&(arr[last]>0))
		{
		arr[last]--;
		first--;
		arr[first]++;
		}
		if(arr[last]==0)last--;
}




}
	return 0;
}