long long MaxSum(long long int A[], long long int B[], long long int N) {
    // complete the function here
    sort(A,A+N);
    sort(B,B+N);
    
    long long sum=0;
    for(long long i=N-1;i>=0;i--){
        sum+=(A[i]*B[i]);
    }
    return sum;
}