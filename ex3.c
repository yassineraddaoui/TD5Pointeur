
#include<stdio.h>
#include<stdlib.h>
int  remplirTab(int *tab,int n){


    for(int i=0;i<n;i++){
        printf("T[%d] = ",i);
        scanf("%d",tab+i);
    }
}
void afficher(int *t,int n){
    for (int i=0;i<n;i++){
        printf("%d\t",*(t+i));
    }
    printf("\n");
}

void fusionner(int *t,int *t2, int *tFusion,int n,int n2 ){
    int i=0,j=0;
    while(i<n){
        *(tFusion+i)=*(t+i);
        i++;
    }
    while(j<n2){
        *(tFusion+i+j)=*(t2+j);
        j++;
    }

}
void main(){
    int *t;
    int n;
    int *t2;
    int n2;
    int *tFusion;
    int nFusion;

    printf("Donner taille du tableau\n");
    scanf("%d",&n);
    t=(int*)malloc(n*sizeof(int));
    remplirTab(t,n);

    printf("--------------------------\n");

    printf("Donner taille du tableau 2\n");
    scanf("%d",&n2);
    t2=(int*)malloc(n2*sizeof(int));
    remplirTab(t2,n2);


    tFusion=(int*)malloc((n2+n)*sizeof(int));
    fusionner(t,t2,tFusion,n,n2);

    printf("TAB 1 :\n");
    afficher(t,n);

    printf("TAB 2 :\n");
    afficher(t2,n2);

    printf("LES DEUX TABS FUSIONNER :\n");
    afficher(tFusion,n+n2);

}
