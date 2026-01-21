#include <iostream>
using namespace std;
int geoSteps(int n){
int i,j,m = 0;
for(i = 1;i<=n;i*=2){
for(j=0;j<=i;j++){
m+=1;
}
}
return m;
}
int main(){
cout<< "N = 100, Number of instructions:: "<< geoSteps(20);
return 0;
}