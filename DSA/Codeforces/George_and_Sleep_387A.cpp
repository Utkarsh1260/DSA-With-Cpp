#include<iostream>
#include<string>
using namespace std;

int main(){
    string s,t;

    cin >> s >> t;

   int sh=(s[0]-'0')*10 + (s[1]-'0');
   int sm=(s[3]-'0')*10 + (s[4]-'0');

   int th=(t[0]-'0')*10 + (t[1]-'0');
   int tm=(t[3]-'0')*10 + (t[4]-'0');

   int current_time= sh*60+sm;
   int sleep_time= th*60+tm;

   int bed_time=current_time-sleep_time;

   if(bed_time<0)
   bed_time+=24*60;



   int ph = bed_time / 60;
    int pm = bed_time % 60;


    string result = "";

    if(ph < 10) result += "0";
    result += to_string(ph);
    result += ":";

    if(pm < 10) result += "0";
    result += to_string(pm);

    cout << result;

    return 0;

    return 0;
}