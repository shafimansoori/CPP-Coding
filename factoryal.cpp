#include <iostream>
using namespace std;

int main(){

// 4!=4*3*2*1=24
    int factoryalNO,no,result=1;

    cout<<"Enter factoryal no: ";
    cin>>factoryalNO;
    for(no=1,no<=factoryalNO,no++){
        result *=no;
    }
    cout<<result;

return 0;

    // for(factoryal=1;factoryal<=6;factoryal++){
    //     toplam *=factoryal;
        
    // }
    // cout<<toplam;
    

}