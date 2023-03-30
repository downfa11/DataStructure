#include<vector>
#include<iostream>
#define fastio ios::sync_with_stdio(0),cout.tie(0),cin.tie(0)
using namespace std;
int main(){
    
    fastio;
    vector<int> vec;
    
    vec.push_back(50);
    vec.push_back(20);
    vec.push_back(17);
    
    for(vector<int>::size_type i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    
    cout<<endl;
    cout<<"front : "<<vec.front()<<endl;
    cout<<"back : "<<vec.back()<<endl;
    
    vec.pop_back();
    
    vector<int>::iterator iter;
    for(iter=vec.begin();iter!=vec.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    
    for(vector<int>::iterator it=vec.begin();it!=vec.end();it++){
        if(*it==20){
            vec.erase(it);
            break;
        }
    }
    
    cout<<vec.size();
    return 0;
}