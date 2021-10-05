#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    
    int x;
    
    cout << "Inserisci il numero (0-15)" << endl;
    cin >> x;
    
    switch( x ){
        case 0:
        cout<<"Hex="<<"0";
        break;
        case 1:
        cout<<"Hex="<<"1";
        break;
        case 2:
        cout<<"Hex="<<"2";
        break;
        case 3:
        cout<<"Hex="<<"3";
        break;
        case 4:
        cout<<"Hex="<<"4";
        break;
        case 5:
        cout<<"Hex="<<"5";
        break;
        case 6:
        cout<<"Hex="<<"6";
        break;
        case 7:
        cout<<"Hex="<<"7";
        break;
        case 8:
        cout<<"Hex="<<"8";
        break;
        case 9:
        cout<<"Hex="<<"10";
        break;
        case 10:
        cout<<"Hex="<<"A";
        break;
        case 11:
        cout<<"Hex=B"<<"B";
        break;
        case 12:
        cout<<"Hex="<<"C";
        break;
        case 13:
        cout<<"Hex="<<"D";
        break;
        case 14:
        cout<<"Hex="<<"E";
        break;
        case 15:
        cout<<"Hex="<<"F";
        break;
        
        default:
            cout<<"Puoi inserire solo i numeri tra 0 e 15";
        
    }
            
    return 0;
}

