#include <iostream>

using namespace std;
// int main(){
//     int userPin=1234,pin,errorCounter=0;

//     do{
//         cout<<"PIN ";
//         cin>>pin;
//         if(pin!=userPin)
//         errorCounter++;

//     }while (errorCounter<3 && pin!=userPin);

//     if(errorCounter<3)
//     cout<<"System is Loading...";
//     else
//     cout<<"Pin is wrong Bloacked...";
//     {
//         /* code */
//     }
    
// }

// ==========================================

// int main(){
//     int UserPin=1234,pin,errorCounter;
    
//     do{
        
//         cout<<"Login with your PIN: ";
//         cin>>pin;
//         if(pin!=UserPin)
//         errorCounter++;
//     }while (errorCounter<3 && pin!=UserPin);

//     if(errorCounter<3)
//     cout<<"System is loading...";
//     else
//     cout<<"Your PIN is wrong...";
//     {
//         /* code */
//     }
    
// }

// ========================================

// int main(){
//     int userPassword=1234,password,errorCounter=0;

//     do{
//         cout<<"enter your user password! ";
//         cin>>password;
//         if (password!=userPassword)
//         errorCounter++;
        
//     } while (password!=userPassword && errorCounter<3);
//     if(password==userPassword){
//         cout<<"System is Loading...";

//     }
//     else{
//         cout<<"Your password is wrong";
//     }
    
//     return 0;
// }

// ==============================================


int main(){
    int userPassword=1234 ,password,errorCounter=0;
    cout<<"Enter your user Password: ";

    while(password!=userPassword && errorCounter<3){
        cin>>password;
        if (errorCounter<3){
            errorCounter++;
        }
        
    }
     
        if (password == userPassword){
            cout<<"System is Loading...";
        }
        else {
            cout<<"Password is wrong! ";
        }
    return 0;
    
}