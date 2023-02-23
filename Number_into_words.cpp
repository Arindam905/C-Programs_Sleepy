#include<iostream>
using namespace std;
string num_To_Word(string c,int len){
	string fin;
	int i = 0; 
	while(i<len){
	if(len==3){
		switch(c[i]){
			case '0':fin = " ";break;
			case '1':fin = "One Hundred ";break;
			case '2':fin = "Two Hundred ";break;
			case '3':fin = "Three Hundred ";break;
			case '4':fin =  "Four Hundred ";break;
			case '5':fin =  "Five Hundred ";break;
			case '6':fin =  "Six Hundred ";break;
			case '7':fin =  "Seven Hundred ";break;
			case '8':fin =  "Eight Hundred ";break;
			case '9':fin =  "Nine Hundred ";break;
		}
		len--;
	}
	else if(len == 2){
		if(c[i+1]=='1'){
		
		switch(c[i+2]){
			case '0':fin += "Ten ";break;
			case '1':fin += "Eleven ";break;
			case '2':fin += "Twelve ";break;
			case '3':fin += "Thirteen ";break;
			case '4':fin +=  "Fourteen ";break;
			case '5':fin +=  "Fifteen ";break;
			case '6':fin +=  "Sixteen ";break;
			case '7':fin +=  "Seventeen ";break;
			case '8':fin += "Eighteen ";break;
			case '9':fin +=  "Nineteen ";break;
		}
		return fin;
	}
	 else{
		switch(c[i+1]){
			case '0':fin += "";break;
			case '2':fin += "Twenty ";break;
			case '3':fin += "Thirty ";break;
			case '4':fin +=  "Fourty ";break;
			case '5':fin +=  "Fifty ";break;
			case '6':fin +=  "Sixty ";break;
			case '7':fin +=  "Seventy ";break;
			case '8':fin += "Eighty ";break;
			case '9':fin +=  "Ninety ";break;
		}
	}
	len--;	
	}
else if(len == 1){
	switch(c[i+2]){
		case '0':fin += "";break;
		case '1':fin += "One ";break;
		case '2':fin += "Two ";break;
		case '3':fin += "Three ";break;
		case '4':fin +=  "Four ";break;
		case '5':fin +=  "Five ";break;
		case '6':fin +=  "Six ";break;
		case '7':fin +=  "Seven ";break;
		case '8':fin += "Eight ";break;
		case '9':fin +=  "Nine ";break;
	}
	return fin;
}
}
}
int main(){
	string num,word;
	
	cout<<"Enter your number:";
	cin>>num;
	
	
	int len = num.size();
	
	
	word = num_To_Word(num,len);
	
	
	cout<<word;
}
