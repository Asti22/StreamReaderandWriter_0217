#include <iostream>
#include <exception>
//untuk obyek exception yang akan digunkan 
#include <array>
//untuk obyek array yang akan kita gunakan 
using namespace std;
int main(){
    cout <<"Awal program "<<endl; //penanda 1
    try {
        array <int, 3> data = {3, 5, 7};
        //pesan array integer 3 element
        cout << data.at(5)<<endl;
        //memanggil arrray element ke 5
    }
    catch (exception& e){
        //penangkap menggunakan obyek exception
        cout <<e.what()<<endl;
        /*akan diekskusi karna array data hanya memiliki 3 elemen*/


    }
    cout <<"Baris program yang terakhir"<<endl;
    /*penanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/
    return 0;
}