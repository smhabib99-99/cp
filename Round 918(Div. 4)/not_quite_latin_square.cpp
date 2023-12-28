#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        vector<string>v,v1,v2;
        for(int i=0;i<3;i++){
            string s;
            cin>>s;
            v.push_back(s);
        }
        
        for(int i=0;i<3; i++){
            string s;
            cin>>s;
            v1.push_back(s);
        }

        for(int i=0;i<3; i++){
            string s;
            cin>>s;
            v2.push_back(s);
        }

        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());



        if(v[0] =="?"){
               if(v[1]=="A" && v[2]=="B"){
                cout<<"C"<<endl;
                // break;
               }else if(v[1]=="B" && v[2]=="C"){
                cout<<"A"<<endl;
                // break;
               }else if(v[1]=="C"&& v[2]=="A"){
                cout<<"B"<<endl;
                // break;
               }
        }



        if(v1[0] =="?"){
               if(v1[1]=="A" && v1[2]=="B"){
                cout<<"C"<<endl;
                // break;
               }else if(v1[1]=="B" && v1[2]=="C"){
                cout<<"A"<<endl;
                // break;
               }else if(v1[1]=="C"&& v1[2]=="A"){
                cout<<"B"<<endl;
                // break;
               }
        }



        if(v2[0] =="?"){
               if(v2[1]=="A" && v2[2]=="B"){
                cout<<"C"<<endl;
                // break;
               }else if(v2[1]=="B" && v2[2]=="C"){
                cout<<"A"<<endl;
                // break;
               }else if(v2[1]=="C"&& v2[2]=="A"){
                cout<<"B"<<endl;
                // break;
               }
        }




        // for(int i=0;i<3;i++){
        //     if(v[i] =="?"){
        //        if(i==0){
        //         cout<<"A"<<endl;
        //         break;
        //        }else if(i==1){
        //         cout<<"B"<<endl;
        //         break;
        //        }else if(i==2){
        //         cout<<"C"<<endl;
        //         break;
        //        }
        //     }
        // }

        // for(int i=0;i<3;i++){
        //     if(v1[i] =="?"){
        //        if(i==0){
        //         cout<<"A"<<endl;
        //         break;
        //        }else if(i==1){
        //         cout<<"B"<<endl;
        //         break;
        //        }else if(i==2){
        //         cout<<"C"<<endl;
        //         break;
        //        }
        //     }
        // }

        // for(int i=0;i<3;i++){
        //     if(v2[i] =="?"){
        //        if(i==0){
        //         cout<<"A"<<endl;
        //         break;
        //        }else if(i==1){
        //         cout<<"B"<<endl;
        //         break;
        //        }else if(i==2){
        //         cout<<"C"<<endl;
        //         break;
        //        }
        //     }
        // }


    }

    return 0;
}