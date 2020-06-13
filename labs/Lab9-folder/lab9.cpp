#include <iostream>
#include <string>
#include<cmath>
#include <cstdlib> 

using namespace std; 

void initialize_array(int** b){
  for (int i =0; i < 3; i++){
  for(int j =0; j < 3 ; j++){
    b[i][j] = 0;
  }
        }
  for (int i = 0; i < 3; i++){
     b[i][0] = (i+1);	  
  }
}

void moveDisk(int disk, int** b, int from_column, int to_column, int rows);


void printArray(int** b, int rows){
    for (int x = 0; x<rows; x++){
        for (int y = 0; y<3; y++){
	        cout<<b[x][y];
	    }
        cout<<endl;
        }
    cout<<"-----------------------"<<endl;
}
void towers(int disks, int** b, int from_column, int to_column,int rows , int spare){
    if(disks >= 0){
      towers(disks-1, b, from_column, to_column,rows, spare);
      cout<<"Moving disk "<< disks <<" from "<< from_column <<" to "<<to_column<<endl;
      moveDisk(disks-1, b, from_column, to_column,rows); 
      printArray(b, rows);
      towers(disks-1, b, from_column, to_column, rows, spare);
    }
}
void moveDisk(int disk, int** b, int from_column, int to_column, int rows){
    int lowest;
    int i;
    for(i = rows-1; i>=0 && b[i][from_column]!=0; i--){
        disk = i;
        }
    for(i = rows-1; i>=0; i--){
        if (b[i][to_column]!=0){
	  ;
	 }
        else{
	   lowest = i;
	    break;
	}    
    }
    b[lowest][to_column] = b[disk][from_column];
    b[disk][from_column] = 0;
}

void print_towers(int** b, int length) {
    for(int i = 0; i < length; i++) {
     for(int j = 0; j < 3; j++) {
	cout << "; " << i << " ; " <<  j << endl; 
	cout << b[i][j];
     }
        cout << endl;
     }
    cout << "---" << endl;
}

int main(int argc, char** argv) {
  cout << "Number of disks : " << argv[1] << endl;
  int x;
  if(argc != 2) {
    return 0;
   }
   x = argv[1][0] - 48;
   cout << x << endl; 
   int** b = new int*[x];
   for(int i = 0; i < x; i++) {
      b[i] = new int[3];
      for(int j = 0; j < 3; j++) {
         b[i][j] = 0;
      }
         b[i][0] = i + 1;
   // initialize_array(b);
    print_towers(b, x);
    towers(x, b, 0, 2, 1, x);
    for(int z = 0; z < x; z++) {
	 delete[] b[z];
    }
    delete[] b;
}
}


