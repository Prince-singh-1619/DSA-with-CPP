 #include <iostream>
using namespace std;

// int main() {
//     int l=1,k;
//  cout<<"Enter k"<<endl;
//  cin>>k;
// while(l<=k) { 
//      int j=1;
//     while(j<=k) {
//          cout<<j;
//          j=j+1;
//     }
//      cout<<endl;
//      l=l+1;
//  }
// }





// int main() {
//     int n;
//     cout<<"Enter your number"<<endl;
//     cin>>n;
//     int i=1, count=1;
//     while(i<=n) {
//         int j = 1;
//         while(j<=n) {
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }




// int main() {
// int n;
//     cout<<"Enter your number"<<endl;
//     cin>>n;
//     int i=1;
//     while(i<=n) {
//         int j = 1;
//         while(j<=n) {
//             char ch = 'A'+j-1;
//             cout<<ch<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }





// int main() {
 
//  int n;
//  cout<<"Enter n"<<endl;
//  cin>>n;
 
//  int i=1;
//  while(i<=n) {
//      int j=1;
    
//      while(j<=i) {
//           char count='A' + i - 1;
//          cout<<count<<" ";
     
//          j++;
//      }
//      cout<<endl;
//      i++;
//  }
// }



int main() {
    int n;
    cout<<"Enter your number"<<endl;
    cin>>n;
    
    int i=1;
    while(i<=n) {
        
        // print 1st triangle
        int j=1;
        int jc=n+1-i;
        while(j<=jc) {
            cout<<j;
            j++;
        }
        
        // print 2nd triangle
        int star=2*i-2;
        while(star) {
            cout<<"*";
            star--;
        }
        
        // print 3rd triangle
        while(jc) {
            cout<<jc;
            jc--;
        }
        
        cout<<endl;
        i++;
    }
  
}