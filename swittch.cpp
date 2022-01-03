#include<iostream>
using namespace std;

int main(){

    char button;
    cout<<"input a character"<<endl;
    cin>>button;

  /*   if (button=='a'){
        cout<<"hello"<<endl;
    }
    else if (button=='b')
    {
        cout<<"namaste"<<endl;
    }
     else if (button=='c')
    {
        cout<<"salut"<<endl;
    }
     else if (button=='d')
    {
        cout<<"hola"<<endl;
    }
     else if (button=='e')
    {
        cout<<"ciao"<<endl;
    }
    else
    {
        cout<<"wrong input fcuk off"<<endl;
    } */
    
    switch (button)
    {
    case 'a':
        cout<<"hello"<<endl;
        break;

        case 'b':
        cout<<"namastey"<<endl;
        break;
        case 'c':
        cout<<"salut"<<endl;
        break;
        case 'd':
        cout<<"hola"<<endl;
        break;
        case 'e':
        cout<<"ciao"<<endl;
        break;
    
    default:
    cout<<"fcuk off"<<endl;
        break; //not required
    }

    return 0;
}