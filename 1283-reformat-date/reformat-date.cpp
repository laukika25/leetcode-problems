class Solution {
public:
void setmonth(unordered_map<string,string>& mp){
        mp["Jan"] = "01";
        mp["Feb"] = "02";
        mp["Mar"] = "03";
        mp["Apr"] = "04";
        mp["May"] = "05";
        mp["Jun"] = "06";
        mp["Jul"] = "07";
        mp["Aug"] = "08";
        mp["Sep"] = "09";
        mp["Oct"] = "10";
        mp["Nov"] = "11";
        mp["Dec"] = "12";
}
string reformatDate(string date) {
    int n = date.size();
    unordered_map<string,string>mp;
    setmonth(mp);
    string ans = "";    
     if(n == 13){
        ans = date.substr(9, 4) + "-" + mp[date.substr(5, 3)] + "-" + date.substr(0, 2);
     }
     else{
        ans = date.substr(8, 4) + "-" + mp[date.substr(4, 3)] + "-0" + date.substr(0,1);
     } 
     return ans;  
        
}
};