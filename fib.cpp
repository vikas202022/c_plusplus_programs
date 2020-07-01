#include<iostream>
using namespace std;
/*int main()
{
    int a=0,b=1,c,n,i;
    cout<<"enter number of digits to print ";
    cin>>n;
    cout << a<<endl;
    cout << b<<endl;
    for(i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout << c<<endl;
    }
    
    
}*/

//using functions

/*void fib(int n){
    int a=0,b=1,c,i;
    cout<<a<<endl;
    cout<<b<<endl;
    for(i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
      cout<<c<<endl;
    }
   
}
int main()
{
    int n;
    cout<<"enter number ";
    cin>>n;
    fib(n);
    return 0;
    
}*/

//using rec.
int fib(int n)
{
    if(n<2)return n;
    else return (fib(n-1)+fib(n-2));
}

int main()
{
    int n,i;
    cout<<"enter number";
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cout<<fib(i)<<endl;
        
    }

}