#include <iostream>
#include <cstdlib>
#include <cmath>
#include <time.h>
using namespace std;

int main()
{
        cout << "welcome to Password Creator! " << endl ;

        cout << "How long do you want the password to be? " << endl;
        int passlength;
        cin >> passlength ;

        cout << "Do you want letters (0-no, 1-yes)? " << endl;
        int let ;
        cin >> let ;

        cout <<"Do you want uppercase letters (0-no, 1-yes)? " << endl ;
        int uplett;
        cin >> uplett ;
        int charupp; 
                if (uplett == 1)
                {       
                        cout <<"How many characters of the password should be uppercase?" << endl;
			cin >> charupp ; 
                              for(int i = 0 ; i < passlength; i++ )
                               {
                                  if((passlength-charupp) > passlength)
                                    
                                    break;
                                }
}
        cout << "Do you want lowercase letters (0-no, 1-yes)? " << endl ;
        int lowlett;
        cin >> lowlett;
        int charlow ; 
                 if (lowlett == 1)
                {
                        cout <<"How many characters of the password should be lowercase?" << endl;
			 cin >> charlow ;
                              for(int i = 0 ; i < passlength; i++ )
                               {
                                  if((passlength-charlow) > passlength)
                                    
                                    break;
                               }
                  } 
 	cout << "How many characters should be a number? " << endl;
        int numnum;
        int carrot = (passlength- charupp - charlow); 
        cin >> numnum;
          for(int i = 0 ; i < passlength; i++ )
          {
                               {
                                  if(carrot > passlength)
                                  break;
                               }
          }

                srand(time(NULL));

                for(int i = 0; i < charupp; i++) {
                        cout << char(rand()%26 + 'A');
            
                }

		for(int i = 0; i < charlow; i++) {
                        cout << char(rand()%26 + 'a');
            
                }
                for(int i = 0; i < numnum; i++) {
                        cout << (rand()%10 + '0');
            
                }
                cout<< endl;
                 

return 0 ;

}
