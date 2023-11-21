#include <iostream>
#include <string>

using namespace std;

int main()
{
    int *wsk;
    int liczba = 2;
    cout << "Wskazniki int" << endl;
    wsk = &liczba;
    cout << "Wsk= " << (int)wsk << endl;
    cout << "*Wsk= " << *wsk << endl;
    cout << "Liczba= " << liczba << endl;
    cout << "&Liczba= " << (int)&liczba << endl;
    cout << "&Wsk= " << (int)&wsk << endl;

    cout << "------------------------------------------------------------------------------------------------------------------------------------" << endl;

    string *wsk2;
    string nazwa = "bomba";
    cout << "Wskazniki string" << endl;
    wsk2 = &nazwa;
    cout << "Wsk2= " << (int)wsk2 << endl;
    cout << "*Wsk2= " << *wsk2 << endl;
    cout << "nazwa= " << nazwa << endl;
    cout << "&nazwa= " << (int)&nazwa << endl;
    cout << "&Wsk2= " << (int)&wsk2 << endl;

    cout << "------------------------------------------------------------------------------------------------------------------------------------" << endl;

    float* wsk3;
    float liczeb =105.2336;
    cout << "Wskazniki float" << endl;
    wsk3 = &liczeb;
    cout << "Wsk3= " << (int)wsk3 << endl;
    cout << "*Wsk3= " << *wsk3 << endl;
    cout << "Liczeb= " << liczeb << endl;
    cout << "&Liczeb= " << (int)&liczeb << endl;
    cout << "&Wsk3= " << (int)&wsk3 << endl;

    return 0;
}