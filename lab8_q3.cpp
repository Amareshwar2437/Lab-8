//Include all necessary libraries
#include <iostream>
using namespace std;

//We need to write a function that will do mean, fin the kth maximum and the kth minimum ny using arrays


int max(int x[], int y, int z){//Perfroming maximum operation by arrays
	return x[y-z];	//Return  values
}
int min(int x[], int y, int z){//Performing minimum operation by arrays and suitable commands
	return x[z-1];
}
//Need to write the main function
	int main(){
	int a;    //Give definantion of arrays
	cout <<" Please enter the number of terms required in the array:"<<endl;
	cin >>a;
	int delta[a];
	cout <<"Please enter the required numbers:"<<endl;
	for(int n=0;n<a;n++) //Attach the required conditions by for, if, else if commands
	cin >>delta[n];
	
	for (int i=0;i<a-1;i++)    //Required conditons
        for (int l=0;l<a-i-1;l++)  
	if(delta[l]>delta[l+1]) {
//Arrangement of  elements according to value
		delta[l]=delta[l]+delta[l+1];
		delta[l+1]=delta[l]-delta[l+1];
		delta[l]=delta[l]-delta[l+1];
}
	//Endgame maybe
	cout <<"enter the k as in to find the kth largest and smallest"<<endl;
	int k;
	cin >>k;
	int kmax = max(delta, a, k);
	int kmin = min(delta, a, k);
	cout <<"kth max is "<< kmax <<endl;
	cout <<"kth min is "<< kmin <<endl;
	 
	return 0;
}

//The Kingslayer will rise again
//The Lunatic Fringe and the kingslayer will reunite again and then smash everyone
