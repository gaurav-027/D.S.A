#include<iostream>
using namespace std;

int factorial(int n){
    int f=1;
    for (int i = n; i > 0 ; i--)
    {
        f=f*i;
    }

    cout<<"The Factoril of "<<n<<" is "<<f;

    return 0;
    
}

int table(int n){
    for(int i=1;i<=10;i++){
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}

int armstrong(int n){
    int sum=0,org=n,a;
    while(org>0){
        a=org%10;
        sum=sum+(a*a*a);
        org=org/10;
    }
    if(sum == n){
        cout<<n<<" is an armstrong number";
    }
    else{
        cout<<n<<" is not an armstrong number";
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    // factorial(n);
    // table(n);
    // armstrong(n);
    return 0;
}