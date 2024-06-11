/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int size ;
    cout << "enter the size of array : ";
    cin >> size ;
    cout << endl;
    
    int arr[size];
    for(int i=0; i < size ; i++){
        cout << "please enter the value of arr[" << i+1 <<"] : " ;
        cin >> arr[i] ;
        cout << endl;
    }

   int numUnique=0;
   for(int i=1 ;i < size ; i++){
       
       if (arr[i] != arr[numUnique]){
   //        cout <<"the numUnique " << numUnique <<"  arr[i " << arr[i] <<endl;
           numUnique++;
           arr[numUnique] =arr[i] ;
           
       }
   }
   cout << "the number is :" << numUnique+1 << endl;
   
  // for(int i=numUnique+1; i< size ;i++){
    //    arr[numUnique] = 0;
   //}
   cout<<"[";
   for(int j=0; j<size ; j++){
       if (j > numUnique ){
           arr[j]=0;
           if(j == size-1){
              cout << "_" ;

           }
           else{
             cout << "_" << ",";

           }
       }
       else{
                  cout <<arr[j] <<",";

       }
   }
   cout << "]"; 
}