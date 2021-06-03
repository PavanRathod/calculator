#include <iostream>

using namespace std;
class calculator
{
    int x,y;
public:
    void get_values()
        {
            int z;
            do
            {
        cout<<"enter x value: ";
        cin>>x;
        cout<<"enter y value: ";
        cin>>y;

        int number = 0;
         cout << "\nplease choose the arithmetic operation";
         cout <<"\n 1.addition \n 2.multiplication \n 3.division \n 4.subtraction \n 5.%\n ";
         cin >> number;
        switch(number)
          {
            case 1:
              {
                 cout<<"\nsum of "<<x<<" and " <<y<< " is "<<x+y;
                 break;
              }
            case 2:
              {
                 cout<<"\nproduct of " <<x<< "and " <<y<< " is " <<x*y;
                 break;
              }
            case 3:
                {
                    cout<<"\ndivision of "<<x<< " and "<<y<< " is "<< y/x ;
                    break;
                }
            case 4:
                {
                    cout<<"\nDifference of "<<x<< " and "<<y<< " is " <<x-y;
                    break;
                }
            case 5:
                {
                    cout<<"\n%: "<<x%y;
                    break;
                }
                default:
                {
                    cout<<"\nplease enter a valid number";
                }
          }
          cout <<"\ndo you want to perform another operation: "; //0 for "yes" and 1 for "NO"
          cin>>z; //yes=0 & no = 1
      }
          while(z==0);
    }

~calculator()
{

}
};
int main()
{
   calculator obj;
   obj.get_values();
    return 0;
}
