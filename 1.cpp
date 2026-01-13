#include<iostream>
#include<string>

using namespace std;

string reverse(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string upper(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string lower(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}
string check(string x){
    int i = 0, L = x.size();
    string a = upper(x);
    string b = upper(reverse(x));
    while(i<L){
        if(a[i] != b[i]){
            return "No";
        }
        i++;
    }
    return "Yes";
}

int main(){
    string text;
    cout << "Input text: ";
    getline(cin,text);
    
    
    cout << "Reversed text: " << reverse(text) << endl;
    cout << "Palindrome: " << check(text) ;
    return 0;
}
