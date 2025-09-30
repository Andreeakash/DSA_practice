// #include <iostream>
// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;


// int main()
// {
//   int n=61;
//   int p =42;
//   string x=to_string(n),y=to_string(p);
//   sort(x.begin(),x.end());
//   sort(y.begin(),y.end());
  
//   cout<<x<<" "<<y<<endl;
//      cout << typeid(x).name() << endl;  
//     cout << typeid(y).name() << endl;  
//     return 0;
// }
#include <bits/stdc++.h> 
#include<string.h>
#include<algorithm>
using namespace std;
bool isPow(int a, int b){
   string x=to_string(a),y=to_string(b);
   sort(x.begin(),x.end());
   sort(y.begin(),y.end());
   return x==y;
}
bool reorderedPowerOf2(int n){
    
	for (int i=0;i<32;i++){
        if(isPow(1<<i,n));
        return 1;
    }
    return 0;
   

}
int main(){
    int n=4;
    reorderedPowerOf2(n);
    return 0;

}
