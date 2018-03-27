# cipher
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{

    int c = 0,t = 0,r = 0,y = 0,z = 0;
    string p = "",ch ="" ,k = "", x = "",g = "",mn = "" ;
    while (true){
    cout<<"1- cipher "<<endl;
    cout<<"2- decipher " <<endl;
    cout<<"3- end " <<endl;
    cin >>ch;
    if(ch=="1"){
    cout<<"Enter your message : "<<endl;
    cin.ignore();
    getline(cin,x);

    for (int i =0 ; i < x.length() ; i++){
        x[i] = tolower(x[i]);
    }
    for(int i=0 ;i< x.length(); i++)

    {
        c=int (x[i]);
        c=c-97;
        t=5*c +8;
        r=t%26;
        y=r+97;
        g=char (y);
        p = p + g;


    }


        for (int i =0 ; i < p.length() ; i++){
            p[i] = toupper(p[i]);
        }
        cout<<p<<endl;
            p.erase(0,p.length());

    }

    else if (ch== "2"){
        cout<<"ENTER Your Encryption"<<endl;
        cin.ignore();
        getline(cin,k);
        for(int i = 0 ; i < k.length() ; i++)
            k[i]= tolower(k[i]);
        for(int i = 0 ; i < k.length() ; i++)
    {
            z=int (k[i]);
            z=z-97;
            z=21*(z-8);
            while( z < 0 ){ z += 26; }
            z = z % 26;
            z = z + 97;

            mn= char(z);
            cout << mn;
    }
    cout << endl;

    }
    else if (ch== "3"){
        break;
    }

}
    return 0;
}
