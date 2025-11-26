#include <iostream>
using namespace std;


main(){
    int arr[]={7,4,5,6,5,4,7};
    int size = 0;
    for (int num : arr){
        size++;
    }
    int split=size/2;
    bool isPalindrome=true;

    for (int i=0, j=size-1; i<=split, split<=j; i++, j--){

        if (arr[i]!=arr[j]){
            isPalindrome=false;
        }
    }
    cout<<isPalindrome;
}







// main(){
//     int arr[]={7,6,6,6,6,7};
//     int size = 0;


//     for (int num : arr){
//         size++;
//     }

//     int split = size/2;
//     int destnitationArrOne[split];
//     int destnitationArrTwo[split];
//     int p = 0;
//     bool areEqual=true;
//     if (size%2==1){
//         for (int i=0; i<=split; i++){
//             destnitationArrOne[i]=arr[i];

//         }
//         for (int k=size-1; k>=split; k--){
//             destnitationArrTwo[p]=arr[k];
//             p++;
//         }
//     }
//     if (size%2==0){
//         for (int i=0; i<split; i++){
//             destnitationArrOne[i]=arr[i];

//         }
//         for (int k=size-1; k>=split; k--){
//             destnitationArrTwo[p]=arr[k];
//             p++;
//         }
//     }

//     for (int j=0; j<=split; j++){
//         if (destnitationArrOne[j]!=destnitationArrTwo[j]){
//             areEqual=false;
//             cout<<"Not palindrome";
//             break; 
//         }

//     }
//     if (areEqual==true){
//         cout<<"Is palindrome";
//     }   


    





        

// }