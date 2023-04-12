// Pairs
void Pair() {
  pair<int, int> p = {1,2};
  cout<<p.first<<" "<<p.second;
  pair<int, <int, int>> p = {1, {2, 3}};
  cout<<p.first<<" "<<p.second.first;
  pair<int, int> arr[] = { {1,2}, {3,4}, {2,4}};
  cout<<arr[1].second;
}
