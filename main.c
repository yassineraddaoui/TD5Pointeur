#include <stdio.h>
#include <stdlib.h>
int saisie_Taille(){
    int n;
    do{
        printf("Taille tab= ");
        scanf("%d",&n);
    }
    while (n>20 && n<1);
return n;
}
void remplir(int *tab,int n){
    for(int i=0;i<n;i++){
        printf("T[%d] = ",i);
        scanf("%d",tab+i);

    }
}
void afficher(int *tab,int n){
    for (int i=0;i<n;i++){
        printf("T[%d] = %d\n",i,*(tab+i));
    }
}

void Diviser_Tab(int* tab, int n,int* tab1, int* tab2){
    int i1=0,i2=0;
    for(int i=0;i<n;i++){
        if(*(tab+i)%2==0){
            *(tab1+i1)=*(tab+i);
            i1++;
        }
        else{
            *(tab2+i2)=*(tab+i);
            i2++;
        }
    }
}
int countPaire(int* tab,int n){
    int count=0;
    for (int i=0;i<n;i++){
        if(*(tab+i)%2==0){
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    n=saisie_Taille();
    int *t=(int*)malloc(sizeof(int)*n);
    remplir(t,n);
    int paire=countPaire(t,n);
    int *t1=(int*)malloc(sizeof(int)*paire);
    int *t2=(int*)malloc(sizeof(int)*(n-paire));
    Diviser_Tab(t,n,t1,t2);
    printf("\n------------\n");
    afficher(t1,paire);
    printf("\n------------\n");
    afficher(t2,n-paire);
    return 1;
}
