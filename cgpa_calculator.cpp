#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the number of subject=";
    cin>>n;
    float grade[n],credit[n];
    for(i=1;i<=n;i++)
    {
        cout<< i <<" subject grade=";
        cin>>grade[i];
       
        
            cout<< i <<" subject credit=";
            cin>>credit[i];
            
        
    }
float x,sum1=0,sum2=0;
     for(i=1;i<=n;i++)
    {
        
       
          x=grade[i]*credit[i]; 
          sum1+=x;
          sum2+=credit[i]; 
        
    }
    float result=(float)sum1/sum2;
    cout<<"the result is="<<result;
}