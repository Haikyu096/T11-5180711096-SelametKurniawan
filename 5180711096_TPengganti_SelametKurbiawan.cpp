#include<iostream>

using namespace std;

main()
{

    int jumlah,jml[10],j,tot=0,total,h,harga[10],ketemu,totd;\
    int tmp;
    string nama,na,member, nama1[5]{"Bayu","Irvan","Susanti","Diana","Roni"},nomor[5]{"A001","A002","A003","A007","A008"},id;

    cout<<"SELAMAT DATANG DI TOKO KAMI";
    cout<<"\n___________________________\n";
    cout<<"\n\nApakah Anda Member(ya/tidak)?";
    cin>>member;
    if(member=="ya")
    {
        cout<<"\nMasukan Nomor:";
        cin>>id;
        ketemu=0;
        for(int i=0;i<5;i++)
        {
            if(id == nomor[i])
            {   ketemu=1;
                cout<<"Nama Member:"<<nama1[i];}
        }
        cout<<"\nMasukan Jumlah Barang Yang DiBeli : "; cin>>jumlah;
        cout<<"________________________________________"<<endl;

        for(int i=1;i<=jumlah;i++)
        {
            cout<<"\nMasukan nama barang : ";
            cin>>na;
            cout<<"\nMasukan Harga Barang: Rp. ";
            cin>>harga[i];
            cout<<"\nMasukan Jumlah      : ";
            cin>>jml[i];j=jml[i]*harga[i];
            tot=tot+j;
            cout<<"___________________________"<<endl;
        }
        cout<<"Total                 : Rp."<<tot;
        cout<<"\nAnda Mendapatkan Diskon 5%";totd=tot*0.05;
        total=tot-totd;
        cout<<"\nTotal Setelah Diskon: Rp."<<total;
        for(int i=1;i<=jumlah;++i)
        {
            for(int j=1;j<=(jumlah-i);++j)
                if(harga[j]>harga[j+1])
                {
                    tmp=harga[j];
                    harga[j]=harga[j+1];
                    harga[j+1]=tmp;
                }
        }
        cout<<"\nHarga Diurutkan Dari termurah-termahal:";
        for(int i=1;i<=jumlah;i++)
        cout<<"\nRp."<<harga[i]<<endl;
        cout<<"\nNama anda       :"<<nomor[5];
        cout<<"\nJumlah Belanjaan:"<<jumlah;
        cout<<"\nTotal Harga Sebelum Di Diskon: Rp."<<tot;
        cout<<"\nTotal Harga Di Diskon        : Rp."<<total;


    }
    else if(member=="tidak")
    {
        cout<<"\nMasukan Nama         :";
        cin>>nama;
        cout<<"\nMasukan Jumlah Barang:";
        cin>>jumlah;
        for(int i=1;i<=jumlah;i++)
        {
            cout<<"\nMasukan Harga Barang "<<i<<" Rp.";
            cin>>harga[i];
            cout<<"\nMasukan Jumlahnya "<<i<<":";
            cin>>jml[i];j=jml[i]*harga[i];
            tot=tot+j;
        }
         cout<<"Total   : Rp."<<tot;
}

}
