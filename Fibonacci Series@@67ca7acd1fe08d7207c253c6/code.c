int fibonacciSeries(int n){
    int a=0;
    int b=1;
    int c;
    printf("%d %d ",a,b);
    for(int i=0;i<n-2;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }

}