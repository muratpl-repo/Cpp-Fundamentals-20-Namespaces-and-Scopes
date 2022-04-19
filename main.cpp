#include <iostream>

using namespace std;

///////////////////////////////////Namespaces///////////////////////////////////


namespace MatematikselIslemler{

    float PI=3.14;
    int topla(int sayi1,int sayi2){
        return sayi1+sayi2;
    }

}

int main()
{
    using namespace MatematikselIslemler;
    cout << topla(11,88) << endl;



    ///////////////////////////////////Scopes///////////////////////////////////

    int sayi1= 15;
    int sayi2= 30;

    {
        int sayi1=20; //int kullanildigi icin sadece scope icinde gecerlidir!
        sayi2 =50;    //int kullanilmadigi icin global degiskeni ddegistirir!

        cout<<"sayi1: "<<sayi1<<endl;
        cout<<"sayi2: "<<sayi2<<endl;
    }

    cout<<"sayi1: "<<sayi1<<endl;
    cout<<"sayi2: "<<sayi2<<endl;




    return 0;
}
