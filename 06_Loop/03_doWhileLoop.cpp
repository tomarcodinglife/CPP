#include <iostream>
#include <string>

using namespace std;

int main(){

    string response;

    do{
        cout << "Do want tea (yes or no) ";
        getline(cin, response);
        
    } while (response != "no" && response != "No"); 
    
    return 0;
}