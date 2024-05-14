#include<iostream>
using namespace std;

// cpp does not read space, tab \t or enter \n

int main() {

    int n,a,b,i;

    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"The entered value of n is" <<n<<endl;

    if(n>0) {
        cout<<"n is a positive number"<<endl;
    }
    else if (n<0) {
        cout<<"n is a negative number"<<endl;
    }
    else{
        cout<<"n is negative"<<endl;
    }

    cout<<endl;

    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    if(a>b) {
        cout<<"a is greater than b";
    }
    else{
        cout<<"b is greater than or equal to a";
    }
    
    int sl;
    cout<< "Enter the number to iterate"<<endl;
    cin>>i;
    while(sl <= i) {
        cout<<sl<<" ";
        sl=sl+1;
    }


int sum=0, s, start=2;
cout<< "Enter the value"<<endl;
cin>>s;
while(start<=s) {
    sum = sum + start;
    start = start + 2 ;
}
cout<<"The obtained sum of even numbers upto n is "<< sum<<endl;


float f,c;
cout<<"Enter the value of C "<<endl;
cin>>c;
f = (c*9/5) +32;
cout<<"The converted value is "<< f <<endl;


int p, d=2;
cout<<"Enter your number"<<endl;
cin>>p;
while(d<p) {
   if(p%d == 0) {
       cout<<"not prime"<< d <<endl;
   }
   d=d+1;
}

 int l=1,k;
 cout<<"Enter k"<<endl;
 cin>>k;
while(l<=k) { 
     int j=1;
    while(j<=k) {
         cout<<l;
         j=j+1;
    }
     cout<<endl;
     l=l+1;
 }


}