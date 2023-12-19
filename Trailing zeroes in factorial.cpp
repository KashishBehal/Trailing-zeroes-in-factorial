class Solution
{
public:

    int trailingZeroes(int N)
    {  // brute force
    //     int zero=0;
    //     int factorial=1;
    //     for(int i=0;i<=N;i++){
    //         factorial=factorial*i;
    //     }
    //     while(factorial>0){
    //   if(factorial%10==0){
    //       zero++;
    //       factorial=factorial/10;
    //   }
    //   else{
    //       break;
    //   }}
    //   return zero;
    
    
    
    
    
    
    
    int count=0;
    for(int i=5;i<=N;i=i*5){
        count=count+N/i;
    }
    return count;
    }
};
