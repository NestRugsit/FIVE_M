/* R_18 C-Programming IDE:Visual Studio Code */
#include<stdio.h>
#include<string.h>
#include<math.h>
#define PI 3.1415926535

//declared functional
double square(double a);
double rectangle(double b,double c);
double parallelogram(double d, double e, double h);
double triangle(double f,double g,double h);
double circle(double r);
int fibonacci(int n);
long long int fac(long long int n);
void dectooct(long long int);
double dif(double a[], long long int deg, double x);

void main(){
    int ch1,ch2,choice;
    char ans;
    printf("\n\tMAIN MENU\n");
    printf("=================================================\n");
    printf("1. Calculation\n2. EXIT\n");
    printf("=================================================\n");
    printf("SELECTION CHOICES: ");
    scanf("%d", &choice);
    if(choice==1){
            printf("\n");
            do
            {
                printf("=================================================\n");
            printf("1.geometry\n2.calculator\n3.S.D. \n4.Fibonacci\n5.working with matrix\n6.Factorial\n7.Decimal to octal\n8.Integration\n9.Differential\n10.Exit\n");
            printf("=================================================\n");
            printf("SELECTION CHOICE: "); scanf("%d",&ch1);
            if(ch1==1){
    while(ch2 != 6){
    printf("\n\tGEOMETRY FUNCTION\n"); //Geometry caculate
    printf("=================================================\n");
    printf("1. Square\n2. Rectangle\n3. Parallelogram\n4. Triangle\n5. Circle\n6. Return to Main\n");
    printf("============SELECTIOM CHOICES: ");
    scanf("%d", &ch2);
    if(ch2 == 1)
    {
        double a;
        printf("Input length: ");
        scanf("%lf", &a);
        double area = square(a);
        printf("The Area of SQURE that has length %.2lf is %.2lf\n", a,area);
    }
    else if(ch2 == 2){
        double b,c;
        printf("Input length and width: ");
        scanf("%lf %lf", &b, &c);
        printf("The Area of RECTANGLE that has length %.2lf width %.2lf is %.2lf", b,c,rectangle(b,c));
    }else if(ch2 == 3){
        double d,e,h;
        printf("Input length, width and height: ");
        scanf("%lf %lf %lf", &d,&e,&h);
        printf("The Area of PARALLELOGRAM that has length1: %.2lf, width: %.2lf and Height :%.2lf is %.2f",d,e,h,parallelogram(d,e,h) );
    }else if(ch2 == 4){
        double f,g,h;
        printf("Input 3 sides of triangle: ");
        scanf("%lf %lf %lf", &f, &g,&h);
        printf("The Area of TRIANGLE is %.2lf",triangle(f,g,h));
    }else if(ch2 == 5){
         double r;
        printf("Input radius: ");
        scanf("%lf", &r);
        printf("The Area of CIRCLE that has radian %.2lf is %.2lf", r,circle(r));
    }else if(ch2 == 6){
        break;
    }else printf("INCORRECT CHOICE");

    printf("\nDo you want to continue using our program? [Y] or [N]: ");
   scanf(" %c",&ans);
   if(toupper(ans)=='Y') continue;
   else ;
    }
    //============================================================================================
        }else if(ch1==2){
            printf("\n\tCALCULATOR FUNCTION\n");
    printf("==============================================\n");
            long long int num1,num2,ans=0;
    char Op;
    printf("Enter the Number: ");
    scanf("%lld", &num1);
    printf("Operation: ");
    scanf(" %c", &Op);
    printf("Enter the Number: ");
    scanf("%lld", &num2);
    switch(Op)
    {
        case '+':ans=num1+num2;break;
        case '-':ans=num1-num2;break;
        case '*':ans=num1*num2;break;
        case '/':ans=num1/num2;break;
        case '%':ans=(long long int)num1 % (long long int)num2;break;
        default:printf("Invalid operation.\n");
    }
    printf("Your ANSWER: %lld %c %lld = %lld\n",num1,Op,num2,ans);
    printf("\nDo you want to continue using our program? [Y] or [N]: ");
   scanf(" %c",&ans);
   if(toupper(ans)=='Y') continue;
   else break;
    //===============================================================================================
        }else if(ch1==3){
            printf("\n\tFind Standard Deviation FUNCTION\n");
    printf("==============================================\n");
    int i, n;
    double num[100];
    double sum = 0.0, mean, sd;
    printf("How many number do you want to input: ");
    scanf("%d", &n);
    printf("Enter number: ");
    for (i = 0; i < n; i++ )
    scanf("%lf", &num[i]);
    for (i = 0; i < n; i++)
    sum += num[i];
    mean = sum / n;
    sum = 0.0;
    for (i = 0; i < n; i++)
    sum += pow((num[i] - mean),2);
    sd = sqrt(sum / n);
    printf("Standard Deviation: %.6f", sd);
    printf("\nDo you want to continue using our program? [Y] or [N]: ");
   scanf(" %c",&ans);
   if(toupper(ans)=='Y') continue;
   else break;
}
//============================================================================================
else if(ch1==4){
    printf("\n\tFIBONACCI FUNCTION\n");
    printf("==============================================\n");
   int n;
   int i;
   printf("How many Series do you want: ");
   scanf("%d", &n);
   printf("Fibonacci of %d: \n" , n);
   for(i = 0;i<n;i++) {
      printf("%d ",fibonacci(i));            
   }
   printf("\nDo you want to continue using our program? [Y] or [N]: ");
   scanf(" %c",&ans);
   if(toupper(ans)=='Y') continue;
   else break;

}
//==============================================================================================
else if(ch1==5){
    printf("\n\tMATRIX FUNCTION\n");
    printf("==============================================\n");
     long long int mat1[3][3], mat2[3][3];
     long long int c,sum=0;
     int i,j;

     for(i=0;i<3;i++){
         for(j=0;j<3;j++){
             printf("Let's Create Matrix1 [%d][%d]: ",i+1,j+1);
             scanf("%lld", &mat1[i][j]);
         }
     }
     printf("===========================================\n");
     for(i=0;i<3;i++){
         for(j=0;j<3;j++){
             printf("Let's Create Matrix2 [%d][%d]: ",i+1,j+1);
             scanf("%lld", &mat2[i][j]);
         }
     }
     printf("Would you like to sum up [1] or substract [2]: ");
     scanf("%lld", &c);
     if(c==1){
     for(i=0;i<3;i++){
         for(j=0;j<3;j++){
             sum=mat1[i][j]+mat2[i][j];
            printf("%lld\t", sum);
         }
         printf("\n");
     }
     }else if(c==2){
        for(i=0;i<3;i++){
         for(j=0;j<3;j++){
             sum=mat1[i][j]-mat2[i][j];
            printf("%lld\t", sum);
         }
         printf("\n");
     }
     }else printf("INVALID CHOICE");
     printf("\nDo you want to continue using our program? [Y] or [N]: ");
   scanf(" %c",&ans);
   if(toupper(ans)=='Y') continue;
   else break;
}
//===========================================================================================
    else if(ch1==6)
    {
        printf("\n\tFACTORIAL FUNCTION\n");
    printf("==============================================\n");
        long long int n;
        printf("Enter number: ");
        scanf("%lld",&n);
        printf("%lld! = %lld\n",n,fac(n));
        printf("\nDo you want to continue using our program? [Y] or [N]: ");
   scanf(" %c",&ans);
   if(toupper(ans)=='Y') continue;
   else break;

    }
//=========================================================================================
    else if(ch1==7){
        printf("\n\tCONVERT DECIMAL TO OCTAL FUNCTION\n");
    printf("==============================================\n");
    long long int num;
    printf("Decimal number: ");
    scanf("%lld",&num);
    printf("Octal number: ");
    dectooct(num);
    printf("\nDo you want to continue using our program? [Y] or [N]: ");
   scanf(" %c",&ans);
   if(toupper(ans)=='Y') continue;
   else break;
}
//===========================================================================================
else if(ch1==8){
    printf("\n\tPOLYNOMAIL INTEGRATION FUNCTION\n");
    printf("==============================================\n");
    long long int n,c=0,deg[100],k,co[100],re[100],temp,e;
    char op[100];
    printf("Maximal Degree: ");
    scanf("%lld",&n);
    k=n;
    for(int i=0;i<=n;i++){
        printf("Enter coefficient of degree %d: ",k);
        scanf("%lld",&co[i]);
        if(i<n){
        printf("Enter Operation: ");
        scanf(" %c",&op[i]);
        }
        k--;
    }
    e=n;
    for(int i=0;i<=n;i++){
        temp=e;
        deg[i]=temp;
        e--;
    }
    printf("\n===============================================\n");
    printf("\nResult: ");
    for(int i=0;i<=n;i++){
        re[i]=deg[i]+1;
    }
    for(int i=0;i<=n;i++){
        if(deg[i]!= 0){
        printf(" (%lldX^%lld)/%lld ",co[i],re[i],re[i]);
        printf("%c",op[i]);
        }else printf(" %lldX + C",co[n]);
    }
    printf("\n");
    printf("\n===============================================\n");
    printf("\nDo you want to continue using our program? [Y] or [N]: ");
   scanf(" %c",&ans);
   if(toupper(ans)=='Y') continue;
   else break;
}
//=================================================================
else if(ch1==9){
    printf("\n\tPOLYNOMIAL DIFFERENTIAL FUNCTION\n");
    printf("==============================================\n");
     double x, a[10], y1;
    long long int deg, i;
    printf("Maximal Degree: ");
    scanf("%lld", &deg);
    printf("X =  ");
    scanf("%lf", &x);
    for (i = 0; i <= deg; i++) {
        printf("Enter the coefficient degree %lld: ", i);
        scanf("%lf", &a[i]);
    }
    y1 = dif(a, deg, x);
    printf("The value of polynomial equation for the value of x = %.2lf is: %.2lf", x, y1);
    printf("\nDo you want to continue using our program? [Y] or [N]: ");
   scanf(" %c",&ans);
   if(toupper(ans)=='Y') continue;
   else break;
}
    }
    while(ch1!=10);
    printf("Thanks for using my program, Hope to see you later JubJub ~ ");
}else printf("Thanks for using my program, Hope to see you later JubJub ~ ");

}


//functional
double square(double a){//square area  calculate
        return a*a;
}

double rectangle(double b,double c){//rectangle  calculate
    return b*c;
}

double parallelogram(double d, double e, double h){//parallelogram calculate
    return 0.5 *(d+e)* h;
}

double triangle(double f,double g,double h){//triangle area  calculate
    double a;
    a=sqrt(((f+g+h)/2)*(((f+g+h)/2)-f)*(((f+g+h)/2)-g)*(((f+g+h)/2)-h));
    return a;
}

double circle(double r){//circle area  calculate
    return PI*r*r;
}

int fibonacci(int n) { //Fibonacci Series
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibonacci(n-1) + fibonacci(n-2));
   }
}

long long int fac(long long int n)
{//fact  calculate
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return fac(n-1)*n;
    }
}


void dectooct(long long int n){
    if(n > 0){
        dectooct(n/8);
        printf("%d",n%8);
    }
}

double dif(double a[], long long int deg, double x)
{//dif  calculate
    double p;
    long long int i;
    p = a[deg];
    for (i = deg; i >= 1; i--) {
        p = (a[i - 1] + x * p);
    }
    return p;
}
