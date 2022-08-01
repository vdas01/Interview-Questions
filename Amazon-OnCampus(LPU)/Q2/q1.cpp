


#include <bits/stdc++.h>
using namespace std;
    map<string,string>regi;
 map<string,string>login;
string registerr(string username,string pass){
    if( regi.find(username) == regi.end()){
        regi.insert({username,pass});
        return "Registered Successfully";
    }
    else {
    return "Username already exists";
    }
}
string loginf(string username,string pass){
     if(regi.find(username) != regi.end()){
         
         if(regi[username] == pass){
         login.insert({username,pass});
         return "Log In Successfully";
         }
         else 
         return "Login Unsuccessful"; 
     }
     else{
        return "Login Unsuccessful";   
     }
}
string logout(string username,string pass){
    if(login.find(username) != login.end()){
        login.erase(username);
        return "Logged Out Successfully";
    }
    else {
    return "Logout Unsuccessful";
    }
    
}
vector<string> implementAPI(vector<string> logs) {
    vector<string>ans;
     vector<string>v;
     int n = logs.size();
     for(int i=0;i<n;i++){
          v.clear();
         string str = logs[i];
         istringstream ss(str);
         string word;
         while(ss >> word){
             v.push_back(word);
         }
         if(v[0] == "register"){
           ans.push_back(registerr(v[1],v[2]));
         }
         else if(v[0] == "login")
         ans.push_back(loginf(v[1],v[2]));
         else 
         ans.push_back(logout(v[1], v[2]));
     }
     return ans;
}
int main(){
    vector<string>logs;
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        string str;
        getline(cin,str);
      logs.push_back(str);
    }
    vector<string>ans  = implementAPI(logs);
   for(int i=0;i<ans.size();i++){
       cout<<ans[i]<<"\n";
   }
}

