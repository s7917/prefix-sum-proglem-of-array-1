#include<iostream>
#include<vector>
// input [1 , 2 ,3 ,4 ,5] // output [1 ,3 ,6 ,10 , 15]
using namespace std;
 void runningsum(vector<int> &v){
    for(int i=1 ; i<v.size() ; i++){
        v[i]= v[i]+v[i-1];
    }
 }
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0 ; i<n ; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    runningsum(v);

    for(int i=0 ;i<n ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
