#include <bits/stdc++.h>
using namespace std;

void learningpairs(){
    pair <int, int> pairrr1 = {2, 5};
    cout << pairrr1.first << " " << pairrr1.second << endl;
    pair<pair<int,int>, pair<int,int>> pair2 = {{2,5},{4,5}};
    cout << pair2.second.first;
}
void learningvectors(){
    vector <int> vec = {2, 6};
    vec.push_back(1);
    vec.push_back(5);
    vec.emplace_back(32);

    // cout << vec.size() << endl;
    // for(int i = 0; i < vec.size(); i++){
    //     cout << vec[i] << " ";
    // }
    // cout << vec.back();
    vector<int> :: iterator h = vec.begin();
    // cout << *h << endl;
    vector<int> :: iterator enditr = vec.end();
    // cout << *enditr; //locationa after the end zero
    for(vector<int> :: iterator  i = vec.begin(); i < vec.end(); i++){
        // cout << *i << endl;// location after the last number
    }
    auto i = vec.begin();
    // cout << *i;
    auto revb = vec.rbegin();
    auto reb = vec.rend();
    for(auto i = revb; i < reb; i++){
        // cout << *i << " ";
    }
    // cout << vec.front() << " ";
    // cout << vec.back();
    // vec.pop_back();
    // cout << vec.back();
    for(auto in : vec){
        // cout << in << " ";
    }
    // cout << endl;
    // vec.erase(vec.begin()+1,vec.end() -2);
    for(auto in : vec){
        // cout << in << " ";
    }
    //  cout << vec.at(4);
    auto vec2 ={4,7};
    auto vec3 = {8,9};
    swap(vec2, vec3);
    for (auto i : vec3){
        // cout << i << " ";
    }
    vector<int> pracvec = {5, 6 , 7, 8, 9};
    pracvec.insert(pracvec.begin(), 6);
    for(auto i : pracvec){
        // cout << i << " ";
    }

    

}
void learninglists(){
    list<int> l1 = {5,6,7};
    l1.push_front(6);
    l1.emplace_back(4);
    for(auto i : l1){
        cout << i << " ";
    }
}
void learningstack(){
    // LIFO
    stack<int> st1;
    st1.push(4);
    st1.push(5);
    // cout << st1.top();
    st1.push(6);
    st1.push(7);
    st1.push(8);
    st1.push(9);
    // cout << st1.top() << endl;
    // st1.pop();
    // cout << st1.top() << endl;
    // while (st1.empty() == false){
    //     cout << st1.top() << " ";
    //     st1.pop();
    // }

}
void  learningqueue(){
     // FIFO
     queue<int> q1;
     q1.emplace(5);
     q1.push(7);
     cout << q1.size() << endl;
     cout << q1.front() << endl;
     while(q1.empty() == false){
        cout << q1.front() << " ";
        q1.pop();
     }

}
void learningpriorityqueue_heap(){
    // gives the largest element first
    priority_queue<int> pq1;
    pq1.push(5);
    pq1.emplace(34);
    pq1.push(444);
    pq1.emplace(332);
    pq1.push(3);
    pq1.emplace(32);
    cout << pq1.top() << " ",
    pq1.pop();
    cout << pq1.top() << " ";
}
void learninglowerpq(){
    //gives the lowest element first
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.emplace(34);
    pq.emplace(234);
    pq.emplace(343);
    pq.emplace(244);
    pq.emplace(4);
    pq.emplace(24);
    while(pq.empty() == false){
    cout << pq.top() << " ";
    pq.pop();}
}
void learningset(){
    //stores only the unique ele
    // and in asc order
    set<int> set1;
    set1.insert(34);
    set1.insert(34);
    set1.insert(12);// removed all the dup
    set1.emplace(747);
    set1.emplace(423);
    set1.insert(234);
    for(auto i : set1){
        // cout << i << " ";
    }
    // smallest is stored at the first place
    // to find particular element
    auto find = set1.find(48438); //finds the number
    if(find != set1.end()){ 
        // cout << *find << endl;
    }
    /*checks if it is there in the 
    set or not or else returns the number 
    after the last digit.*/ 
    // cout << set1.count(34) << endl;
    // auto it = set1.erase(34);
    for(auto i : set1){
        cout << i << " ";
    }
    cout << endl;
    auto it1 = set1.begin();
    it1++;
    auto it2 = set1.end();
    it2--; // since the last element is a garbage
    
    // set1.erase(it1, it2);

    for(auto it3 : set1){
        // cout << it3 << " ";
   }
   auto i1 = set1.lower_bound(7446); // the first number
   //greater than or equal to the num given
//    cout << *i1 << endl; pointer loc
   if( i1 == set1.end()){
//    cout << "num not there, the end";
   }
   //upper bound
//    auto i2 = set1.upper_bound(423);
//    if(i2 == set1.end()){
//     cout << "num non there,  the end";
//    }
//    else{
//     cout << *i2 << endl;
//    }

}
void learning_multiset(){
    // basically what it does is that 
    //stores all the dupes too
    // that too in asc order;;;;
    multiset<int> mul1;
    mul1.emplace(23);
    mul1.insert(43);
    mul1.emplace(23);
    mul1.insert(43);
    mul1.emplace(243);
    mul1.insert(423);
    // cout << mul1.count(23) << endl;
    auto er = mul1.erase(mul1.find(23));
    for(auto er : mul1){
        cout << er << " ";
    }
}
void  learning_unorderedset(){
    unordered_set<int> un1;
    // no particular sequence
    un1.emplace(2);
    un1.emplace(12);
    for(auto i : un1){
        cout << i << " ";
    }

}
void learningmap(){
    map<int,  string> mpp1;
    mpp1.insert({0, "hello"});
    mpp1[1] = "ganesh";
    mpp1[2] = "raj";
    mpp1[3] = "hi";

    for(auto i : mpp1){
        cout << i.first << "-->" << i.second << endl;
    } 
    auto i1 = mpp1.find(2);
    cout << (*i1).first << " " << (*i1).second << endl; 
    auto i2 = mpp1.find(5);
    if(i2 == mpp1.end()){
        cout << " not found" << endl;
    }
}
//learning_unordered_maps;
void learning_mutimaps(){
    multimap<int, string> mp1;
    mp1.insert({1,"ganesh"});
    mp1.insert({2,"gaesh"});
    mp1.insert({2,"gnesh"});
    mp1.insert({2,"anesh"});
    mp1.insert({5,"gansh"});
    mp1.insert({6,"ganeh"});

    // for(auto i : mp1){
    //     cout << i.first << " " << i.second << endl;
    // }
    // auto i222 = mp1.equal_range(2);
    // for(auto i1 = i222.first; i1 != i222.second; i1++){
    //     cout << (*i1).first << " " << (*i1).second << endl;
    // } imp and did'nt understand lol!

}
void explain_sort(){
    // basically helps to sort things out
    int arr[5] = {4,523,4,34,32};
    sort(arr, arr+4);
    for(auto i : arr){
        // cout << i << endl;
    }
    // or other way to print
    for(int i = 0; i < 5; i++){
        // cout << i << endl;
    }
    vector<int> vec1;
    vec1.push_back(3);
    vec1.emplace_back(4);
    sort(vec1.begin(), vec1.begin() + 1);
    for (auto i : vec1){
        cout << i << endl;
    }



}
void learn_accumalate(){
    // returns the sum of the par. arr
    int arr[5] = {1,2,3,4,5};
    cout << accumulate(arr, arr + 5,5); //  the last 
                                        // digit five is nothing but
                                        // it is the initial value of the
                                        // sum = 0;

}
void learn_count(){
    // gives the number of times something  occurs
    int arr[5] = {4,5,6,67,4};
    int key;
    cout << "enter key: " << endl;
    cin >> key;
    if(count(arr, arr +5, key) != 0){
        cout << "True";
    }
    else{
        cout << "Fasle" << endl;
    }
    // cout << count(arr, arr + 5, key);
}
void learn_find(){
    // returns an iterator pointing the particular key
    int arr[5] = {3,5,6,7,8};
    int key;
    cin >> key;
    auto i = find(arr, arr + 5, key);
    if(i == arr + 5){
        cout << "not found // returning to the element after the fifth" << " ";
    }
    else{
        cout << "found";
    }

}
void learn_permutation(){
    string name = "abc";
    do{
        cout << name << endl;
    }
    while((next_permutation(name.begin(),name.end())));

}
void learn_max_min(){
    // gives the iterator the max and min element
    //using max_element and min_element 
    int arr[5] = {1,2,3,4,5};
    auto it = max_element(arr, arr + 5);
    cout << *it << endl;
    auto it1 = min_element(arr, arr+5);
    cout << *it1;
}
void learn_reverse(){
    //for reverse no need to declare any auto or 
    //put inside a variable.
    int arr[5] = {1,2,3,4,5};
    reverse(arr, arr +5);
    //just reverses in the backend;
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
}
void learn_pow(){
    int num = 5;
    cout << pow(num,2);
}
void learn_sqrt(){
    int num = 25;
    cout << sqrt(num);
}
int main(){
    // learningpairs();
    // learningvectors();
    // learninglists();
    // learningstack();
    // learningqueue();
    // learningpriorityqueue_heap();
    // learninglowerpq();
    // learningset();
    // learning_multiset();
    // learning_unorderedset();
    // learningmap();
    // learning_mutimaps();
    // explain_sort();
    // learn_accumalate();
    // learn_count();
    // learn_find();
    // learn_permutation();
    // learn_max_min();
    // learn_reverse();
    // learn_pow();
    // learn_sqrt();
    return 0;
    }