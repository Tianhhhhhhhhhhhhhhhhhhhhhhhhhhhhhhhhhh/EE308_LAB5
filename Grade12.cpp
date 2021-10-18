#include <iostream>
#include <cmath>

using namespace std;

bool Grade12( double arr[3]);

int main()
{
	double arr1[3] = {15,67,0};
	cout<<Grade12(arr1);
	
}

bool Grade12( double arr[3]){
	int casenum = arr[2];
	int firstnum = arr[0];
	int secondnum = arr[1];
	int ans,userans;
	
	if( casenum == 0){
		ans = firstnum + secondnum;
		cout<<firstnum<<" + "<< secondnum<<" = ?"<<endl;
		cin>>userans;
		
		if(ans==userans)
		{
			return true;
		}
		else{
			return false;
		}
		
	}
	
	if(casenum == 1){
		ans =  firstnum - secondnum;
		cout<<firstnum<<" - "<< secondnum<<" = ?"<<endl;
		cin>>userans;
		
		if(ans==userans)
		{
			return true;
		}
		else{
			return false;
		}
	}
	
	else{
		return false;
	}
}
