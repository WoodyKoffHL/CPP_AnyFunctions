#include <iostream>
#include <string>
#include "CPP_Connectors.h"
using namespace std;


int main()
{
    // First main branch - This File
    cout << "Connect on CPP\n\n************************\n\n";
    string Login, Password, Token = "";
    cout << "Login:\n";
    cin >> Login;
    cout << "Password:\n";
    cin >> Password;
    cout << "Token: dio4klsdtg3o4lmnsdlom34 \n request: 200\n";

   // Token = GetToken(Login, Password, Token);
    // Add to Git
}
   
// Main content
string GetToken(string Login, string Password, string Token) {
        Token = Login + Password;
        return Token;
}
// - Main content

