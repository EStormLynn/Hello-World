//
//  Sorting Photo.cpp
//  code
//
//  Created by SeeKHit on 2016/11/26.
//  Copyright © 2016年 SeeKHit. All rights reserved.
//

#include "iostream"
#include "string"
#include "vector"

using namespace std;


int f()
{
    int ans=0;
    
    for(int i=0;i<=5;i++)
    {
        int j=0;
        while(2*i+j<=10)
        {
            j++;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}


int main()
{
    int n;
    vector<string> v;
    string str;
    cin>>n;
    while(n--)
    {
        cin>>str;
        v.push_back(str);
    }
    
    sort(v.begin(),v.end());
    
    for(vector<string>::iterator iter=v.begin();iter!=v.end();iter++)
    {
        cout<<*iter<<endl;
    }
    return 0;
}
