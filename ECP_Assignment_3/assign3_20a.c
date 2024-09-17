



#include<stdio.h>

int checkPrime(int num)
{
    if(num < 2){
        return 0;
    }
    else{   
 
        int x = num/2;
        for(int i = 2; i < x; i++)
        {
            if(num % i == 0)
            {
                return 0;
            }
        }
    }
     return 1;
}

int main()
{
    
    for(int i=1; i <= 100; i++){
        if(checkPrime(i))
            printf("%d\n",i);
    }
 
    return 0;
}













































