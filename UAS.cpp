#include<iostream>
using namespace std;
main()
{
int x,id1=3000,id2=3500,jumlah1,jumlah2,total,bayar,tunai,sisa,diskon;
string barang1,barang2,barang3;

    cout<<"============================================"<<endl;
    cout<<"  SELAMAT DATANG DI TOKO SEDERHANA"<<endl;
    cout<<"============================================"<<endl;
    cout<<endl;

   cout<<"CHIKI JETZET : Rp 3000 (id1)"<<endl;
   cout<<"CHITATO      : Rp 3500 (id2)"<<endl;   
   cout<<endl;
   cout<<"JUMLAH PEMBELIAN CHIKI JETZET  : ";
   cin>>x;
   jumlah1=x*id1;
   cout<<"Total Harga   : Rp. "<<jumlah1<<endl;cout<<endl;

   cout<<"JUMLAH PEMBELIAN CHITATO  : ";
   cin>>x;
   jumlah2=x*id2;
   cout<<"Total Harga   : Rp. "<<jumlah2<<endl;cout<<endl;
}
