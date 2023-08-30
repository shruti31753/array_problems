pair<long long, long long> getMinMax(long long a[], int n) {
    long long int max = 0;
    long long int min = 0;
    
    sort(a,a+n);
    
    min = a[0];
    max = a[n-1];
    
        pair<long long, long long>ans;
        ans.first = min;
        ans.second = max;
        return ans;
    
}
