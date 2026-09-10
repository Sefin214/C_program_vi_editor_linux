int numsum(int n){
	if(n==1)
		return(1);
	else
		return(n+numsum(n-1));
}

