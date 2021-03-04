#include <iostream>
#include <string>

using namespace std;

int main() {
    int num , comptador = 0;
    cout << "Entra el num de paraules";
    cin >> num;
    while (num < 0) {
        // si el numero es negatiu, demana until it isn't
        cout << "Entra el num de paraules";
        cin >> num;
    }
    cout << "Entra les cadenes";
    string big_str, str;
    //cin >> big_str;  // aixi al primer WS que troba, la funcio .length() no em torna les altres paraules...
    // fare servir getline per tenir el length total! (amb espais inclosos!!!)
    cin.ignore(); //https://stackoverflow.com/questions/12691316/getline-does-not-work-if-used-after-some-inputs
    // el cin.ignore a vegades fa que elimini el primer caràcter....
    getline(cin,big_str);
    str = big_str;
    
    cout << "tota la frase:" << big_str << endl; //.substr();
    /*cout <<"sense primera paraula"<< big_str.substr(big_str.find(' '));
    cout << "--\n";
    cout << "length primera paraula: " << big_str.find(' '); // de 0 a x
    cout << "--\n";
    cout << "la primera paraula sera: " << big_str.substr(0,big_str.find(' '));*/

    while (comptador < num){
        // ara hem de separar la frase gran "tinc molta gana" en "'tinc' 'molta' 'gana'" (length = 15)
        // length paraula:
        int len = str.find(' ');
        //paraula:
        string paraula = str.substr(0,len +1); 
        // si no troba cap altre espai es q es la ultima paraula:
        if (len == -1) { paraula = str;}
        else {str = str.substr(len +1);}
        // imprimim paraula
        cout << "paraula" << comptador << ":" << paraula;
        
        //cout << "str111:" << str;
        comptador++;
    }

    return 0;
}
