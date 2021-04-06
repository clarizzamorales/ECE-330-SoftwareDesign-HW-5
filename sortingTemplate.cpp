// Clarizza Morales
// ECE 330 - Software Design
// Homework #5 : Templates Ch.8
// Due on: 03/12/2021 

#include <iostream>
#include <stdio.h>
#include <string>


template <class X>
//non-returning function
void selectionSort(X array[], int array_length)
{
     int lower_element;

   // iterate over the elements
   for (int i = 0; i < array_length - 1; i++)
   {
      lower_element = i; // get first address of array

      // iterate to find the address of the first smallest element in the given array
      for (int address = i+1; address < array_length; address++)

         if ( array[address] < array[lower_element])
                lower_element = address;
                X cont = array[i];
                array[i]=array[lower_element];
                array[lower_element]= cont;
   } 
}

int main()
{
    int int_array[20]; //int array 
    int i;  //iteration variable i
    int userIn; //user input to get the # of elements or length of array
    float float_array[20]; // float array


    std::cout<< "Please enter how many elements you want to sort: \n";

    std::cin>>userIn;
    std::cout<< "\nPlease, enter array elements to sort:\n";

    int count = 1; // counter to assign the # of element 
    for(i=0; i<userIn; i++){
       std::cout << "\nEnter array element # "<< std::to_string(count) << " :\n";
       std::cin >> float_array[i];
       count ++;
    }
  
    selectionSort(float_array,userIn); // call function to sort array
    std::cout << std::endl;

    std::cout << "Final Sorted Array:\n";

    for(i=0; i<userIn; i++){ // print the sorted array
       std::cout << float_array[i] << "\n";
    }

    return 0;
}



