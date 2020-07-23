#include<iostream>
using namespace std  ;
void swap(int *x,int *y)
{
 int temp;
 temp=*x;
 *x=*y;
 *y=temp;
}
int main(){
    int a[50],i,j,n;
    cout<< "enter number : ";
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if (a[j]>a[j+1])
            swap(&a[j],&a[j+1]);
        }
    }
    for(i=0;i<n;i++)
    cout<<a[i];
}
