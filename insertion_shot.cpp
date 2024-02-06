//input
// 5
//5 4 10 1 6 2
// output
//1 2 4 5 6 10

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,j,temp;
cin>>n;
int a[n];
// to take input 
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
//firstly (i+1) assume as temp if i=0.otherwise temp=i

for(int i=1;i<n;i++)
{
 int temp=a[i];
 int j=i-1;
 //then it compare with left index.is it smaller than left element;
 while(j>=0 && a[j]>temp) //for decending order while(j>=0 && a[j]<temp)
 {
    // if temp element is smaller than left element,then the left element change it's index
    // temp = 4,and left element is 5, 5>4,so it change it's index, 4 5 as it is work
    a[j+1]=a[j];
    j--;
 }   
 // after changing index it will be sorted than we have to change the temp variable
 a[j+1]=temp;
 
}
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
}