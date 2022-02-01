#include<iostream>

using namespace std;

int main(){
    int opcion, num1,num2, suma = 0, resta = 0, multiplicacion=0,division=0;

    cout<<"Digite el primer numero: "<<endl;
    cin>>num1;
    cout<<""<<endl;
    cout<<"Digite el segundo numero: "<<endl;
    cin>>num2;
    cout<<""<<endl;
    cout<<"operacion a realiza:"<<endl;
    cout<<""<<endl;
    cout<<"1. suma"<<endl;
    cout<<"2. resta"<<endl;
    cout<<"3. multiplicacion"<<endl;
    cout<<"4. division"<<endl;
    cout<<""<<endl;
    cin>>opcion;
    cout<<""<<endl;

    switch(opcion){
    case 1 : cout<<" SUMA "<<endl;
    cout<<""<<endl;
    suma = num1 + num2;
    cout<<" El resultado es: "<<suma<<endl;
    break;

    case 2 : cout<<" RESTA "<<endl;
    cout<<""<<endl;
    resta = num1 - num2;
    cout<<" El resultado es: "<<resta<<endl;

    break;

    case 3 : cout<<" MULTIPLICACION "<<endl;
    cout<<""<<endl;
    multiplicacion = num1 * num2;
    cout<<" El resultaod es: "<<multiplicacion<<endl;
    break;

    case 4 : cout<<" DIVISION "<<endl;
    cout<<""<<endl;
    division = num1 / num2;
    cout<<" El resultado es: "<<division<<endl;
    break;


    }

    return 0;
 }
