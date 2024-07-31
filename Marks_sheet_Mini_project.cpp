#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    string name;
    int n1 , n2;
    cout<<"Enter your name: "; getline(cin,name);
    cout<<"Enter number of subjects having 100 marks: "; cin>>n1;
    cout<<"Enter number of subjects having 50 marks: "; cin>>n2;
    int marks[n1] ,_marks[n2] ,total , obt = 0 ;
    double per ;
    char grade ;
    
    for(int i=0 ; i<n1 ; i++){
        cout<<"Enter marks of 100 marks subject "<<i+1<<" : "; 
        cin>>marks[i];
        obt = obt + marks[i];
    }
    cout<<endl;
for(int i=0 ; i<n2 ; i++){
    cout<<"Enter marks of 50 marks subject "<<i+1<<" : ";
    cin>>marks[i];
    obt = obt + marks[i];
}
cout<<endl;
total = (n1*100) + (n2*50) ;
per = (obt*100)/total ; 
cout<<"Your marks are "<<obt<<"/"<<total<<endl;
cout<<"Your Percentage is "<<per<<endl;
if(per >= 80){
    grade='A';
}else if( per >=70){
    grade='B';
}else if( per >=60){
    grade='C';
}else if(per >= 50){
    grade='D';
}else if(per >=40 ){
    grade='E';
}
else{
    grade='F';
}
cout<<"Your Grade is '"<<grade<<"'"<<endl;

if(grade=='A' || grade=='B' || grade=='C'|| grade=='D'|| grade=='E' ){
    cout<<"Congratulations! "<<name<<" you have been passed."<<endl;
}
else{
    cout<<"You have been failed! "<<endl;
}

    return 0;
}


