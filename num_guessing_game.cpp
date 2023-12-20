#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
    srand((unsigned int) time(NULL));

    int number=(rand()% 100)+1;

    int guess=0;

do
{
    cout<<"Enter your guess: ";
    cin>>guess;

    if (guess>number)
       cout<<" Your guess is too high!"<<endl;
    else if (guess<number)
       cout<<" Your guess is too low!"<<endl;
    else
       cout<<"Congratulation !You correctly guess the number!"<<endl;
       
} while (guess!=number);

return 0;
}
