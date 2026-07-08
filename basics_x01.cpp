#include<iostream>
using namespace std;

int main(){
    int age;
    cin >> age;

    if(age>50){
        cout << "you are old";
    }
    else if(age<50 and age>=20){
        cout << "You are middle aged";
    }
    else if(age<20 and age>=13){
        cout << "You are a teen";
    }
    else{
        cout << "go to mama";
    }
};
