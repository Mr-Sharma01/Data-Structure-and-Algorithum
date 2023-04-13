
// Pairs

void Pair() {
  pair<int, int> p = {1,2};
  cout<<p.first<<" "<<p.second;
  pair<int, <int, int>> p = {1, {2, 3}};
  cout<<p.first<<" "<<p.second.first;
  pair<int, int> arr[] = { {1,2}, {3,4}, {2,4}};
  cout<<arr[1].second;
}



//Vector

void Vector() {
  vector<int> v;
  
  v.push_back (5);
  v.emplace_back (7);       //same as push back but fast
  
  vector<int> v(5,20);      //{20,20,20,20,20}
  vector<int> v2(5);        //it will store 5 garbage value
  vector<int> v1(v);        //coping v to v1
  
  
  vector<int> :: iterator itr = v1.begin();
  cout<<*(itr);
  itr = v1.end();           //end() – it returns an iterator pointing to the element theoretically after the last element of the vector.
  itr= v1.begin();
  v1.insert(itr,5); //inserting 5 at the beginning
  itr= v1.begin();
  v1.erase(itr); // erasing the first element
  v1.pop_back();
  v1.front();
  v1.back();
  v1.clear(); //clear() – deletes all the elements from the vector.
  v1.empty(); //empty() – to check if the vector is empty or not.
  v1.size();
  v1.swap(v2);
  
  for (auto it = v.begin(); it != v.end(); it++)
    cout << * it << " ";
  
  for( auto it : v) 
    cout<<it<<" ";
    

  
//Lists
  
  
