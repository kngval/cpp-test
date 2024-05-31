#include <string>
#include <iostream>

using namespace std;
int main(){
    // FOR LOOP
    for(int x = 0; x < 10; x++){
        if(x == 3){
            continue; // using continue would skip number 3
        }
        cout << "For Loop : " << x << endl;
    }


    // DO WHILE
     int j = 0;
    do
    {
    j++;
    cout << "Do While : " << j << endl;
    } while (j < 10);

    //WHILE 

    int i = 0;  

    while(i < 10){
        i++;
        cout << "While Loop : " << i << endl;
    }
    
    return 0;
};