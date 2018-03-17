/* Assignment Two

Name ::Jahidul Alam
Id   ::162 1558 042
sec  ::02

*/


#include <bits/stdc++.h>
using namespace std;
void SieveOfEratosthenes(int n){
 int primes[n+1];

 for(int i=0;i<=n;i++){
    primes[i]=1;//initially all number are considering prime
 }

 primes[0]=0; //we know "0" is not a prime number
 primes[1]=0; //we know "0" is not a prime number

  for(int i=2;i<=n;i++){
    if(primes[i]==1){
        // Update all multiples of i
        for(int j=2;i*j<=n;j++){
            primes[i*j]=0;
        }
    }
 }
 // Print all prime numbers
  for(int i=2;i<=n;i++){
     if(primes[i]==1)
        cout<<i<<" ";

}

}
int main(){
  int n;
  cout<<"Enter Nth number: ";
  cin>>n;
  cout<<"Regarding Prime Numbers are : ";SieveOfEratosthenes(n);
  return 0;
}
