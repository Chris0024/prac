#include <iostream>

using namespace std;
/*
//--------------------------------------------------------------------------------------------------
int main()
{
    int a=0,b=0;
    cin >> a;
    while(!b){
        if(a==1){b++;cout<<" es potencia de 2";};
        if(!(a%2)){a=a/2;}

        else{b++;}

    }
    return 0;
}
*/
// con FOR // PRIMOOOOOOOOOOO
/*
int main()
{
    int a=0,b=1,c =0;
    cin >> a;
    for(b=2;a>b;b++){
        if(!(a%b)){c++;};
    }
    if(c){cout<<" no es primo"<<endl;}
    else{cout<<" es primo"<<endl;}

    return 0;
}


*/




//--------------------------------------------------------------------------------------------------

/*
int main(){
    int a ,b=2 ;
    cin >> a;
    int c = 0;
    while(b<a && !c){
        if(!(a%b)){c++;};
        b++;
    };
    if(!c){cout<<a<<" es primo"<<endl;}
    else{cout<<a<<" no es primo"<<endl;}


    return 0;
}

// primmos menores aun numero
*/
//--------------------------------------------------------------------------------------------------
/*
int main(){
    cout << "hola"<<endl;
    int a=0 ,b ,limite,contador=0;
    cin>>limite;
    int c = 0;
    while(contador <limite){
        a++;

        c = 0;
        b = 2;
        while(b<a && !c){
            if(!(a%b)){c++;};
            b++;
        };
        if(!c){cout<<a<<" es primo"<<endl;}
        contador++;
    }

    return 0;
}
*/
/*
int main(){
    int a=0 ,b,c, limite,contador=0;
    cin>>limite;
    for(contador;contador<limite;contador++){
            a++;
            c =0;

            for(b=2;b<a;b++){
                if(!(a%b)){c++;};
            };
            if(!c){cout<<a<<" es primo"<<endl;}


    }

    return 0;
}
*/
//--------------------------------------------------------------------------------------------------
/////// terceroooooo PERFECTOS
/*
int main(){
    int numero;
    cin>>numero;
    int a= numero,b=1,c=0;
    while(b<a){
        if(!(a%b)){c=c+b;};
        b++;
    };
    if(c==a){cout<<a<<" es perfecto"<<endl;}
    else{cout<<a<<" no es perfecto"<<endl;}

    return 0;
}
*/
int main(){
    int numero;
    cin>>numero;
    int a= numero,b=1,c=0;
    for(b=1;b<a;b++){
        if(!(a%b)){c=c+b;};

    };
    if(c==a){cout<<a<<" es perfecto"<<endl;}
    else{cout<<a<<" no es perfecto"<<endl;}

    return 0;
}
