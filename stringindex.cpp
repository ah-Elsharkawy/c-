#include <iostream>
#include <string>
#include <vector>
#include <set>
typedef long long ll;
using namespace std;
set<int> stringindex(string s,string wanted)
{
  string sub=s;
  set<int> st;
  int location=0;
  while(s.find(wanted)!=-1)
  {
    location+=s.find(wanted);
    st.insert(location);
    location+=wanted.size();
    s=sub.substr(location,sub.size()-location);
  }
  return st;
}
int main()
{
  cout<<"enter the original string : ";
  string s; cin>>s;
  cout<<"\nenter the string you want to check for his index in the original : ";
  string sub; cin>>sub;
  for(auto i:stringindex(s,sub))
  {
    cout<<i<<" ";
  }
}
