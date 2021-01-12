#include <iostream>
#include <string>
using namespace std;

int main() {
    string s,t;
    cin>>s>>t;
    int slen = s.size();
    int tlen = t.size();
    string st = s + t;
    cout<<slen<<" "<<tlen<<endl<<st<<endl;
    string ns,nt;
    ns = s;
    nt = t;
    char c0 = ns[0];
    char c1 = nt[0];
    nt[0] = ns[0];
    ns[0] = c1;
    cout<<ns<<" "<<nt;
  
    return 0;
}
