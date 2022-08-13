#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  vector<int> v1={10,20,30,40};
    
    int sum=0;
    cout<<"v1: {";
    for_each(begin(v1),end(v1),[&sum](const auto& x){cout<<x<<" ";sum +=x;});
    cout<<"}"<<endl;
    cout<<"sum of vector elements:"<<sum<<endl;
    cout<<endl;
    // sort elements in descending order
    sort(v1.begin(),v1.end(),greater<int>());
    cout<<"v1: {";
    for_each(begin(v1),end(v1),[](const auto& x){cout<<x<<" ";});
    cout<<"}"<<endl;
    return 0;  
}