#include <stdio.h>
int main(){
	float a,b,c;
	printf("Nhap a=");
	scanf("%f",&a);
	printf("Nhap b=");
	scanf("%f",&b);
	printf("Nhap c=");
	scanf("%f",&c);
	
	if(a==0){
		// Yes
		if(b==0){
			// Yes 
			if(c==0){
				// Yes
				printf("phuong trinh vo so nghiem");
			}else{
				// No
				printf("phuong trinh vo nghiem");
			}
		}else{
			// No
			float x = -c/b;
			printf("ket qua: %f",x);
		}
	}else{
		// No
		if(b==0){
			// Yes
			if(c==0){
				// Yes
				float x = 0;
				printf("ket qua: %f",x);
			}else{
				// No
				if(a*c>0){
					// Yes
					float x1 = -(sqrt(c/a));
					float x2 = sqrt(c/a);
					printf("ket qua: %f",x1,x2);
				}else{
					// No 
					printf("phuong trinh vo nghiem");
				}
			}
		}else{
			// No
			if(c==0){
				// Yes
				float x1 = 0;
				float x2 = -b/a;
				printf("ket qua: %f",x1,x2);
			}else{
				// No
				float D = b*b - 4*a*c;
				if(D>0){
					// Yes
					float x1 = (-b + sqrt(D)) / (2*a);
					float x2 = (-b - sqrt(D)) / (2*a);
					printf("ket qua: %f",x1,x2);
				}else{
					// No
					if(D<0){
						// Yes
						printf("phuong trinh vo nghiem");
					}else{
						// No
						float x1 = (-b)/(2/a);
						float x2 = (-b)/(2/a);
						printf("ket qua: %f",x1,x2);
					}
				}
			}
		}
	}
}
