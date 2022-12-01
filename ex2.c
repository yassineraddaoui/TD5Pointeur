#include<stdio.h>
#include<stdlib.h>
void tailleN(int *n){
    do{
    printf("TAILLE TABLEAU : ");
    scanf("%d",n);
    }
    while(*n<1|| *n>20);
}
void afficher(int *tab,int n){
    for (int i=0;i<n;i++){
        printf("T[%d] = %d\n",i,*(tab+i));
    }
    printf("-----------\n");
}
void remplir(int *tab,int n){
    for(int i=0;i<n;i++){
        do{
            printf("T[%d] = ",i);
            scanf("%d",tab+i);
        }
        while(*(tab+i)!=0&&*(tab+i)!=1);
    }
}
int compresser(int* t, int n, int *t1){
    int count=0;
    for (int i=1;i<n;i++){
        if(*(t+i)!=*(t+i+1)){
            *(t1+count)=*(t+i);
            count++;
        }
    }
    return count;
}
int main(){
    int n,count;
    tailleN(&n);
    int *t=(int*)malloc(sizeof(int)*n);
    int *t1=(int*)malloc(sizeof(int)*n);

    remplir(t,n);

    count=compresser(t,n,t1);
    afficher(t1,count);
}
