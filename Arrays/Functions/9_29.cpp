#include<iostream>
#include<string>
using namespace std;
struct play{
    string playerName;
    int runs;
    int innings;
    int timesNotOut;
};
int main()
{
    play p[5];
    for(int i=0; i<5 ; i++){
        cout<<"Enter details of player "<<i+1<<":\n";
        

        cout<<"Name: ";
        cin.ignore();
        getline(cin,p[i].playerName);
        cout<<"Runs: ";
        cin>>p[i].runs;

        cout<<"Innings: ";
        cin>>p[i].innings;

        cout<<"Times Not out: ";
        cin>>p[i].timesNotOut;
    }
    return 0;
}