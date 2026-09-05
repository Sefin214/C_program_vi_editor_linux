int factorial(int n){
	if(n==1)
		return(1); //stoping logic, to return 1 when number reduces to 1
	else
		return(n*factorial(n-1));  //returns number*factorial of number-1
}
