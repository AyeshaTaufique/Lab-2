#include <stdio.h>
#include <stdlib.h>


void main()
{
 //PRACTICE
    int b=1;
    int a=1;
    while(a<11){
        printf("Value of a: ");
        printf("%d\n",b);
        b+=2;
        a++;
    }

    int a = 10;
    do {
    printf("value of a: %d\n", a);
    a = a + 1;
    }while( a < 20 );*/


    int b=1;
    for(int a=0;a<11;a++){
        if (a==3){
            continue;
        }
        printf("Value of a: %d\n",b);
        b+=2;
    }
    int ans[]={1,2,3,34,5};
    for(int b=0;b<5;b++){
        printf("%d\n",ans[b]);
    }
    int matrix[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("Value of Matrix[%d][%d]",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    char ash[]="Ayesha";
    int i;
    for(i=0;i<6;++i){
        printf("%c",ash[i]);
    }
//QUES 1
    int b=1;
    int sum=0;
    printf("Value of a:- \n");
    for(int a=0;a<11;a++){
        printf("%d\n",b);
        sum+=b;
        b+=2;
    }
    printf("Sum: %d",sum);*?
//QUES 2
    int i,j,k;
    for(i=1;i<5;i++)
    {
        for(j=4;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    int i,j,k;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        {
            printf("*");
        }
        printf("\n");
    }
//QUESTION 3
   char str1[20];
   char str2[20];
   printf("Enter the first string : ");
   scanf("%s",str1);
   printf("Enter the second string : ");
   scanf("%s",str2);
   if(str1==str2){
    printf("Strings are same");
   }
   else{
    printf("String are not same");
   }
//QUES 4
   char sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (islower(sentence[i])) {
            sentence[i] = toupper(sentence[i]);
        } else if (isupper(sentence[i])) {
            sentence[i] = tolower(sentence[i]);
        }
    }

    printf("Modified sentence: %s", sentence);
//QUES 5
    int arr[] = {1, 2, 3, 4, 1, 2, 5, 6, 7, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Unique elements in the array: ");
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        if (i == j) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
//QUES 6
struct Distance {
   int feet;
   float inch;
} d1, d2, result;
int main() {
   // take first distance input
   printf("Enter 1st distance\n");
   printf("Enter feet: ");
   scanf("%d", &d1.feet);
   printf("Enter inch: ");
   scanf("%f", &d1.inch);
   // take second distance input
   printf("\nEnter 2nd distance\n");
   printf("Enter feet: ");
   scanf("%d", &d2.feet);
   printf("Enter inch: ");
   scanf("%f", &d2.inch);
   // adding distances
   result.feet = d1.feet + d2.feet;
   result.inch = d1.inch + d2.inch;
   // convert inches to feet if greater than 12
   while (result.inch >= 12.0) {
      result.inch = result.inch - 12.0;
      ++result.feet;
   }
   printf("\nSum of distances = %d\'-%.1f\"", result.feet, result.inch);
   return 0;
}





