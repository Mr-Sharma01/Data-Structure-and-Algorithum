
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
}  

  
//Lists
  list<int> li;
  li.push_back(110);
  li.push_front(220);
  li.pop_back();
  li.pop_front();
  li.front();
  li.back();
  li.reverse();
  li.sort();  //sorts the list in ascending order.
  li.size();
  li.empty();

  
//Deque
  deque<int> dq;
  dq.push_back(110);
  dq.push_back(220);
  dq.push_front(110);
  dq.pop_back();
  dq.pop_front();
  dq.front();
  dq.back();
  dq.size();
  
//Stack LIFO
  stack<int> s;
  s.push(110);
  s.push(220);
  s.pop();
  s.top();
  s.emplace(1);
  s.size();
  s.empty();
  stack<int> st1,st2;
  st1.swap(st2);

//Ques FIFO
  queue<int> q
  for(int i=1;i<=5;i++)
    q.push(i);
  q.push(110);
  q.push(220);
  q.pop();
  q.front();
  q.back();
  q.emplace(1);
  q.size();
  q.empty();

//priority queue        (push,pop- logn ,top- O(n))
In the case of the max heap, priority queues are a type of container adaptors, specifically designed such that its first element is always the greatest
of the elements it contains and the rest elements are in decreasing order.

In the case of the min heap, priority queues are a type of container adaptors, specifically designed such that its first element is always the smallest
of the elements it contains and the rest elements are in increasing order.
  
  priority_queue<int> pq;   //The syntax for a max-heap priority queue

  priority_queue<int,vector<int>,greater<int>> pq;  //The syntax for a min-heap priority queue

  pq.push(110);
  pq.push(220);
  pq.pop();
  pq.top();
  pq.emplace(1);
  pq.size();
  pq.empty();

