// #include <stdio.h>

// int main() {

//   int num = 10;

//   printf("Hello World!");
//   printf("%d",10);
//   return 0;

// }

// if else

//  #include <stdio.h>

//  int main () {
//    int age;
//    scanf("%d",&age);

//    if(age>=18)
//    {
//     printf("adult");
//    } else {
//     printf("not adult");
//    }
//  }

//  Ternary
//  - sortest Way

//  #include <stdio.h>

//    int main () {
//      int age;
//      scanf("%d",&age);

//    age>18 ? printf("Adult") : printf("Not Adult");

//    }

//  Switch Case

//  #include <stdio.h>

//   int main () {
//     int n;
//     printf("Choose One\n");
//     printf("1.hello\n 2.hi\n 3.how are you\n 4.who Are you\n");
//     scanf("%d",&n);

//     switch (n)
//     {
//     case 1 :
//       printf("hello , im raghav mayani from ahemdabad");
//       break;

//     case 2 :
//       printf("hi,i am free for now");
//       break;

//     case 3 :
//       printf(" i am fine ");
//       break;

//     default:
//       break;
//     }

//   }

// Loops

//   int i;

// for (i = 0; i < 105; i++) {
//   printf("%d\n", i);
// }

// abcd

//   #include <stdio.h>
//  int main() {
//      for(char ch='A';ch<='z';ch++)
//  {
//      printf("%c\n",ch);
//  }

//  }

//  while Loop

// #include <stdio.h>
// int main()
// {
//   int i = 1;
//   while (i <= 5)
//   {
//     printf("hello world\n");
//     i++;
//   }
// }

// User

//   #include <stdio.h>
//  int main()
//  {

//    int i,j=0;
//    scanf("%d",&i);
//     while(j<=i)
//     {
//         printf("%d\n",j);
//         j++;
//     }
//  }

//    Do while

// #include <stdio.h>
// int main()
// {

//   int i, j = 0;
//   do
//   {
//     printf("%d", j);
//     j++;

//   } while (j <= 10);
// }

// sum and also print reverse

//    #include <stdio.h>
//  int main()
//  {

//    int sum=0,i=1,n;
//    scanf("%d",&n);
//    for(i=n;i>=1;i--)
//    {
//        sum +=i;
//        printf("%d\n",i);
//    }

//    printf("Sum is %d",sum);
//  }

// Continue    -using for skip the line of loop

// #include <stdio.h>

// int main () {
//   int y;
//   int i=0;

//   for(y=0;y<=10;y++)
//   {
//      if(y==8){
//       continue;
//      }
//      printf("%d",y);
//   }
// }

// Break;

// #include <stdio.h>

// int main()
// {
//   int y;
//   int i = 0;

//   for (y = 0; y <= 10; y++)
//   {
//     if (y == 8)
//     {
//       break;
//     }
//     printf("%d", y);
//   }
// }

//   Factorial Number

//   #include <stdio.h>

//   int main ()
//   {
//     int n,f=1;
//     printf("Enter Number");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//       f*=i;
//       printf("%d\t %d\n",i,f);
//     }

//   }

//   Function

//  #include <stdio.h>

// void PrintHello() {
//     printf("hello world");
//  }

//  int main() {
//    PrintHello();
//  }

//   #include <stdio.h>

//  void hello() {
//     printf("hello how have been you");
//  }
//  void Namste() {
//     printf("namaste jay hind");
//  }

//  int main () {

//   char n;
//   printf("Enter i for Indian \nEnter a for american\n");
//   scanf("%c",&n);

//   if(n == 'a') {
//     hello();
//   }else if(n == 'i')
//   {
//     Namste();
//   } else {
//     printf("Enter Valid Number");
//   }

// Recursion

//     #include <stdio.h>

//    int n=1;
//       void PrintHW(int count ) {

//           if(count == 0) {
//               return;
//           }
//         printf("%d Hello world\n",n);
//         n++;
//         PrintHW(count-1);
//       }

//       int main (){

//         PrintHW(10);

//       }

//    Factorial In recursion

// #include <stdio.h>

//   int fact(int n) {

//       if(n == 0) {
//           return 1;
//       }

//     int nm1 = fact(n-1);
//     int nm = nm1 * n;
//     return nm;
//   }

//   int main (){
//     int nu;
//     scanf("%d",&nu);
//     printf("%d",fact(nu));

//   }

//  BC - BASE CASE

//  Febonacci Series

//   by function

// #include <stdio.h>

// int Feb(int f)
// {
//     if (f == 0)
//     {
//         return 0;
//     }
//     if (f == 1)
//     {
//         return 1;
//     }

//     int feb1 = Feb(f - 1);
//     int feb2 = Feb(f - 2);
//     int feb = feb1 + feb2;
//     return feb;
// }

// int main()
// {

//     int n;
//     printf("Enter Number");
//     scanf("%d", &n);
//     printf("%d", Feb(n));
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n, a = 0, b = 1, next;

//     // Ask the user for the number of terms
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     printf("Fibonacci Series: ");

//     for (int i = 1; i <= n; i++) {
//         printf("%d ", a);  
//         next = a + b;      
//         a = b;             
//         b = next;          
//     }

//     return 0;
// }

//  Pointer 

// #include <stdio.h>

//   int main () {
      
//     int age = 18;
//     int *p = &age ;
//     int ge = *p;

//     printf("%d",ge);
    
//   }

//    value of pointer

    //  #include <stdio.h>

    //  int main () {
    //     int age = 24;
    //     int *ptr = &age;
    //     int **pttr = *ptr;

    // printf("%d",*ptr);
    //  }


    // Struct 

//     #include <stdio.h>
    
//     struct Student {
//         int rollNo;
//         int cgpa;
//         char name[100];
        
//     };
    
// int main() {
    
//     struct Student s1 = {1,23,"mahendra"};
//     printf("stduent RollNo : %d\n",s1.rollNo);
//     printf("cgpa :%d\n",s1.cgpa);
//     printf("Name :%s\n",s1.name);
    
//     #include <stdio.h>

// int main () {
//     FILE *fptr ;
    
//     fptr = fopen("Odd.txt","w");
    
//     int n;
//     printf("Enter N");
//     scanf("%d",&n);
    
//     for(int i=0;i<=n;i++)
//     {
//         if(i%2 != 0)
//         {
//             fprintf(fptr, "%d\n",i);
//         }
//     }
    
// }
// }
     






