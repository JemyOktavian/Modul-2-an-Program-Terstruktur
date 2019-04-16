#include <iostream>
#include <conio.h>
using namespace std;
int main()
{



    char lagi,menu;
    int pilih,nilai;
    int n,c,a,b;
    int spasi,g,i,d,j;
    int z=1;
    do
    {
        cout<< "================================\n";
        cout<< "|       MACAM MACAM BENTUK     |\n";
        cout<< "================================\n";
        cout<< "|    1. Segitiga Siku          |\n";
        cout<< "|    2. Segitiga Sama Kaki     |\n";
        cout<< "|    3. Persegi                |\n";
        cout<< "|    4. Keluar                 |\n";
        cout<< "|                              |\n";
        cout<< "================================\n";
        cout<< "Masukkan pilihan anda 1-5 : ";
        cin>>pilih;
        cout<< "\n";

        switch(pilih)
        {
        case 1:

            cout<<"Masukkan Batas Nilai :";
            cin>>nilai;

            for(int a = 1; a <= nilai; a++)
            {
                for(int b = 1; b <= a; b++)
                {
                    cout<<b<<" ";
                }
                cout<<endl;
            }
            break;

        case 2:
            cout<<"Masukkan Batas Nilai : ";
            cin>>n;
            for (a=0; a<=n; a++)
            {
                for (c=a; c<=n; c++)
                {
                    cout<<" ";
                }
                for (c=1; c<=a; c++)
                {
                    cout<<c<<" ";
                }
                for (c=1; c<c; c++)
                {
                    cout<<c<<"  ";
                }
                cout<<endl;
            }

            break;
        case 3:
            cout<<"Masukkan Batas Nilai : ";
            cin>>spasi;
            for(g=1; g<=spasi; g++)
            {
                for(d=1; d<=spasi; d++)
                {
                    cout<<" ";
                }
                for(d=1; d<=spasi; d++)
                {
                    cout<<d<<" ";
                }
                {
                    cout<<endl;
                }
            }
        }
        cout << "Ulang ? (y/t) ";
        cin >> menu;
    }
    while(menu == 'Y' || menu == 'y');
    cout<<"Keluar dari loop"<<endl;
    return 0;

}
