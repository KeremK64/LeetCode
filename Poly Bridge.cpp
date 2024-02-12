#include <stdio.h>
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;


int main()
{
    int n, w;
    cin >> n >> w;
    int element;
    vector<int> arr;
    for(int i = 0; i< n; i++){
        cin >> element;
        arr.push_back(element);
    }
    
    

    int sum = 0;
    int maxi = INT_MIN;
    int idx = 1;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum > maxi){
            maxi = sum;
            idx = 1;
        }
        for(int j = i + 1; j < n - i - 1; j++){
            sum += arr[j];
            if(sum > maxi){
                maxi = sum;
                idx = j;
            }
        }
        sum = 0;
    }
    int result;
    if(maxi <= w){
        result = 0;
    }
    else{
        result = ((maxi - w) / idx) + 1;
    }
    cout << result;

    return 0;
}


