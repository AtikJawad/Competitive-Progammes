#include <iostream>
#include <cstdlib> // for abs() function
using namespace std;

int main() {
    int matrix[5][5]; //2D arrays are used for matrix
    int row_no,col_no;

      
   // Reading the matrix and finding the row and column of 1
  
    for(int i=0;i<5;i++) // Nested loops are used just like this format to input the values of the matrix or 2D array
    {
        for(int j=0;j<5;j++){
            cin>>matrix[i][j]; // here the matrix indices range from 0 to 4 ((0,0) to (4,4) bcz array index starts from ZERO(0) which also is the reason to initialize i,j with 0 in the loop
            
            if(matrix[i][j]==1){ // assigning the value of i,j to row_,col_no variable respectively bcz we wanna know the position of 1
                row_no=i; 
                col_no=j;
            }
        }
    }
    // Calculating the number of moves required
  
    int moves= abs(2-row_no) + abs(2-col_no); /* since the indices range from 0 to 4 , we visualize the matrix as 
                                                                     [0,0] [0,1] [0,2] [0,3] [0,4]
                                                                     [1,0] [1,1] [1,2] [1,3] [1,4]
                                                                     [2,0] [2,1] [2,2] [2,3] [2,4]
                                                                     [3,0] [3,1] [3,2] [3,3] [3,4]
                                                                     [4,0] [4,1] [4,2] [4,3] [4,4]  here the center is (2,2) & so we know the formula for
                                                                     Manhattan Distance between two pointss (X1, Y1) and (X2, Y2) in a grid is "|X1 – X2| + |Y1 – Y2|" */
                                                                                                                   
    
    cout<<moves<<endl;
   
    return 0;
}
