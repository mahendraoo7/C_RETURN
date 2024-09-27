/**
  //WHAT IS C

   -> C is a general-purpose programming language created by Dennis Ritchie at the Bell Laboratories in 1972.

    It is a very popular language, despite being old. The main reason for its popularity is because it is a fundamental language in the field of computer science.
    

    //Why Learn C?
      -> It is one of the most popular programming languages in the world
      -> If you know C, you will have no problem learning other popular programming languages such as Java, Python, C++,C#, etc, as the syntax is similar
      -> C is very fast, compared to other programming languages, like Java and Python
      -> C is very versatile; it can be used in both applications and technologies



  // Difference between C and C++
      ->  C++ was developed as an extension of C, and both languages have almost the same syntax
      ->  The main difference between C and C++ is that C++ support classes and objects, while C does not


   //  #include <stdio.h>   
      -> pre processer directer

  //  VERIABLE 

     int   -     save numberic value
     float -     save float vlaue like(3.23)
     char  -     save charecter value

  
    //  OutPut 
       printf("");
       printf("\n");  -new line

       1. integer 
         int num =15
         printf("%d",num);

       2.float (real value) 
         float pi = 9.34
         printf("%f",pi)

       3.Charecters
         char world = "hello"
         printf("%c",wrold)  


      // Input

      scanf("%d",$n);   



     // Operators

       1.Arithmetic Operator 
          + 
          *
          -
          /
          %

       2. Relational Operator
          ==
          >,>=
          <,<=
          !=

       3. Logical Operator
          &&   AND
          ||   OR
          !    NOT
         
       4. Bitwise Operator 

         &   AND
         |   OR
         ^   XOR
         >>  RIGHT SWIFT
         <<  LEFT SWIFT
         

       5. Assignment Operator 
           =
          +=
          -=
          *=
          /=
          %=
      
       Bytes Use

        -> int   - 2 byte
        -> float - 4 byte
        -> char  - 1 byte


    //  Control Instruction 
        1. Sequence Control 
        2. Decision Control 
        3. Loop Control
        4. Case Control


    //  Condition Statment 

       If()else 
       Switch Case
       Ternary Operator ?:


    //  Loop Statment 

       for()
       while()      - check condition before exicute
       do{} while() - check condition after exicute


      //   Break Continue

       1. break 
        The break statement can also be used to jump out of a loop.
        when work was complated break stop the loop or work

       2. Continue 
         The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.



      //   Function And recursion


         //  Function

          Prototype : void function_name();

          Defination : void PrintHello() { printf("hello"); }

          Call : PrintHello();

     
         // Argument Function

          void helloSum(int a, int b)
          {
              reutrn a+b;
           }

         //   Argument 
            -> when function call pass Argument 
            -> used to send value
            -> Actual Parameter


            // Parameter 
              -> value in function declaration and defination
              -> used to recive value
              ->  Formal parameter

 
            #inlcude <math.h>
             
            //   pow(2,2);

            //   Recursion 
               -> When function calls itself , oits called a recursion
              
               -> BaseCase 
               its important for recursion beacuse its stop the loop when work was clear.



            // Pointers 

            *ptr
            -> a veriable that stores the memory of address of another veriable  
  
            **pptr
            -> a veriable that stores the memory of address of another pointer
             
          
             Call by value
             Call by Referece 


           
         //   Array 
            -> Collection Of elements
            Declaration - 
              int arr[] = {1,2,3,4,5};

              2D array 
              int array[][] = {{1,2},{3,4}}  


            //  String 

              // String Function 
               #include <string.h>

               // String Length
               char alphabet[] = "ABCDFEREHGEEJEFBh" 
                printf(strlen(alphabet));

                sizeof(alphabet);


                concatenate String
                -> combianing two string 
                -> you can use the strcat()

                char d[] = "hello";
                char h[] = "world" ;

                strcat(d,h); -> h value save in d


               //  copy String 

                 char c[] = "hello world";
                 char p[23];

                 strcpy(c,p)  copy c to p 

                 print str 


               //   Comapre String 

                char str[] = "hello";
                char st2[] = "hello";
                char st3[] = "hello";

                Compare str1 and str2
                strcmp(str, st2); retrun 0 (the string value are equal);




               // Struct 
               - a collection of values of diffrent data types

            //   FILE I/O

               FILE *fptr
               
               open file
               fptr = fopen("filename",mode);

               MODE
               r - read
               w - write


               closing file
               fclose(fptr); 

               EOF -end of file



               // Dynamic Memory Allocation

               // Malloc 
                -> take Number of bytes to be allocated &a return pointer of the type void


              //  CALLOC
              -> Continue allocation  

           

            */   

