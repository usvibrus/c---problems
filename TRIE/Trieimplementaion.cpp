


struct Node
{
 Node* links[26];
 bool flag = false;

 bool containsKey(char ch){
    return ( links[ch-'a'] !=NULL);
 }

 void put(char ch, Node* node){

links[ch-'a'] = node;

 }

Node* get(char ch){

    return links[ch-'a'];
}


};


class Trie{

private: Node* root;

public:

Trie(){

 root = new Node(); 

}



void insert(string word){

 Node* temp = root;

  for(int i=0;i<word.size();i++){

     if(temp->containsKey(word[i])==false){

           temp->put(word[i],new Node()); 

     }

     temp ->get(word[i]);

  }
   

temp->flag=true; 
}

bool search(string word){
Node* temp = root;


for(int i=0;i<word.size();i++){

  if(temp->containsKey[word[i]])==false){
    return false;
  }

  temp->get(word[i]);
}

if(temp->flag==true){
    return true;
}

}





}