//Include all necessary libraries
#include <iostream>
using namespace std;
//We need to programme that will do sum by using arrays
int sum(int x[], int y){
    int i=0;
	for(int n=0;n<y;n++) //Declaring conditions
	i+=x[n]; //USING ARRAYS TO DO SUM
	return i;
}
//Need to write the main fucntion now
	int main(){
	int a;    //ask user to define the array
	cout <<"enter the no. of terms you wanna sum"<<endl;
	cin >>a;//Taking value for the size of the array
	int delta[a];
	cout <<"enter the numbers you wanna sum"<<endl;//Ask the user to enter the elements
	for(int n=0;n<a;n++)
	cin >>delta[n];
	int lunaticfringe = sum(delta, a); //Introduce the main variable and do cout
	cout <<"the sum is " <<lunaticfringe<<endl;
return 0;
}

//Thank You Roman
