#include<iostream>
using namespace std;
main()
{
int x,z,y, id1=3000,id2=3500,jumlah1,jumlah2,jumlah3;
string barang1, pilih, barang2, barang3;

    cout<<"============================================"<<endl;
    cout<<"  SELAMAT DATANG DI TOKO SEDERHANA   "<<endl;
    cout<<"============================================"<<endl;
    cout<<endl;

   cout<<"CHIKI JETZET : Rp 3000 (id1)"<<endl;
   cout<<"CHITATO      : Rp 3500 (id2)"<<endl;   
   cout<<endl;
   cout<<"MASUKKAN ID BARANG  : "; cin>>barang1;
   if(barang1=="id1"){
   	cout<<"JUMLAH PEMBELIAN CHIKI JETZET  : ";
   	cin>>x;
   	jumlah1=x*id1;
   	cout<<"Total Pembelian "<<x<<" Chiki Jetzet Total Bayar  : Rp. "<<jumlah1<<endl;cout<<endl;
   	cout<<"Ingin membeli barang yang lain ? <ya/tdk>: ";cin>>pilih;
   	if(pilih=="ya"){
   		cout<<"MASUKKAN ID BARANG  : "; cin>>barang1;
   		if(barang1=="id1"){
   		cout<<"JUMLAH PEMBELIAN CHIKI JETZET  : ";
   		cin>>z;
   		y=x+z;
   		jumlah3=z*id1+jumlah1;
   		cout<<"Total Pembelian "<<y<<" Chiki Jetzet Total Bayar  : Rp. "<<jumlah3<<endl;cout<<endl;
	   }else if(barang1=="id2"){
   	cout<<"JUMLAH PEMBELIAN CHITATO  : ";
   	cin>>z;
   	jumlah3=z*id2+jumlah1;
   	cout<<"Total Pembelian "<<x<<" Chiki Jetzet dan "<<z<<" Chitato Total Bayar  : Rp. "<<jumlah3<<endl;cout<<endl;
   }else{
   	cout<<"ID BARANG TIDAK DITEMUKAN"<<endl;
   	cout<<"Total Pembelian "<<x<<" Chiki Jetzet "<<" Total Bayar  : Rp. "<<jumlah1<<endl;cout<<endl;
   }
   }else if(barang1=="id2"){
   	cout<<"JUMLAH PEMBELIAN CHITATO  : ";
   	cin>>x;
   	jumlah2=x*id2;
   	cout<<"Total Harga   : Rp. "<<jumlah2<<endl;cout<<endl;
   	cout<<"Ingin membeli barang yang lain ? <ya/tdk>: ";cin>>pilih;
   	if(pilih=="ya"){
   		cout<<"MASUKKAN ID BARANG  : "; cin>>barang1;
   		if(barang1=="id1"){
   		cout<<"JUMLAH PEMBELIAN CHIKI JETZET  : ";
   		cin>>z;
   	    jumlah3=z*id2+jumlah1;
   		cout<<"Total Pembelian "<<x<<" Chiki Jetzet dan "<<z<<" Chitato Total Bayar  : Rp. "<<jumlah3<<endl;cout<<endl;
	   }else if(barang1=="id2"){
   	cout<<"JUMLAH PEMBELIAN CHITATO  : ";
   		cin>>z;
      	y=x+z;
   		jumlah3=z*id1+jumlah1;
   		cout<<"Total Pembelian "<<y<<" Chitato Total Bayar  : Rp. "<<jumlah3<<endl;cout<<endl;
   }else{
   	cout<<"ID BARANG TIDAK DITEMUKAN"<<endl;
   	cout<<"Total Pembelian "<<x<<" Chitato "<<" Total Bayar  : Rp. "<<jumlah1<<endl;cout<<endl;
   }
   }else{
   	cout<<"ID BARANG TIDAK DITEMUKAN";
   }
}
}
}
