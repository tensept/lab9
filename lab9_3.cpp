#include <iostream>
using namespace std;
int main(){
    int age;
    float height;
    long int bounty;
    string name;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 25){
         cout << "Enter your height: ";
         cin >> height;
         if(height < 100 ){
            name = "Chopper";
         }
         else if(height < 180){
            name = "Usopp";
         }
         else{
            cout << "Enter your bounty: ";
            cin >> bounty;
            if(bounty > 1100000000){
                name = "Zoro";
            }
            else{
                name = "Sanji";
            }
         }
    }
    else if(age <= 60 ){
         cout << "Enter your bounty: ";
         cin >> bounty;
         if(bounty > 500000000){
            name = "Jinbe";
         }
         else{
            name = "Franky";
         }
    }
    else{
        name = "Brook";
    }
    cout << "Your character = " << name;
    
}
