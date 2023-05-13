#include <bits/stdc++.h>

using namespace std;

int main(){


umorderded_map<string,int> umap;


umap["uday"] = 1; // statically storing elements inside map
umap["bapu"] = 2;
umap["bhamre"] = 3;

////// 1] way of traversing 
for(auto it :umap){

    cout<<umap.first<<"  "<<umap.second;
}


//second way of traversing

for(auto it = umap.begin();it!=umap.end();it++){

    cout<<umap->first<<" "<<umap->second;
}







//finding key

string key = "uday";

if(umap.find(key)!=umap.end()){

    cout<<"key found"<<endl;
}




///finding key printing it 

if(umap.find(key)!=umap.end()){

    auto temp = umap.find(key);
    cout<<" key is"- temp->fisrt;
    cout<<"value is " temp->second;
}

//size map
umap.size();


/////ERASE KEY

 key = "uday";
 umap.erase(key);




}