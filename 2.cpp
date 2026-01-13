#include<iostream>
using namespace std;

int i = 0, k, result;
int P[5000];

int main(){
    
    for(i = 1 ; i <= 5000 ; i++){
        P[i-1] = 2*i-1;
    }
    
    cout << "Please input k: ";
    cin >> k;
    if(k > 0){
        i = 0;
        result = 0;
        
        while(i < 5000){
            if(P[i] % k == 0){
                result = result - P[i];
            }
            else{
                result = result + P[i];
            }

	    	i++;
	    }
	    cout << "Result = " << result;
        
        
    }
    else{
        cout << "Invalid input!!!";
    }
	
	
	
	
	return 0;
}