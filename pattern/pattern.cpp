#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter rows number:";
    cin>>n;

    // star pattern
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

    // inverted star pattern
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

    // half pyramid pattern
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;

    // character pyramid pattern
    int ch=65;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<char(ch);
            ch++;
        }
        cout<<endl;
    }
    cout<<endl;

    // hollow rectangle pattern
    for(int i=1;i<=n;i++){
        cout<<"*";
        for(int j=1;j<=n;j++){
            if(i==1 || i==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"*"<<endl;
    }
    cout<<endl;

    // butterfly pattern
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}