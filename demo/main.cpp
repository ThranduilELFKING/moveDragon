#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
bool Comp(const string &s1,const string &s2)
{
    return s1.length()!=s2.length()?s1.length()<s2.length():s1<s2;
}
int main(int argc,char * argv[])
{
    vector<string> v;
    string t,s;
    while(cin>>s)
    {
        t=s;
        reverse(t.begin(),t.end());

        cout << "t : "<< t <<endl;
        if(t==s)
        {
            v.push_back(s);
        }
        if(cin.get()=='\n')
        {
            break;
        }
    }
    sort(v.begin(),v.end(),Comp);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }


    //system("pause");
    return 0;
}