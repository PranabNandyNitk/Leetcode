#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
// a=4   b=3
 //  1       3
 //       3+1

Ox 12 34 56 78
   12 34 56 78
   78 56 34 12
void MEMCPY(void *arr,void *brr,int s){
    //size_t size=(size_t)s;
    //brr=(int*)malloc(size);
    int size=s/(sizeof(*arr));
    if(arr==nullptr) return;
    if(brr==nullptr) return;
    for(int i=0;i<s;i++) 
      *(brr+i)=(char *)(*arr+i);
}

int main(){
  /*int a,b;
  cin>>a>>b;
  a=a^b;  */    
  /* a ^ b =c 
              c^a= b;    a^b^a =  
              c^b = a;

  */
  /*
  p1--->  .......         
  p2---->  ......

  */
 /* b=a^b;
  a=a^b;
  cout<<a<<b;*/

  int *ptr;
  int arr[]={1,2};
  int x=5;
  ptr=arr;
  int brr[2];
  int *p;
  char crr[13]="pranab nandy";
  char drr[13];     pranpran
  MEMCPY(crr+0,crr+4,8);
  cout<<*p<<endl;
}

p1  p2  p3 p4

 R  ( p1  , ,,,, p=0 )

BQ : p2  p3

class BS{
private:
  int p= 1;
  BQ que;
  BS(){
    que=new BQ();
  }
  int wait(processid p1){
   /* if(p==0){
      BQ.insert(p1);
    }*/
    while(p==0);
    p--;
  }
  int signal(){
    p++;
    /*if(p==1){
      BQ.front_pop();
    }*/
  }
}

int *ptr;
int a;
ptr=&a;


mutex<mutex_lock> m;
int flag;
void odd(){
  int i=1;
  while(i<=10){
    while(flag==1);
    m.lock();
    cout<<i<<endl;
    i=i+2;
    flag=1;
    m.unlock();
  }
  

}
void even(){
  int i=0;
  while(i<=10){
    while(flag==0);
    m.lock();
    cout<<i<<endl;
    i=i+2;
    flag=0;
    m.unlock();
  }
}
int main(){
  flag=1;
  thread t1(odd);
  thread t2(even);
  t1.join();
  t2.join();
}