// Type Content here...
#include <stdio.h>
int main(){
	int op;
	
	scanf("%d",&op);
	switch(op){
		case 1:{
			double a,b;
			scanf("%lf %lf",&a,&b);
			printf("Sum: %.2lf\n",(a+b));
			break;
		}
		case 2:{
			double a,b;
			scanf("%lf %lf",&a,&b);
			printf("Difference: %.2lf\n",(a-b));
			break;
		}
		case 3:{
			double a,b;
			scanf("%lf %lf",&a,&b);
			printf("Product: %.2lf\n",(a*b));
			break;
		}
		case 4:{
			double a,b;
			scanf("%lf %lf",&a,&b);
			if(b==0) printf("Division by zero is not allowed\n");
			else{
				printf("Quotient: %.2lf\n",a/b);
			}
		break;
		}
		case 5:{
			int a,b;
			scanf("%d %d",&a,&b);
			while(a>0 && b>0){
				if(a>b) a=a%b;
				else b=b%a;
			}
			if(a==0) printf("HCF: %d\n",b);
			else printf("HCF: %d\n",a);
		// 	int n,temp;
		// 	if(a<b) n=a;
		// 	else n = b;
		// 	for(int i = 1;i<=n;i++){
		// 		if(a%i == 0 && b%i == 0) temp = i;
		// }
		// 	printf("HCF: %d\n",temp);
		break;
		}
		case 6:{
			int a,b;
			scanf("%d %d",&a,&b);
			int x= a,y = b;
			int hcf,lcm;
			while(a>0 && b>0){
				if(a>b) a=a%b;
				else b=b%a;
			}
			if(a==0) hcf = b;
			else hcf = a;
			lcm = (x*y)/hcf;
			printf("LCM: %d\n",lcm);
			// int n;
			// if(a>b) n = a;
			// else n = b;
			// for(int i = n;i<=a*b;i++){
			// 	if(i%a == 0 && i%b == 0){
			// 		printf("LCM: %d\n",i);
			// 		break;
			// 	}
			// }
		break;
		}
		
		default:
			printf("Invalid choice\n");
			break;
		
		}
	return 0;
}