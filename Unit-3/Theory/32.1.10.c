void decimalToBinary(int n){
	if(n==0){
		printf("0");
		return;
	}
	int binary[32];
	int index = 0;
	while(n>0){
		binary[index++]=n%2;
		n /=2;
	}
	for(int i = index-1;i>=0;i--){
			printf("%d",binary[i]);
	}
}

void decimalToHex(int n){
	if(n==0){
		printf("0");
		return;
	}
	char hexDigit[]="0123456789ABCDEF";
	char hex[32];
	int index = 0;
	while(n>0){
		hex[index++] = hexDigit[n%16];
		n /= 16;
	}
	for(int i = index-1;i>=0;i--){
		printf("%c",hex[i]);
	}
}