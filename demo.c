
                 //  Finding the size of the variable
                 // printing the given variable

#include<stdio.h>


int d;//this a global variable default value 0
int main()
{
    int a=10;//local variable use memory every new time we use it ista agar specify nahi karenge toh hota he garbage vahi - se plus tak 
    printf("%d",sizeof(a));
    // this is comment
    printf(",");
    float b=11;
    printf("%f",b);
    printf(",");
    printf("%d",a);
    printf(",");
    char c[] = "hello"; // ese array kehte he jo pura string ko as an array leta he agar koi index ko lenge toh usko no. me badal deta he 
    printf("%s",c);
    static int e;//static variable use the same memory location every time iska default value hota he 0

    printf("\n");
                   
                      // using the operator increment and decrement     

    int v = 10,cv=20;
    printf("%d\n",v);
    printf("%d\n",++v);  // yaha pe pehle plus hua 10 me uske baad print hua 11
    printf("%d\n",v++); //yah pe v ka value 11 tha usse 12 hua 
    printf("%d\n",--v);  //yaha par 12 tha value toh pehle 12-1 hua fir 11 print hua 
    printf("%d\n",v--);  // yaha par pehle 11 print hua fir 11-1 hua
    printf("%d\n",v);

             // ternery operator used inplace of the comparning operator it is always used when there is always 2 or more variable like v and cv
    printf("%d\n",(v>cv)?v:cv);


             // logical operator // 0 aur 1 output deta he true he toh 1 agar false he toh 0
    printf("%d\n",(v>cv)&&(v<cv));
    printf("%d\n",(v>cv)||(v<cv));
    printf("%d\n",!(v>cv));
    
}

