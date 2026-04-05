void printPrimeFactorization(int n) {
    
    for (int i=2 ; i<=n ; i++){
        while(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
    }

    
}