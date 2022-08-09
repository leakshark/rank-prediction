// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
#include<utility>
#include<algorithm>
#include<vector>
#include<map>
//#include<iterators>
#include<list>
#include<memory>
#include<bitset>
#include<queue>
#include<set>
#include<complex>
#include<numeric>
#include<valarray>
//------------------------------------------------------------
using namespace std;

//int check(pair<char,char>&college,int rank)

int main() {
    // Write C++ code here
    //std::cout << "Hello world!";
    pair<string,pair<string,int>>p1=make_pair(("cse"),make_pair("nit cse",5));
    pair<string,pair<string,int>>p2=make_pair(("ece"),make_pair("nit ece",10));
   // pair<string,int>p2=make_pair("nit it",15);
    pair<string,pair<string,int>>p3=make_pair(("cse"),make_pair("bcrec cse",20));
    pair<string,pair<string,int>>p4=make_pair(("ece"),make_pair("bcrec ece",25));
    pair<string,pair<string,int>>p5=make_pair(("it"),make_pair("bcrec it",30));
    
    
   
    int rank;
    //int n=5;
    //int ele;
    vector<string>v1;
    
    cout<<"Enter your Rank::"<<" ";
    
    cin>>rank;
    
    string branch;
    
    cout<<"Enter your Branch::"<<" ";
    
    cin>>branch;

    
    //for(int i=0;i<check.length();i++){
      //  if(check[i]==branch){
        //}
    //}
    
    for(int i=0;i<10;i++){
        if(rank<=p1.second.second){
            if(branch==p1.first){
            v1.push_back(p1.second.first);//<<endl;
            v1.push_back(p3.second.first);//<<endl;
            }
            else if(branch==p2.first){
            v1.push_back(p2.second.first);//<<endl;
            v1.push_back(p4.second.first);
            }//<<endl;
            else if(branch==p5.first){
            v1.push_back(p5.second.first);//<<endl;
            //p1.second=p1.second-1;
            }
            break;
        }
        if(rank>p1.second.second && rank<=p2.second.second){
            if(branch==p1.first){
            v1.push_back(p3.second.first);//<<endl;;
            }
            else if(branch==p2.first){
            v1.push_back(p2.second.first);//<<endl;
            v1.push_back(p4.second.first);
            }//<<endl;
            else if(branch==p5.first){
            v1.push_back(p5.second.first);//<<endl;
            }
        }
        if(rank>p2.second.second && rank<=p3.second.second){
            if(branch==p1.first){
            v1. push_back(p3.second.first);//<<endl;
            }
            if(branch==p2.first){
            v1.push_back(p4.second.first);
            }//<<endl;
            else if(branch==p5.first){
            v1.push_back(p5.second.first);
            }//<<endl;
        }
        if(rank>p3.second.second && rank<=p4.second.second){
            if(branch==p1.first){
                 cout<<"NO SEAT"<<endl;
                break;
            }
            else if(branch==p2.first){
            v1.push_back(p4.second.first);
            }//<<endl;
            else if(branch==p5.first){
            v1.push_back(p5.second.first);//<<endl;
            }
        }
        if(rank > p4.second.second && rank<=p5.second.second){
            if(branch==p1.first){
                 cout<<"NO SEAT"<<endl;
                break;
            }
            else if(branch==p2.first){
                 cout<<"NO SEAT"<<endl;
                break;
            }
            else if(branch==p5.first){
            cout<<p5.second.first<<endl;
            }
            
            break;
        }
        else{
            cout<<" BETTER LUCK NEXT TIME"<<endl;
            break;
        }
    }
    
    for(auto it:v1){
        cout<<it<<endl;
    }
    
    
    
    return 0;
}