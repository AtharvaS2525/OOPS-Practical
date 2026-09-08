#include <iostream>
using namespace std;
int main(){
int sum_even=0;
int sum_odd=0;
for(int i=1; i<=50; i++){
   if(i%2==0){
       sum_even= sum_even + i;
   } 
   else{
       sum_odd = sum_odd +i;
   }
}
cout<<"\nSum of even number is:"<<sum_even;
cout<<"\nSum of odd number is:"<<sum_odd;
return 0;
}
