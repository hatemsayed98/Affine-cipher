#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int z;
    int c,t,r,y;
    string p,ch ,k, x,g,mn ,x1,k1,f;
    while (true){
            mn="";
            p="";
            k="";
            t=0;
            c=0;
            z=0;
    cout<<"1- cipher "<<endl;
    cout<<"2- decipher " <<endl;
    cout<<"3- end " <<endl;
    cin >>ch;
    p.erase(0,p.length());
    if(ch=="1"){
    p="";
    x="";
    k="";
    mn="";
    cout<<"Enter your message : "<<endl;
    cin.ignore();
    getline(cin,x1);
    for(int i=0; i < x1.length();i++){
                if(x1[i]==' ')
                    continue;
                else
                    x+=x1[i];}
    for (int i =0 ; i < x.length() ; i++)
        x[i] = tolower(x[i]);
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
        for (int i =0 ; i < p.length() ; i++)
        p[i] = toupper(p[i]);
        cout<<p<<endl;
    }

    else if (ch== "2"){
        cout<<"ENTER Your Encryption"<<endl;
        cin.ignore();
        getline(cin,k1);
        for(int i=0; i < k1.length();i++){
                if(k1[i]==' ')
                    continue;
                else
                    k+=k1[i];}
        for(int i = 0 ; i < k.length() ; i++)
            k[i]= tolower(k[i]);
        for(int i = 0 ; i < k.length() ; i++)
    {
            z=int (k[i]);
            z=z-97;
            z=21*(z-8);
            if(z<0){
            z=z* -1;
            z=z-16;
            }
            z=z%26;
            z=z+97;
            mn=mn+ char(z);
    }
        cout<<mn<<endl;

    }
    else if (ch== "3"){
        break;
    }

}
    return 0;
}
