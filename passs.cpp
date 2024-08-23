#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
string getPassword(int length){
    string Password = " ";
    string character = " aquickbrownfoxjumpsoverthelazydogAQUICKBROWNFOXJUMPSOVERTHELAZYDOG0123456789";
    int charSize = character.size();
    srand(time(0));
    int randomIndex;
    for ( int i = 0; i<length; i++){
        randomIndex = rand() % character.size();
        Password = Password + character [randomIndex];



    }
    return Password;
}
int main (){
    int length ;
    cout<<" enter the length of the passwoord ::";
    cin>>length;
    string password = getPassword(length);
    cout<<" genrated password ::" <<password;
    return 0;


}