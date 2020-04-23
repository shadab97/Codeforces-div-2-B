/*
     ######  ##     ##    ###    ########     ###    ########     #######  ########
    ##    ## ##     ##   ## ##   ##     ##   ## ##   ##     ##   ##     ## ##    ##
    ##       ##     ##  ##   ##  ##     ##  ##   ##  ##     ##   ##     ##     ##
     ######  ######### ##     ## ##     ## ##     ## ########     ########    ##
          ## ##     ## ######### ##     ## ######### ##     ##          ##   ##
    ##    ## ##     ## ##     ## ##     ## ##     ## ##     ##   ##     ##   ##
     ######  ##     ## ##     ## ########  ##     ## ########     #######    ##
 
    happy-coding
    */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    long long int n,k;
    cin>>n>>k;
    long long  arr[27]={};
    string s;
    cin>>s;
    for(long long int i=0;i<s.length();i++){
    	arr[s[i]-'A']++;
	}
	
	sort(arr,arr+27);

	long long int sum=0;
	for(long long int i=26;i>=0;i--){

		if(k>=arr[i]){
    		sum+=arr[i]*arr[i];
    		k-=arr[i];
		}
		else if(k<arr[i]){
			sum+=k*k;
			break;
			
		}
	}
  	cout<<sum<<endl;
       
    return 0;
}

