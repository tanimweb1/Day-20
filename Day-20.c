#include<stdio.h>
int main(){

    // Introduction to array 
int numbers[5] ={10,20,30,40,50};



printf("%d\n", numbers[0]);
printf("%d\n", numbers[1]);
printf("%d\n", numbers[2]);
printf("%d\n", numbers[3]);
printf("%d\n", numbers[4]);



        // using loop in array
int numbers[5] ={10,20,30,40,50};

for(int index=1; index<5; index++){
    printf("%d\n", numbers[index]);
}



// Array input 

int numbers[5];

// using normal scanf for input

scanf("%d", &numbers[0]);
scanf("%d", &numbers[1]);
scanf("%d", &numbers[2]);
scanf("%d", &numbers[3]);
scanf("%d", &numbers[4]);

// using loop for input
for(int index=0;index<5;index++){
    printf("number[%d] = " , index);
scanf("%d", &numbers[index]);
    
}


for(int index=0;index<5;index++){
printf("%d\n", numbers[index]);
}
    


    return 0;

}


