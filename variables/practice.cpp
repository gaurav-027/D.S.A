#include <iostream>
using namespace std;

int areaOfSquare(){
    int n,area;
    cout<<"Enter Side of Square : ";
    cin>>n;

    area=n*n;

    cout<<"The Area of Square is : " << area;

    return 0;
}

float totalBill(){
    float item1,item2,item3,total,netTotal;
    cout<<"Item 1 : ";
    cin>>item1;
    cout<<"Item 2 : ";
    cin>>item2;
    cout<<"Item 3 : ";
    cin>>item3;

    total = (item1+item2+item3) ;

    cout<<"Total : "<<total<<endl;

    cout<<"GST : 18%"<<endl;

    netTotal = total + (total*18)/100;

    cout<<"Net Total : " <<netTotal;
    return 0;
}

int simpleInterest(){
    int p,r,t,s_i;
    cout<<"Enter Principal Amount : ";
    cin>>p;
    cout<<"Enter Rate : ";
    cin>>r;
    cout<<"Enteer Time : ";
    cin>>t;

    s_i = (p*r*t)/100;

    cout<<"SImple Interest is : "<<s_i;
    return 0;
}

int areaOfCircle(){
    int r,area;
    float pi=3.14;

    cout<<"Enter the Radius of Circle : ";
    cin>>r;

    area = pi*r*r;

    cout<<"The Area of Circle is : "<<area;

    return 0;
}



int main(){
    // areaOfSquare();
    totalBill();
    // simpleInterest();
    // areaOfCircle();
    return 0;
}