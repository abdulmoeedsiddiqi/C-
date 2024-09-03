//1

// #include<iostream>
// using namespace std;
// funcGrad(int & marks , char & grade){
//     if(marks>=80)
//        grade='A';
//     else if(marks>60 && marks<79)
//      grade='B';
//     else if(marks>40 && marks<59)
//      grade='C';
//     else if(marks<40)
//      grade='F';     
// }
// int main()
// {
//     int marks;
//     char grade;
//     cout<<"Enter marks: ";
//     cin>>marks;
//     funcGrad(marks,grade);
//     cout<<"Your grade is "<<grade;
//     return 0;
// }


//2

#include<iostream>
using namespace std;
char funcGrade(int & marks){
    if(marks>=80)
       return 'A';
    else if(marks>60 && marks<79)
       return 'B';    
    else if(marks>40 && marks<59)
       return 'C';     
    else if(marks<40)
    return 'F';     
}
int main()
{
       int marks;
    char grade;
    cout<<"Enter marks: ";
    cin>>marks;
    grade=funcGrade(marks);
    cout<<"Your grade is "<<grade;
    return 0; 
}