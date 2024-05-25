#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    int age;
    cout << "What's your name? :";
    getline(cin,name);
    cout << "How old are you? :";
    cin >> age;

    cout << name + ", " << age << " yrs old. " ;
    
    return 0;
}


