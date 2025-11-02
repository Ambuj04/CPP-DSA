 #include<iostream>
 #include<unordered_map>
 using namespace std;
 
 int main(){
  //creation
  unordered_map<string,int> m;
  
  //insertion
  pair<string,int> p = make_pair("car",0);
  m.insert(p);
  
  pair<string,int>p1("bike",1);
  m.insert(p1);

  m["cycle"] = 2;

  //access
  cout<<m.at("car")<<endl;//0
  cout<<m.at("cycle")<<endl; //2 
  cout<<m["bike"]<<endl; //1


  //search
  cout<<m.count("car")<<endl;//1

  if(m.find("car") != m.end()){
    //cycle found
    cout<<"found";
  }else{
    
    cout<<"not found";
  }

  cout<<m.size()<<endl; //3
  cout<<m["bicycle"]<<endl; //0
  //this cout method give and if avail and if not then create entry and give value 0
 
  cout<<m.size()<<endl; //4
 
  //printing all entries

  for (auto i : m){
    //here i is pair
    cout<<i.first<<" "<<i.second<<endl;
  }
  
 return 0;
  }