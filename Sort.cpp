#include <iostream>
using namespace std;

main(){
    
    int nums[6] = {5,3,6,7,2,5};
    for(int i=0; i<6-1; i++){ //6 is array size, 6 - 1 because starts from 0
        for(int k=0; k<6-1; k++){
            if(nums[k]>nums[k+1]){
                //Swap of 1st and 2nd position
                int temp=nums[k]; //temp is first position = 5
                nums[k]=nums[k+1]; //Swaps second position(3) to first position
                nums[k+1]=temp; //Swaps first position(5) to second position
            }

        }
         
    }
    for(int j=0;j<6;j++){
        cout<<nums[j];
    }
    

}