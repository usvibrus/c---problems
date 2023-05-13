//IN ORDERED SET KEYS ARE STORED IN ORDERED FAASION
//IN UNORDERED IT IS STORED IN UNORDERED FASION//USES HASHING


///UNORDEREDSET DOES NOT HAVE DUPLICATE KEYS

//ordered set has time complexity of ologn
//unorderded set has time complexity of  O{1}

//#UNORDERED SET FUNCTIONS AND METHODS


/*  INSERT()
SIZE()
CLEAR()
BEGIN()

END()
FIND()
ERASE()
COUNT() */



#include <bits/stdc++.h>

using nampespace std;

int main(){



unordered_set<int> s;



s.insert(10);
s.insert(20);
s.insert(30);
s.insert(40);

//here it = s.begin() means start element 
// it!=s.end() means till  s.size()+1  element

for(auto it= s.begin(); it!=s.end();i++){

    cout<<(*it)<<endl;
}


-------------------------------------------------------------------
1}  traversing set to find any element present in set or not


int key  = 20;
if(s.find(key) != s.end()){
    cout<<"key not found"
    }
---------------------------------------------------------------------------

2] delete element

int key = 20;

s.erase(key);


-------------------------------------------------------------------------
3] FINDING A KEY AND DELETING int

int key =20

if(s.find(key)==s.end()){



 auto temp = s.find(key);
 s.erase(temp);
}

-------------------------------------------------------

4] use of .count

if(s.count(5)){
    cout<<"ele found";
}else{cout<<"not found"}