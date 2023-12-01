
// Lab 1 - Basic Sorting Algorithms
// Program Written By Arely Rosendes
// Program Finished February 15, 2023
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <chrono>
#include<unordered_set>
#include "selection_sort.h"
#include "insertion_sort.h"
#include "bubble_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"
#include "read_file.h"

using namespace std::chrono;

int main() {

// Describing Prompt
  std::cout << "This Program is Designed to Sort 2 Different Size Files using Selection Sort, Insertion Sort, Bubble Sort, Merge Sort, and Quick Sort. The program will print how many seconds it took for each file to be sorted through every sorting method 5 times each. At the end, the program will print out the first 50 words sorted and the last 50 words sorted of each file. Will you like to continue? Enter yes or no:";
  std::string input;
  getline(std::cin, input); // getting input from user
if(input != "yes" && input != "y" && input != "Yes" && input != "Y") // if output is anything but yes, it'll quit
{
  std::cout << "Program has been quit." << std::endl; // if user entered no, program quits
  return 0;
}


  
// Adding Words into vectors excluding certain words & punctuation for sorting methods to read from
  
// Creating Two Vectors for words to be stored in
  std::vector<std::string> words1;
  std::vector<std::string> words2;

// Read in the file of words
  readWordsFromFile("5000 Word File.txt", words1);
  readWordsFromFile("25000 Word File.txt", words2);

  

// Sort the vector using different sorting algorithms

// Selection Sort - 5000 Word File
   int s;
    s = 5;
    for (int i = 0; i < s; i++) // Run Loop 5 Times
      {
        
// Timer Starts
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
        
selectionSort(words1); // Selection Sorting with file 1
        
// Timer Ends
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration <double> time_span_select = duration_cast<duration<double>>(t2 - t1);
        
//Print Out How Many Seconds It Took
    std::cout << std::endl;
    std::cout << "Selection Sort with 5000 Word File took me " << time_span_select.count() << " seconds.";
    std::cout << std::endl;
        }

  
// Selection Sort - 25,000 Word File
int ss;
    ss = 5;
    for (int i = 0; i < ss; i++) // Run Loop 5 Times
      {
        
// Timer Starts
  high_resolution_clock::time_point t11 = high_resolution_clock::now();
        
selectionSort(words2); // Selection Sorting with file 2
        
// Timer Ends
    high_resolution_clock::time_point t12 = high_resolution_clock::now();
    duration <double> time_span_select = duration_cast<duration<double>>(t12 - t11);
        
//Print Out How Many Seconds It Took
    std::cout << std::endl;
    std::cout << "Selection Sort with 25,000 Word File took me " << time_span_select.count() << " seconds.";
    std::cout << std::endl;
        }

  std::cout << "*******************************" << std::endl;

  
// Insertion Sort - 5000 Word File
  int t;
    t = 5;
    for (int i = 0; i < t; i++) // Run Loop 5 Times
      {
// Timer Starts
  high_resolution_clock::time_point t3 = high_resolution_clock::now();
        
insertionSort(words1); // Insertion Sorting with file 1
        
  // Timer Ends
  high_resolution_clock::time_point t4 = high_resolution_clock::now();
  duration <double> time_span_insertion = duration_cast<duration<double>>(t4 - t3);
        
//Print Out How Many Seconds It Took
  std::cout << std::endl;
  std::cout << "Insertion Sort with 5000 Word File took me " << time_span_insertion.count() << " seconds.";
  std::cout << std::endl;
        }

  
// Insertion Sort - 25,000 Word File
  int tt;
    tt = 5;
    for (int i = 0; i < tt; i++) // Run Loop 5 Times
      {
// Timer Starts
  high_resolution_clock::time_point t13 = high_resolution_clock::now();
        
insertionSort(words2); // Insertion Sorting with file 2
        
// Timer Ends
  high_resolution_clock::time_point t14 = high_resolution_clock::now();
  duration <double> time_span_insertion = duration_cast<duration<double>>(t14 - t13);
        
//Print Out How Many Seconds It Took
  std::cout << std::endl;
  std::cout << "Insertion Sort with 25,000 Word File took me " << time_span_insertion.count() << " seconds.";
  std::cout << std::endl;
        }
  std::cout << "*******************************" << std::endl;

  
// Bubble Sort - 5000 Word File
  int b;
    b = 5;
    for (int i = 0; i < b; i++) // Loop Runs 5 Times
      {
  // Timer Starts
  high_resolution_clock::time_point t5 = high_resolution_clock::now();
        
bubbleSort(words1); // Bubble Sorting with file 1
        
// Timer Ends
  high_resolution_clock::time_point t6 = high_resolution_clock::now();
  duration <double> time_span_bubble = duration_cast<duration<double>>(t6 - t5);

//Print Out How Many Seconds It Took
  std::cout << std::endl;
  std::cout << "Bubble Sort with 5000 Word File took me " << time_span_bubble.count() << " seconds.";
  std::cout << std::endl;
        }

  
// Bubble Sort - 25,000 Word File
  int bb;
    bb = 5;
    for (int i = 0; i < bb; i++) // Loop Runs 5 Times
      {
  // Timer Starts
  high_resolution_clock::time_point t15 = high_resolution_clock::now();
        
bubbleSort(words2); // Bubble Sorting with file 2
        
// Timer Ends
  high_resolution_clock::time_point t16 = high_resolution_clock::now();
  duration <double> time_span_bubble = duration_cast<duration<double>>(t16 - t15);

//Print Out How Many Seconds It Took
  std::cout << std::endl;
  std::cout << "Bubble Sort with 25,000 Word File took me " << time_span_bubble.count() << " seconds.";
  std::cout << std::endl;
        }
  std::cout << std::endl;
  std::cout << "*******************************" << std::endl;


// Merge Sort - 5000 Word File
  int m;
    m = 5;
    for (int i = 0; i < m; i++) // Run Loop 5 Times
      {
  // Timer Starts
  high_resolution_clock::time_point t7 = high_resolution_clock::now();
        
mergeSort(words1, 0, words1.size() - 1); // merge sorting with file 1
        
  // Timer Ends
    high_resolution_clock::time_point t8 = high_resolution_clock::now();
    duration <double> time_span_merge = duration_cast<duration<double>>(t8 - t7);
        
//Print Out How Many Seconds It Took
    std::cout << std::endl;
    std::cout << "Merge Sort with 5000 Word File took me " << time_span_merge.count() << " seconds.";
    std::cout << std::endl;
        }

  
// Merge Sort - 25,000 Word File
  int mm;
    mm = 5;
    for (int i = 0; i < mm; i++) // Run Loop 5 Times
      {
  // Timer Starts
  high_resolution_clock::time_point t17 = high_resolution_clock::now();
        
mergeSort(words2, 0, words2.size() - 1); // merge sorting with file 2
        
// Timer Ends
    high_resolution_clock::time_point t18 = high_resolution_clock::now();
    duration <double> time_span_merge = duration_cast<duration<double>>(t18 - t17);
        
//Print Out How Many Seconds It Took
    std::cout << std::endl;
    std::cout << "Merge Sort with 25,000 Word File took me " << time_span_merge.count() << " seconds.";
    std::cout << std::endl;
        }
  std::cout << "*******************************" << std::endl;


// Quick Sort - 5000 Word File
  int q;
    q = 5;
    for (int i = 0; i < q; i++) // Run Loop 5 Times
      {    
    // Timer Starts
  high_resolution_clock::time_point t19 = high_resolution_clock::now();
        
quickSort(words1, 0, words1.size() - 1); // quick sorting with file 1
        
// Timer Ends
  high_resolution_clock::time_point t20 = high_resolution_clock::now();
  duration <double> time_span_quick = duration_cast<duration<double>>(t20 - t19);
        
//Print Out How Many Seconds It Took
  std::cout << std::endl;
  std::cout << "Quick Sort with 5000 Word File took me " << time_span_quick.count() << " seconds.";
        std::cout << std::endl;
        }


// Quick Sort - 25,000 Word File
   int qq;
    qq = 5;
    for (int i = 0; i < qq; i++) // Run Loop 5 Times
      {    
    // Timer Starts
  high_resolution_clock::time_point t21 = high_resolution_clock::now();
        
quickSort(words2, 0, words2.size() - 1); // quick sorting with file 2
        
// Timer Ends
  high_resolution_clock::time_point t22 = high_resolution_clock::now();
  duration <double> time_span_quick = duration_cast<duration<double>>(t22 - t21);
        
//Print Out How Many Seconds It Took
  std::cout << std::endl;
  std::cout << "Quick Sort with 25,000 Word File took me " << time_span_quick.count() << " seconds.";
        std::cout << std::endl;
        }
  std::cout << "*******************************" << std::endl;



// Describing What These Seconds Mean Prompt
  std::cout << std::endl;
  std::cout << "As you can see, the times in seconds it takes to sort a file depends on the sorting method along with the file size. Selection Sort seems to have longer time compared to the other sorting methods. Bubble Sort seems to be the fastest method. In some cases, Bubble Sort reading the large file is still faster than Selection Sort running the smaller file. Insertion and Bubble Sorting have the best time when it comes to a worse case (being less sorted), while Quick Sort has the best time when it comes to a best case (a more sorted list). Selection is just as bad for both cases." << std::endl;

  
  
// Print the first 50 sorted words - 5000 Word File
std::cout<<std::endl;
std::cout << "First 50 sorted words from 5000 Word File:" << std::endl; // dialoge print
for (int i = 0; i < 50 && i < words1.size(); i++) {  // getting first 50 words from the sorted vector "words1"
  std::cout << words1[i] << " "; // printing these words
}
  std::cout<< std::endl;

  
// Print the last 50 sorted words - 5000 Word File
  std::cout<<std::endl;
std::cout << "Last 50 sorted words from 5000 Word File:" << std::endl; // dialoge print
for (int i = words1.size() - 50; i < words1.size(); i++) { // taking the whole vector size and printing last 50 words
    if (i < 0) {
        continue;
    }
  std::cout << words1[i] << " "; // prinint words
}
  std::cout << std::endl;

  
//Print First 50 Words - 25000 Word File
std::cout<<std::endl;
std::cout << "First 50 sorted words from 25,000 Word File:" << std::endl; // dialoge print

  // Because the first fifty of the vector is empty
int temp = 0;
  
for (int i = 0; i < words2.size(); i++) {  //find the first word, and save that position
  if(words2[i] != ""){
    temp = i;
    break;}
}

  for(int i=temp;i<temp+50;i++){   // Print 50 from that position
    std::cout << words2[i] << " ";
  }
  std::cout<< std::endl;

  
// Print the last 50 sorted words - 25,000 Word File
  std::cout<<std::endl;
std::cout << "Last 50 sorted words from 25,000 Word File:" << std::endl; // dialoge print
for (int i = words2.size() - 50; i < words2.size(); i++) { // Taking last 50 from sorted vector and prining
    if (i < 0) {
        continue;
    }
  std::cout << words2[i] << " ";
}
  return 0;
  }

