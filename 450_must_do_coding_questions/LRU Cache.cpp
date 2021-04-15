class LRUCache
{
map<int,int> mp;
deque<int> temp;
int no;
public:
 LRUCache(int capacity)
{
     mp.clear();
  temp.clear();
  no = capacity;
}
/*Sets the key x with value y in the LRU cache */
void set(int key, int value) 
{
      if (mp.find(key)==mp.end())
   {
       if (temp.size()==no)
       {
        int k = temp.back();
        temp.pop_back();
        mp.erase(k); 
       }
   }
    else 
    {
        deque<int> :: iterator itr = temp.begin();
        while (*itr!=key) itr++;
        temp.erase(itr);
        mp.erase(key);
    }
    temp.push_front(key);
    mp[key] = value;
}
/*Returns the value of the key x if 
present else returns -1 */
int get(int key)
{
  if (mp.find(key)==mp.end()) return -1;
  else
  {
      deque<int> :: iterator itr = temp.begin();
      while (*itr!=key) itr++;
      temp.erase(itr);
      temp.push_front(key);
      return mp[key];
  }
}