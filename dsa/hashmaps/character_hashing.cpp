#include<iostream>
// #include<string>
using namespace std;

int main(){
   
  //input the string
  string s;
  cin>>s;

  //pre processing
  int hasmap[26]={0}; // hasmap[256] - when both upper and lower alphabets are present
  for(int i=0; i<s.size(); i++) hasmap[s[i]-'a']++; //hasmap[s[i]]++ when both upper and lower alphabets are present

  //frequency
  int t;
  cin>>t;
  while(t--){
    char f;
    cin>>f;
    cout<<hasmap[f-'a']<<endl; //hasmap[f] when both upper and lower alphabets are present

  }

   

    return 0;
}

