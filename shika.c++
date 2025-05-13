#include<iostream>
#include<string>
#include<cctype>
using namespace std;


 bool validatePassword( const string password)
 {
    bool hasUpper  = false, hasLower = false, hasDigit =false, hasSpecial = false;
    
   if (password.length() < 8)
    
    return false;
      
 
  
  for (char c : password) {   
      if(isupper (c)) hasUpper = true;
      else if (islower(c)) hasLower =true;
      else if (isdigit (c)) hasDigit =true;
      else hasSpecial = true;
  }     

   return hasUpper && hasLower && hasDigit && hasSpecial; 
     
 }
 int main(){
     string password;
     cout <<"enter password:" << endl;
     cin>> password;
     
     if (validatePassword(password))
     {
         cout<<"password is valid and strong" << endl;
     }
     else  { 
         cout<<"password is weak must contain at least 8 characters, lowercase, uppercase and special characters." << endl;
     }
 }
