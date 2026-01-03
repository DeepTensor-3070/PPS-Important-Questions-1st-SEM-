int convertBinaryToDecimal(int b){
	if(b == 0) return 0;
	return (b%10)+2*convertBinaryToDecimal(b/10);
}