#include <iostream>

using namespace std;
int arr[9]={9, 9, 9, 9, 9, 9, 9, 9, 9};
int b, val;
void update(){
    system("clear");
    for(int i=0; i<=8; i++){
        if(i%3==0)
            cout<<"\n";
        if(arr[i]==9){
            cout<<"-";
        }else{
            cout<<arr[i];
        }
        cout<<" ";
    }
    /*cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<"\n";
    cout<<arr[3]<<" "<<arr[4]<<" "<<arr[5]<<"\n";
    cout<<arr[6]<<" "<<arr[7]<<" "<<arr[8]<<"\n";
    */
}
int input(){
    cin>>b>>val;
    if(b<1||b>9||val!=0||val!=1){
        return 0;
    }
    return 1;
}
int wincheck(){
}
int main()
{   update();
    while(input()){
        
    }
    return 0;
}
