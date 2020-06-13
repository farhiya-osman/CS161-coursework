/*********************************************************************
 * ** Program Filename: assignment1.cpp
 * ** Author:Farhiya Osman 	
 * ** Date: 01/19/2020
 * ** Description: calculating the gross income, amount being taxed, and the amount remaining 
 * ** Input:monthly salary, months worked in the past year, cost of the car, the number of cars sold, the number of misconducts observed,the tax year and the state you live in. 
 * ** Output:The gross income, the amount of taxes paid, and the amount of money remaining. 
 * *********************************************************************/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime> 
using namespace std;
 
int main()
{
 // asking user for different inputs and storing them in their respected variables 
      int monthlysal;
      cout << " Enter your monthly salary: " << endl ;
      cin >> monthlysal;
 
      int wmonths;
      cout << " Enter your number of months you worked in the past year:" << endl;
      cin >> wmonths ;
 
      int carcost ;
      cout << " Enter the cost of the car: " << endl ;
      cin >> carcost;
 
      int carsold;
      cout <<  " Enter the number of cars you’ve sold in the past year: " << endl ;
      cin >> carsold ;
 
      int misco;
      cout <<  " Enter the number of misconducts observed in the past year: " << endl ;
      cin >> misco ;
 
      int taxyr ;
      cout <<  " Enter the tax year you are in, enter 1 for 2017, 2 for 2018: " << endl ;
      cin >> taxyr;
 
      char state ;
      cout <<  " Enter which state you are in A,B, or C: " << endl ;
      cin >> state ;
	// calculating annual salary  
            int annualsal ;
            annualsal = (monthlysal * wmonths ) ;
       // calculating pofit and generating random number 
	    int profit ;
	    srand(time(NULL)); 
	    int red =((rand() %(6-0) + 5)) ;
	    int blue = (((red * (.01)) * carcost) + carcost); 
            profit = carsold * (((blue)) - carcost) ;
       // determing the amount needed for deduction       
	      int deductionvalue;
              int deduction ;
              if (deduction == 0 )
                  {
                  deductionvalue = 0 ;
                  }
              else
                  {
                  int val =  pow(2,misco-1) ;
                  deductionvalue = val * 100 ;
                  }  
     // calculting gross income and outputing that value  
      double  grossincome ;
      grossincome = annualsal + (0.02 * profit) - deductionvalue ;
      cout << "The gross income is: " << grossincome << endl;

 // determing the amount of taxes needed to be paid based on state and year 
            int paidtax ;
	if (taxyr == 1)
	{	
    		if (state == 'A') 
    		{
       		    paidtax = (grossincome * 0.06);
    		}
    		else if ( state == 'B') 
    		{
        	     if ( grossincome < 2000)
        	     {
          		paidtax = 0 ;
        	     }
        	     else if ( grossincome > 2000 && grossincome < 10000)
        	     {
          		paidtax = 100 ;
        	     }
        	     else  
        	     {
          		paidtax = ((grossincome * 0.1) + 100 );
        	     }
    		}
    		else 
    		{
        		if (grossincome > 0 && grossincome < 3500 )
        		{
          		    paidtax = (grossincome * 0.05);
        		}
        		else if ( grossincome > 3500 && grossincome < 9000)
        		{
          		    paidtax = ((grossincome * 0.07)+ 175) ;
        		}
       			else if ( grossincome > 9000 && grossincome < 125000)
        		{
          		    paidtax = ((grossincome * 0.09) + 560 ) ;
        		}
        		else 
        		{
          		    paidtax = ((grossincome * .099) + 11000) ; 
        		}
    		}
	    cout << "The tax you need to pay is " << paidtax << endl; 
	}
	else
	{	
        	if (state == 'A') 
          	{
            	   paidtax = (grossincome * 0.08);
          	}
          	else if ( state == 'B') 
          	{
              		if ( grossincome < 2500)
              		{
                	   paidtax = 0 ;
              		}
              		else if ( grossincome > 2500 && grossincome < 10000)
              		{
                	   paidtax = 115 ;
              		}
              		else  
              		{
                           paidtax = ((grossincome * 0.105) + 110 );
              		}
          	}
          	else 
          	{
              		if (grossincome > 0 && grossincome < 3450 )
              		{
                	   paidtax = (grossincome * 0.05);
              		}
              		else if ( grossincome > 3450 && grossincome < 8700)
              		{
                	   paidtax = ((grossincome * 0.07)+ 172.5) ;
              		}
              		else if ( grossincome > 8700 && grossincome < 125000)
              		{
                	    paidtax = ((grossincome * 0.09) + 540 ) ;
              		}
              		else 
              		{
                	    paidtax = ((grossincome * .099) + 11007) ; 
              		}
          	}
 		 cout << "The tax you need to pay is " << paidtax << endl;  
  	}
// outputting the taxes you need to pay, the money remaining, and the average selling price         
	  int rem ;
         rem = ( grossincome - paidtax) ;
         cout << "The remaining money is: " <<  rem << endl;
	 int green  = (profit) * (.02) ;
	 cout << "The average selling price is, generated randomly is " << blue << " you will earn 2 percent profit which is " << green << endl ; 	
return 0 ;   
}
