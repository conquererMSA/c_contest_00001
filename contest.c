#include<stdio.h>
// problem 1:print it
// int main(){
//     printf("Hello, world! I am learning C programming language. ^-^\nProgramming is fun and challenging. /\\/\\/\\\nI want to give my 100%% dedication to learn!\tI will succeed one day.");
//     return 0;
// }

//problem 2: multiply
// int main(){
//    long long int a,b;
//    scanf("%lld %lld",&a,&b);
//    long long int multiply=a*b;
//    printf("%lld",multiply);
//     return 0;
// }

// problem 3: divisible by 3
// int main(){
//     int a;
//     scanf("%d",&a);
//     if(a%3==0){
//         printf("YES");
//     }else{
//         printf("NO");
//     }
// }

//problem 4: divisible by 3 and 7
// int main(){
//     int a;
//     scanf("%d",&a);
//     for(int i=1; i<=a; i++){
//         if(i%3==0 && i%7==0){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }

// problem 5:
int main(){
    long long int money;
    scanf("%lld",&money);
    if(money>1000){
        printf("I will buy Punjabi\n");
        int newMoney=money-1000;
        if(newMoney>500){
            printf("I will buy new shoes!\nAlisha will buy new shoes");
        }
    }else{
        printf("Bad luck!");
    }
}