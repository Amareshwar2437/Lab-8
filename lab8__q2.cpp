//Include all necessary libraries
#include <iostream>
using namespace std;
//We need to write a program that will do the mean,max,median,min and many other things by using arrays
float mean(int x[], int y){
    int m=0;
	for(int n=0;n<y;n++)
	m+=x[n];//Use of arrays done
	return m/y;
}
int max(int x[], int y){ //Functiom maximum execution
	return x[y-1];
}
int min(int x[], int y){//Function minimum execution
	return x[0];
}
float med(int x[],int y){//for med
	if(y%2==0)
	return ((x[y/2-1]+x[y/2])/2);
	else
	return x[(y-1)/2];
}
//Now write the main fucntion
	int main(){
	int a;    //Array Initiation
	cout <<"Please enter the number of terms required in array"<<endl;
	cin >>a;//Take value from terminal
	int delta[a];
	cout <<"Please enter the required numbers:"<<endl;
	for(int n=0;n<a;n++)
	cin >>delta[n];//Take value from terminal
	float meanNum = mean(delta, a);
	for (int i=0;i<a-1;i++)    //Ask for  necessary conditions
        for (int l=0;l<a-i-1;l++)  //Ask for necessary conditions
	if(delta[l]>delta[l+1]) {//Arrangement of elements in the order of their values
		delta[l]=delta[l]+delta[l+1];
		delta[l+1]=delta[l]-delta[l+1];
		delta[l]=delta[l]-delta[l+1];
	}
	int maxNum = max(delta, a);
	int minNum = min(delta, a);
	float median = med(delta, a);
	cout <<"The mean of the numbers is:"<<meanNum<<endl;
	cout <<"The maximum of the numbers is:"<<maxNum<<endl;
	cout <<"The minimum of the numbers is:"<<minNum<<endl;
	cout <<"The median is"<<median<<endl;
	
return 0;
}
//The shield will reunite and will rule again
//Brotherhood in arms
