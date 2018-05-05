/*
@PrinceMughal_
  You may modify or reproduce.
  Time: 03:017:27am Sunday
  Date: 06-05-2018
  Email: mughalb9291@gmail.com
  Bugs and Criticisms are warmly welcome :) 


*/
/*

	Write a Program which allows the user to input an integer value for a variable name Limit. 
	Based on the input value, the program should perform the following tasks:
	-> Check whether the value entered by the user falls within the range from 10 to 150. 
	   (10 and 150 included in the given range.) 
	-> Display those numbers which are divisible by both 3 and 5 in the range from 1 up to the Limit.
  -> Calculate and display the sum of those numbers which are divisible by either 3 or 5.
  -> Final task will be to count and display those numbers which are not divisible by 3 or 5.
*/


#include <iostream>
using namespace std;

int main(void){
/* variable declaration */
    int Limit = 0; /* To hold limit , How many numbers */
    int sum   = 0; /* To hold sum of all the numbers divisible by 3 or 5 */
    int count = 0; /* To count not divisible by 3 or 5 */


    /* Take Limit from the user */
    cout<<"Enter the limit in the range <10 ... 150> :";
    cin>>Limit;

    /* Check is Limit valid or not */
    if(Limit > 150){

        cout<<"Wrong Input!! Limit should not be greater than 150"<<endl;
        return -1; /* exit */

    }else if(Limit < 10){

        cout<<"Wrong Input!! Limit should not be less than 10"<<endl;
        return -1; /* exit */

    }else{
       
        cout<<"Numbers which are divisible by both 3 and 5 = ";
        for(int i = 1; i <= Limit; i++){
            /* Print the numbers which divisible by both 3 and 5 */
            if( i % 3 == 0 && i % 5 == 0 ){
                cout<<i<<" ";}

            /* Count the numbers which are not divisible by either 3 or 5*/
            if(( i%3 != 0 && i%5 != 0) && (i%3 != 0 || i%5 != 0)){
                count++;}

            /* Calculate the sum of numbers which are divisible
                             by either 3 or 5 but not with both */
            if( (i%3 == 0 || i%5 == 0) && ( i%3 != i%5) ){
                sum = sum + i;}
        }
        cout<<endl;
        cout<<"Calculated Sum: "<<sum<<endl;
        cout<<"Total numbers which are not divisible by 3 or 5: "<<count<<endl;
    }


return 0;}
