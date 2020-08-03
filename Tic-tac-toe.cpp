#include <iostream>

using namespace std;
int arr[9]={9, 9, 9, 9, 9, 9, 9, 9, 9};
int lst=9;
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
    cout<<"\n";
}
int input(){
    update();
    cin>>b>>val;
    if(!(b>=1&&b<=9)){
        return 1;
    }
    if(!(val==0||val==1)){
        return 1;
    }
    if(arr[b-1]!=9){
        return 1;
    }
    return 0;
}
int wincheck(){
    if((arr[0]==0&&arr[1]==0&&arr[2]==0)||(arr[3]==0&&arr[4]==0&&arr[5]==0)||(arr[6]==0&&arr[7]==0&&arr[8]==0)){
        return 0;
    }
    if((arr[0]==0&&arr[3]==0&&arr[6]==0)||(arr[1]==0&&arr[4]==0&&arr[7]==0)||(arr[2]==0&&arr[5]==0&&arr[8]==0)){
        return 0;
    }
    if((arr[0]==0&&arr[4]==0&&arr[8]==0)||(arr[2]==0&&arr[4]==0&&arr[6]==0)){
        return 0;
    }
    ////////////////////////////////////////////////
    if((arr[0]==1&&arr[1]==1&&arr[2]==1)||(arr[3]==1&&arr[4]==1&&arr[5]==1)||(arr[6]==1&&arr[7]==1&&arr[8]==1)){
        return 1;
    }
    if((arr[0]==1&&arr[3]==1&&arr[6]==1)||(arr[1]==1&&arr[4]==1&&arr[7]==1)||(arr[2]==1&&arr[5]==1&&arr[8]==1)){
        return 1;
    }
    if((arr[0]==1&&arr[4]==1&&arr[8]==1)||(arr[2]==1&&arr[4]==1&&arr[6]==1)){
        return 1;
    }
    return 9;
}
void change(){
    if(lst==9){
        lst=val;
        arr[b-1]=val;
    }else{
        if(lst==0&&val==0){
        }else if(lst==1&&val==1){
        }else{
            arr[b-1]=val;
            lst=val;
        }
    }
}
int main()
{   update();
    while(1){
        while(input()){}
        change();
        update();
        if(wincheck()==0){
            cout<<"0 wins"; break;
        }
        if(wincheck()==1){
            cout<<"1 wins"; break;
        }
    }
    return 0;
}
