#include "Problema1.h"

template<class T, int n>
void Matrice<T,n>::Matrice1(int a, int b){
    T c;
    cin>>c;
    matrice1[a][b] = c;
    if(a>maximactual1)
        maximactual1=a;
    if(b>maximactual1)
        maximactual1=b;
}
template<class T, int n>
void Matrice<T,n>::Matrice2(int a, int b){
    T c;
    cin>>c;
    matrice2[a][b] = c;
    if(a>maximactual2)
        maximactual2=a;
    if(b>maximactual2)
        maximactual2=b;
}
template<class T, int n>
void Matrice<T,n>::Seteaza(int a){
    maximcurent=a;
}

/*
{
}
*/
template<class T, int n>
void Matrice<T,n>::Copiaza(int a){
    if(a==1){
        int i, j;
        for(i=1;i<=maximactual1;i++){
            for(j=1;j<=maximactual1;j++){
                matricec[i][j]=matrice1[i][j];
            }
        }
    }
    if(a==2){
        int i, j;
        for(i=1;i<=maximactual1;i++){
            for(j=1;j<=maximactual2;j++){
                matricec[i][j]=matrice2[i][j];
            }
        }
    }
}

template<class T, int n>
void Matrice<T,n>::Adunare(){
    if(maximactual1!=maximactual2){
        cout<<"Nu se pot aduna";
    }else{
        int i,j;
        for(i=1;i<=maximactual1;i++){
            for(j=1;j<=maximactual1;j++){
                cout<<matrice1[i][j]+matrice2[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}
template<class T, int n>
void Matrice<T,n>::Inmultirecuscalar1(int x){
    int i,j;
    for(i=1;i<=maximactual1;i++){
        for(j=1;j<=maximactual1;j++){
            cout<<matrice1[i][j]*x<<" ";
        }
        cout<<"\n";
    }

}
template<class T, int n>
void Matrice<T,n>::Inmultirecuscalar2(int x){
    int i,j;
    for(i=1;i<=maximactual2;i++){
        for(j=1;j<=maximactual2;j++){
            cout<<matrice2[i][j]*x<<" ";
        }
        cout<<"\n";
    }
}
template<class T, int n>
void Matrice<T,n>::Inmultireintrematrici(){
    if(maximactual1!=maximactual2){
        cout<<"Nu se pot inmulti";
    }else{
        int i,j,k;
        for(i=1;i<=maximactual1;i++){
            for(j=1;j<=maximactual1;j++){
                for(k=1;k<=maximactual1;k++){
                    matrice3[i][j]=matrice3[i][j]+matrice1[i][k]*matrice2[k][j];
                }
                cout<<matrice3[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}
template<class T, int n>
void Matrice<T,n>::Ridicarelaputere(int a){
    int b,i,j;
    for(b=2;b<=a;b++){
        int i,j,k;
        for(i=1;i<=maximactual1;i++){
            for(j=1;j<=maximactual1;j++){
                for(k=1;k<=maximactual1;k++){
                    matrice3[i][j]=matrice3[i][j]+matrice1[i][k]*matrice1[k][j];
                }
            }
        }
    }
    for(i=1;i<=maximactual1;i++){
        for(j=1;j<=maximactual1;j++){
            cout<<matrice3[i][j]<<" ";
        }
        cout<<"\n";
    }
}
template<class T, int n>
void Matrice<T,n>::Afisare(){
    int i,j;
    for(i=1;i<=maximactual1;i++){
        for(j=1;j<=maximactual1;j++){
            cout<<matrice1[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    for(i=1;i<=maximactual2;i++){
        for(j=1;j<=maximactual2;j++){
            cout<<matrice2[i][j]<<" ";
        }
        cout<<"\n";
    }
}
