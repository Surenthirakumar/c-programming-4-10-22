#include<stdio.h>
int main(){
      int n;
    printf("Enter size of the array:\n");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter array elements:\n");
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
int temp;
 int j;
 for (i=1;i<=n;++i){
   for (j=i+1;j<=n;++j){
      if (a[i] < a[j]){
         temp= a[i];
         a[i]=a[j];
         a[j]=temp;
      }
   }
}
int N,M;
scanf("%d %d",&M,&N);
if(M>0&&N>0){
printf("%d %d",(a[M]+a[(n)-(N-1)]),(a[M]-a[(n)-(N-1)]));
}
else{
    printf("Enter correct postition");
}
}
