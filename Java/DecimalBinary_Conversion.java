/* 
------------------------------------------------------------------------------------------------
USERNAME: ishashukla183
DESCRIPTION: This program converts binary to decimal and decimal to binary
DATE: 28/10/2021
------------------------------------------------------------------------------------------------
*/

import java.util.*;
import java.io.*;

 class Convert
 {
	void convertb(int n) //function to convert decimal to binary
	{ 
	  StringBuffer sbf=new StringBuffer("");
	  Stack<Integer> binary=new Stack<Integer>(); 
	  int i=0;
	  while(n!=0) //until number is not zero
		{ 
		  binary.push((n1%2)); //push remainder on to the stack
		  n=n/2;             //divide number by 2
		 }
	sbf=display(binary); //call display function and store in sbf
	System.out.println("Equivalent Binary number: "+sbf); //print binary number
	}
	
	StringBuffer display(Stack<Integer> stack) //function to display binary number
	{ StringBuffer sb=new StringBuffer("");
	  int result=0; //initialize result
	  while(stack.isEmpty()==false) //while stack is not empty
	  {  
	   result=stack.pop(); //pop elements from stack and append to stringbuffer
	   sb.append(result);
	  }
      return sb; //return stringbuffer
	}
	
	void convertd(int n2) //convert binary to decimal
	{   int decimal = 0;  //stores the decimal number
	    int binary=n2;    //stores binary number
	    StringBuffer sbf1=new StringBuffer("");
		int n = 0,p=1;  
	    while(binary>0) //while number is greater than zero
	    {  n=binary%10; //get the last digit
	       if(n==1)
	         decimal=decimal+p; 
	       binary=binary/10; //remove last digit
	       p=p*2;   //increase power to the base 2 by 1 every time loop executes
	    }
	 
	   sbf1.append(decimal);
	   System.out.println("Equivalent decimal number: "sbf1);
	}
 }
	public class Main {
	public static void main(String[] args)
	{
	    Convert obj=new Convert();
	    System.out.println("1.Convert a number from decimal to binary");
		System.out.println("2.Convert a binary number to decimal");
		System.out.println("Enter 0 to exit.");
		Scanner sc=new Scanner(System.in);
	    int ch=1; 
		while(ch!=0) //while choice is not zero continue executing loop
	   {System.out.println("Enter your choice"); //getting choice from user
		ch=sc.nextInt();
	    System.out.println("Enter a number"); //get number to be converted
		int n=sc.nextInt();
		switch(ch)
		{
		 case 1: obj.convertb(n);break;
		 case 2: obj.convertd(n);break;
		 default:System.out.println("Enter a valid option");
		}
	   }
	}
	}
