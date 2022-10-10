int mx_factorial_iter(int n) {
    if (n == 0)
    	return 1;
    if (n < 0 || n > 12)
        return 0;
    
    int res = 1;

    for (int i = 1; i <= n; i++) {
        res = res * i;
    }

    return res;
}

