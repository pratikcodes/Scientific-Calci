#include <stdio.h>
#include <math.h>
int mat_add(int a[10][10], int b[10][10], int p1, int q1, int p2, int q2);
int mat_subtract(int a[10][10], int b[10][10], int p1, int q1, int p2, int q2);
int mat_multiply(int a[10][10], int b[10][10], int p1, int q1, int p2, int q2);
int vector_add(int v_a[3], int v_b[3], int m1, int m2);
int vector_subtract(int v_a[3], int v_b[3], int m1, int m2);
int dot_product(int v_a[3], int v_b[3], int m1, int m2);
int cross_product(int v_a[3], int v_b[3], int m1, int m2);
int main() {
	int ch,ch2,p1,q1,p2,q2,i,j,a[10][10],b[10][10],v_a[3]={0},v_b[3]={0},m1,m2;
	float n1,n2;
	print("Welcome to the Scientific Calci\n");
	do {
		printf("1. COMP\n2. MATRIX\n3. VECTOR\n4. OFF\nYour choice: ");
		scanf("%d", &ch);
		switch(ch) {
			case 1:		printf("1. +\n2. -\n3. x\n4. \\\n5. x^-1\n6. x^2\n7. x^_\n8. log\n9. ln\n10. 10^_\n11. e^_\n12. sin\n13. cos\n14. tan\n15. arcsin\n16. arccos\n17. arctan\nYour choice: ");
						scanf("%d", &ch2);
						switch(ch2) {
							case 1:		printf("Enter n1 and n2:\n");
										scanf("%f %f", &n1, &n2);
										printf("%.2f\n", (n1+n2));
										break;
							case 2: 	printf("Enter n1 and n2:\n");
										scanf("%f %f", &n1, &n2);
										printf("%.2f\n", (n1-n2));
										break;
							case 3:		printf("Enter n1 and n2:\n");
										scanf("%f %f", &n1, &n2);
										printf("%.2f\n", (n1*n2));
										break;
							case 4: 	printf("Enter n1 and n2:\n");
										scanf("%f %f", &n1, &n2);
										printf("%.2f\n", n1/n2);
										break;
							case 5:		printf("Enter n1:\n");
										scanf("%f", &n1);
										printf("%.2f\n", 1/n1);
										break;
							case 6:		printf("Enter n1:\n");
										scanf("%f", &n1);
										printf("%.2f\n", pow(n1,2));
										break;
							case 7:		printf("Enter n1 and n2:\n");
										scanf("%f %f", &n1, &n2);
										printf("%.2f\n", pow(n1,n2));
										break;
							case 8:		printf("Enter n1:\n");
										scanf("%f", &n1);
										printf("%.2f\n", log10(n1));
										break;	
							case 9:		printf("Enter n1:\n");
										scanf("%f", &n1);
										printf("%.2f\n", log(n1));
										break;
							case 10:	printf("Enter n1:\n");
										scanf("%f", &n1);
										printf("%.2f\n", pow(10,n1));
										break;
							case 11:	printf("Enter n1:\n");
										scanf("%f", &n1);
										printf("%.2f\n", exp(n1));
										break;
							case 12:	printf("Enter n1 (radians):\n");
										scanf("%f", &n1);
										printf("%.2f\n", sin(n1));
										break;
							case 13:	printf("Enter n1 (radians):\n");
										scanf("%f", &n1);
										printf("%.2f\n", cos(n1));
										break;
							case 14:	printf("Enter n1: (radians)\n");
										scanf("%f", &n1);
										printf("%.2f\n", tan(n1));
										break;
							case 15:	printf("Enter n1:\n (output in radians)");
										scanf("%f", &n1);
										printf("%.2f\n", asin(n1));
										break;
							case 16:	printf("Enter n1:\n (output in radians)");
										scanf("%f", &n1);
										printf("%.2f\n", acos(n1));
										break;
							case 17:	printf("Enter n1:\n (output in radians)");
										scanf("%f", &n1);
										printf("%.2f\n", atan(n1));
										break;
						}
						break;
			case 2:		printf("Matrices\n1. Add\n2. Subtract\n3. Multiply\nYour choice: ");
						scanf("%d", &ch2);
						printf("MatA\nEnter rows and columns (1-3):\n");
						scanf("%d %d", &p1, &q1);
						printf("MatB\nEnter rows and columns (1-3):\n");
						scanf("%d %d", &p2, &q2);
						printf("MatA\n");
						for(i=0;i<p1;i++) {
							for(j=0;j<q1;j++)
								scanf("%d", &a[i][j]);
						}
						printf("MatB\n");
						for(i=0;i<p2;i++) {
							for(j=0;j<q2;j++)
								scanf("%d", &b[i][j]);
						}
						switch(ch2) {
							case 1: 	mat_add(a,b,p1,q1,p2,q2);
										break;
							case 2: 	mat_subtract(a,b,p1,q1,p2,q2);
										break;
							case 3:		mat_multiply(a,b,p1,q1,p2,q2);
										break;
							default: printf("Wrong choice\n");
						}
						break;	
			case 3:		printf("Vectors\n1. Add\n2. Subtract\n3. Dot product\n4. Cross product\n");
						scanf("%d", &ch2);
						printf("VctA\nEnter m (3 or 2)?\n");
						scanf("%d", &m1);
						printf("VctA\n");
						for(i=0;i<m1;i++)
							scanf("%d", &v_a[i]);
						printf("VctB\nEnter m (3 or 2)?\n");
						scanf("%d", &m2);
						printf("VctB\n");
						for(i=0;i<m2;i++)
							scanf("%d", &v_b[i]);				
						switch(ch2) {
							case 1:		vector_add(v_a,v_b,m1,m2);
										break;
							case 2: 	vector_subtract(v_a,v_b,m1,m2);
										break;
							case 3: 	dot_product(v_a,v_b,m1,m2);
										break;
							case 4: 	cross_product(v_a,v_b,m1,m2);
										break;
							default: 	printf("Wrong choice\n");
						}
						break;
			case 4:		printf("SWITCHING OFF..\n");
						break;
		}
		
	}while(ch==1 || ch==6 || ch==8);
	return 0;
}
int mat_add(int a[10][10], int b[10][10], int p1, int q1, int p2, int q2) {
	int i,j,sum[10][10]={0};
	if(p1==p2 && q1==q2) {
		for(i=0;i<p1;i++) {
			for(j=0;j<q1;j++)
				sum[i][j]=a[i][j]+b[i][j];
		}
		printf("MatA + MatB\n");
		for(i=0;i<p1;i++) {
			for(j=0;j<q1;j++)
				printf("%d\t", sum[i][j]);
			printf("\n");
		}
	}
	else
		printf("MathError\n");
}
int mat_subtract(int a[10][10], int b[10][10], int p1, int q1, int p2, int q2) {
	int i,j,subtract[10][10]={0};
	if(p1==p2 && q1==q2) {
		for(i=0;i<p1;i++) {
			for(j=0;j<q1;j++)
				subtract[i][j]=a[i][j]-b[i][j];
		}
		printf("MatA - MatB\n");
		for(i=0;i<p1;i++) {
			for(j=0;j<q1;j++) {
				printf("%d\t", subtract[i][j]);
			}
			printf("\n");
		}
	}
	else
		printf("MathError\n");
}
int mat_multiply(int a[10][10], int b[10][10], int p1, int q1, int p2, int q2) {
	int i,j,k,multiply[10][10],sum=0;
	if(q1==p2) {
		for(i=0;i<p1;i++) {
			for(j=0;j<q2;j++) {
				sum=0;
				for(k=0;k<p2;k++) {
					sum+=a[i][k]*b[k][j];
					multiply[i][j]=sum;
				}
			}
		}
		printf("MatA x MatB\n");
		for(i=0;i<p1;i++) {
			for(j=0;j<q2;j++) {
				printf("%d\t", multiply[i][j]);
			}
			printf("\n");
		}
	}
	else
		printf("MathError\n");
}
int vector_add(int v_a[3], int v_b[3], int m1, int m2) {
	int i,add[10];
	if(m1==m2) {
		printf("VctA + VctB\n");
		for(i=0;i<m1;i++) {
			add[i]=v_a[i]+v_b[i];
			printf("%d\t", add[i]);
		}
		printf("\n");
	}
	else
		printf("MathError\n");	
}
int vector_subtract(int v_a[3], int v_b[3], int m1, int m2) {
	int i,subtract[10];
	if(m1==m2) {
		printf("VctA - VctB\n");
		for(i=0;i<m1;i++) {
			subtract[i]=v_a[i]-v_b[i];
			printf("%d\t", subtract[i]);
		}
		printf("\n");
	}
	else
		printf("MathError\n");
	
}
int dot_product(int v_a[3], int v_b[3], int m1, int m2) {
	int i,sum=0;
	for(i=0;i<3;i++)
		sum+=v_a[i]*v_b[i];
	printf("(VctA).(VctB)\n%d\n", sum);
}
int cross_product(int v_a[3], int v_b[3], int m1, int m2) {
	int a,b,c;
	a=v_a[1]*v_b[2]-v_a[2]*v_b[1];
	b=-(v_a[0]*v_b[2]-v_a[2]*v_b[0]);
	c=v_a[0]*v_b[1]-v_a[1]*v_b[0];
	printf("(VctA).(VctB)\n");
	printf("%d\t%d\t%d\n", a,b,c);
}
