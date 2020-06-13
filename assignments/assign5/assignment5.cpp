#include <iostream> 
#include <cstring> 
#include <cstdlib> 
#include <string> 

using namespace std; 
g

void print_board(char** board, int row, int col){
 for(int i = 0; i< col;++i)
    cout << "   "<< i+1 << "   " ;

  cout << endl;
  
  for(int i = 0; i< row; i++){
   for(int k = 0; k<col; k++){
      if(i % 2 == 0 && k % 2 == 0){
         cout << " |\033[30;47m " << board[i][k] <<" ";
      }
      else if (i%2 == 1 && k%2 == 1 ){
         cout << " |\033[30;47m " << board[i][k] <<" ";
      }
      else{
	 cout << " |\033[0m " << board[i][k] <<" ";
      }
      cout << " \033[0m ";
   
   }
   cout << endl; 
  
  
  }
 
}

bool check_winner(char** board, int row,int col, int column, char player){
   
  int counter = 0; 
  for(int i = 0; i<row; i++){
    if(board[i][column] == player){
       counter++;
        if(counter == 4){
	  cout << "YOU WIN! " << endl; 
	  return true; 
	}
    }
    else 
       counter = 0; 
  }

  for(int l = 0; l<col; l++){
     if(board[row][l] == player){
	counter++;
       if(counter == 4){
         cout << "YOU WIN" << endl; 
	  return true;
      }
      else 
      {
         counter = 0; 
      }
   }
  }
  for(int l = 0; l<col; l++){
     int counter2; 
     if(board[row][l] == player && board[row-1][l-1]){
	counter++; 
      }
      if(board[row][l] == player && board[row-2][l-2]){
        counter2 ++;
      }
       int sum = counter2+counter+1 ;
       if(sum > 4){
         cout << "YOU WIN! " << endl; 
	 return true; 
       }
        else 
        {
        counter = 0; 
        }
	
  }	
  return false; 
}



char** create_board(int row,int col){
  char** board = new char*[row];
  for(int i=0; i<row;i++){
    board[i] = new char[col]; 
  }
  for(int k = 0; k<row; k++ ){
   for(int l = 0; l<col; l++){
     board[k][l] = ' ';
    }
  }
  return board;
}

int two_player(int row, int col, char** b){
  print_board(b,row,col);
  cout<< "Player one please enter a column to place piece X: " << endl; 
  int column; 
  cin >> column; 
  if(column > col){
     return false; 
  }
  
}

bool board_update(char**b, int row, int col, int column, char player){
   for(int i =row ; i >= 0; i--){
      if(b[i-1][column] == ' '){
	 b[i-1][column] = player;
	 print_board(b,row,col);
	  return true; 
      }
   }
   return false; 
}

int main( int argc , char ** argv){
  cout << argv[1] << endl  << argv[2] << endl << argv[3] << endl;
 // if(argv != 3){
 //   return 0; 
 // }
  /*if(players > 2){
    cout << "Error! maximum two players allowed to play: " << endl; 
    cout << "Please enter a valid number of players " << endl; 
    int play; 
    cin >> play; 
  }
  if(rows > 20 || columns > 20 ){
    cout << "Error the board can have a maximum of 20 rows please enter a smaller number:" << endl; 
    cout << "Please enter a new number of rows and columns:  "
      int r;
      int s ; 
    cin >> r; 
    cin >> s; 
  }
 */

  int row = atoi(argv[2]); 
  int col = atoi(argv[3]); 
  //allocate memory using board,before the following function cALL 
   
  char** b =  create_board(row,col);
   print_board(b,row,col);
   board_update(b,4,2,3,'X');
   
 

  return 0; 




}
