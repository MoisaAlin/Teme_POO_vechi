#include "Problema1.h"
//int a[101][101],b[101][101],c[101][101],i,j,k,matrici,n1,n2,x,y;

int main(){
    /*
    cin>>n1;
    cout<<"\n";
    for(i=1;i<=n1;i++){
        for(j=1;j<=n1;j++){
            cin>>a[i][j];
        }
    }
    cout<<"\n";
    for(i=1;i<=n1;i++){
        for(j=1;j<=n1;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    cin>>n2;
    cout<<"\n";
    for(i=1;i<=n2;i++){
        for(j=1;j<=n2;j++){
            cin>>b[i][j];
        }
    }
    cout<<"\n";
    for(i=1;i<=n2;i++){
        for(j=1;j<=n2;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n";
    if(n1==n2){
        for(i=1;i<=n1;i++){
            for(j=1;j<=n1;j++){
                cout<<a[i][j]+b[i][j]<<" ";
            }
            cout<<"\n";
        }
    }else{
        cout<<"Nu se poate";
    }
    cout<<"\n";
    cin>>x;
    for(i=1;i<=n1;i++){
        for(j=1;j<=n1;j++){
            cout<<a[i][j]*x<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    cin>>y;
    if(y!=0){
        for(i=1;i<=n2;i++){
            for(j=1;j<=n2;j++){
                cout<<b[i][j]/y<<" ";
            }
            cout<<"\n";
        }
    }

    cout<<"\n";
    if(n1==n2){
        for(i=1;i<=n1;i++){
            for(j=1;j<=n2;j++){
                for(k=1;k<=n2;k++){
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
                cout<<c[i][j]<<" ";
            }
            cout<<"\n";
        }
    }else{
        cout<<"Nu se poate";
    }
    */

    int n,i,j,x;
    cin>>n;
    Matrice<int,1> V1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            V1.Matrice1(i,j);
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            V1.Matrice2(i,j);
        }
    }
    V1.Afisare();


}
