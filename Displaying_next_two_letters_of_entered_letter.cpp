#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    char letter , next1 , next2 ;
    cout<<"Enter letter: "; cin>>letter;
    if(letter>='a' || letter <'z' || letter>='A' || letter<'Z'){
next1=letter+1;
next2=letter+2;
    }
    else if(letter=='y'){
        next1='z';
        next2='a';
    }
    else if(letter=='Y'){
        next1='Z';
        next2='A';
    }
    else if(letter=='z'){
        next1='a';
        next2='b';
    }

    else if(letter=='Z'){
        next1='A';
        next2='B';
    }
 cout<<"The next two letters are "<<next1<<" and "<<next2<<endl;
    return 0;
}