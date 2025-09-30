#include <iostream>
#include <vector>
using namespace std;

void replaceElements(vector<int>& arr) {
    int maxi = -1;
    for (int i = arr.size() - 1; i >= 0; i--) {
        if(arr[i]>maxi){

            swap(arr[i],maxi);

            

        }
        else{
            arr[i]=maxi;
        }
       
    }
    
}

int main() {
    vector<int> arr = {17, 18, 5, 4, 6, 1};
    vector<int>ans;
    replaceElements(arr);

    for (int val : arr) {
        cout << val << " ";
    }

    return 0;
}
