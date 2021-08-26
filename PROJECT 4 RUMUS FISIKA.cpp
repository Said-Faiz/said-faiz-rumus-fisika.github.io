#include<iostream>
#include<conio.h>
using namespace std;

int main ()
 
 {
 
 {
 char ulang;
 do
 {	
 double x, m, g, h, v, W, F, t, costeta, s, Ek, Ep, Em, P, deltaEk, v1, v2 ;
 double deltaEP, h1, h2;
 cout<<"  RUMUS FISIKA BY SAID"<<endl;
 cout<<"  1. Usaha"<<endl;
 cout<<"  2. Energi Kinetik"<<endl;
 cout<<"  3. Energi Potensial"<<endl;
 cout<<"  4. Energi Mekanik"<<endl;
 cout<<"  5. Daya "<<endl;
 cout<<"  6. Hubungan antara Usaha dan EK(W = deltaEK) "<<endl;
 cout<<"  7. Hubungan antara Usaha dan EP(W = deltaEP) "<<endl;
 cout<<"Ingat ubah dulu kedalam satuan SI untuk yang diketahui nya"<<endl;
 cout<<"Pilih Nomor urut rumus diatas"<<endl;
 cin>>x;
 if (x==1)
 {cout<<"Menghitung Usaha"<<endl;
 cout<<"========================================"<<endl;
 cout<<" "<<endl;
 cout<<"Masukkan F : "<<endl;
 cin>>F;
 cout<<"Masukkan costeta : "<<endl;
 cin>>costeta;
 cout<<"masukan s : "<<endl;
 cin>>s;
 W=F*costeta*s;
 cout<<"Usaha yang dihasilkan dengan Gaya = "<<F<<" dan "<<" ,costeta = "<<costeta<<" dan "<<" ,Jarak =  "<<s<<" adalah = "<<W<<endl;
}
 if (x==2)
 {cout<<"Menghitung Energi Kinetik"<<endl;
 cout<<"========================================"<<endl;
 cout<<" "<<endl;
 cout<<"Masukkan m : "<<endl;
 cin>>m;
 cout<<"Kecepatan Benda : "<<endl;
 cin>>v;
 Ek=(m*v*v)/2;
 cout<<"Energi Kinetik yang dihasilkan dengan Massa =  "<<m<<" dan "<<" ,Kecepatan Benda = "<<v<<" adalah = "<<Ek<<endl;
}
 if (x==3)
 {cout<<"Menghitung Energi Potensial"<<endl;
 cout<<"========================================"<<endl;
 cout<<" "<<endl;
 cout<<"Masukkan m : "<<endl;
 cin>>m;
 cout<<"Kecepatan Gravitasi : "<<endl;
 cin>>g;
 cout<<"Ketinggian Benda : "<<endl;
 cin>>h;
 Ep=m*g*h;
 cout<<"Energi Potensial yang dihasilkan dengan Massa = "<<m<<" dan "<<" ,Kecepatan Gravitasi = "<<g<<"dan"<<" ,Ketinggian Benda =  "<<h<<" adalah = "<<Ep<<endl;

}
 if (x==4)
 {cout<<"Menghitung Energi Mekanik"<<endl;
 cout<<"========================================"<<endl; 
 cout<<" "<<endl;
 cout<<"Masukkan m : "<<endl;
 cin>>m;
 cout<<"Kecepatan Gravitasi : "<<endl;
 cin>>g;
 cout<<"Ketinggian Benda : "<<endl;
 cin>>h;
 cout<<"Masukkan m : "<<endl;
 cin>>m;
 cout<<"Kecepatan Benda : "<<endl;
 cin>>v;
 Em=((m*g*h)+(m*v*v)/2);
 cout<<"  Energi Mekanik yang dihasilkan dengan Massa = "<<m<<" dan "<<" ,Kecepatan Gravitasi = "<<g<<"dan"<<" ,Ketinggian Benda =  "
 <<"Energi Kinetik dengan Massa =  "<<m<<" dan "<<" ,Kecepatan Benda = "<<v<<" adalah = "<<Em<<endl;
}
if (x==5)
{cout<<"Menghitung Daya"<<endl;
 cout<<"========================================"<<endl;
 cout<<" "<<endl;
 cout<<"Masukkan W(Usaha) : "<<endl;
 cin>>W;
 cout<<"Masukan Waktu dalam sekon 't' : "<<endl; 
 cin>>t;
 P= W/t;
 cout<<"Daya yang dihasilkan dengan Usaha yang didapat sebesar = "<<W<<" dan "<<" , Waktu = "<<t<< " adalah = "<<P<<endl;
}
if (x==6)
{cout<<"Hubungan antara Usaha dan EK(W = deltaEK)"<<endl;
 cout<<"========================================"<<endl;
 cout<<" "<<endl;
 cout<<"Masukkan massa : "<<endl;
 cin>>m;
 cout<<"Kecepatan Benda 1 : "<<endl;
 cin>>v1;
 cout<<"Kecepatan Benda 2 : "<<endl;
 cin>>v2;
 deltaEk = (m*((v2*v2)-(v1*v1)))/2;
 cout<<"deltaEk yang dihasilkan dengan massa yang didapat sebesar = "<<m<<" dan "<<" , Kecepatan Benda 1  = "<<" , Kecepatan Benda 2 = "<<v2<< " adalah = " <<deltaEk<<endl;
}
if (x==7)
{cout<<"Hubungan antara Usaha dan EP(W = deltaEP)"<<endl;
 cout<<"========================================"<<endl;
 cout<<" "<<endl;
 cout<<"Masukkan massa : "<<endl;
 cin>>m;
 cout<<"Kecepatan Gravitasi : "<<endl;
 cin>>g;
 cout<<"Ketinggian Benda 1 : "<<endl;
 cin>>h1;
 cout<<"Ketinggian Benda 2 : "<<endl;
 cin>>  h2;
 deltaEP = m*g*(h2-h1) ;
 cout<<"deltaEP yang dihasilkan dengan massa yang didapat sebesar = "<<m<<" dan "<<" , Ketinggian Benda 1  = "<<h1<<" , Ketinggian Benda 2 = "<<h2<< " adalah = " <<deltaEP<<endl;
}
 cout<<"Ingin Mencari Rumus lagi ?"<<endl;
 cout<<"Jika iya pilih 'y' dan jika tidak pilih 'n'  : "<<endl; 
 cout<<"Pilihan (y/n) : "; cin>>ulang;
}
while(ulang=='y' ||ulang=='Y' );
cout<<"OKEY terima kasih"<<endl;
getch();
}

getch();
}

