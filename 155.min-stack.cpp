
// class StackException : public logic_error {
// public:
//     StackException(const string& message = "")
//             : logic_error(message.c_str()) {}
// };

// class MinStack {
// public:
//     vector<int> v;
//     int min_idx;

//     /** initialize your data structure here. */
//     MinStack() {
//         min_idx = 0;
//     }
//     int findMin() {
//         int min = v[0];
//         int min_pos = 0;
//         for(int i = 1; i < int(v.size()); ++i) {
//             if(v[i] < min){ 
//                 min = v[i];
//                 min_pos = i;
//             }
//         }
//         return min_pos;
//     }
    
//     void push(int x) {
//         v.push_back(x);
//         if(int(v.size()) == 1) min_idx = 0;
//         else {
//             if(v[min_idx] > x) min_idx = int(v.size()) - 1;
//         } 
//     }
    
//     void pop() {
//         if(int(v.size()) == 0) throw StackException("StackException: stack empty on pop");
//         if(!v.empty()) {
//             v.pop_back();
//             if(min_idx == int(v.size())) min_idx = findMin();
//         }
//     }
    
//     int top() {
//         if(int(v.size()) == 0) throw StackException("StackException: stack empty on top");
//         return v[int(v.size()) - 1];
//     }
    
//     int getMin() {
//         if(int(v.size()) == 0) throw StackException("StackException: stack empty on getMin");
//         return v[min_idx];
//     }
// };
class MinStack {
    stack<int> s1;
    stack<int> s2;
public:
     MinStack() {

     }

     void push(int x) {
        s1.push(x);
        if(s2.empty() || x <= s2.top()) {
            s2.push(x);
        }
     }
    
     void pop() {
        int min = s1.top();
        s1.pop();
        if(s2.top() == min) {
            s2.pop();
        }

     }
    
     int top() {
        return s1.top();
     }
    
     int getMin() {
        return s2.top();
     }
 };
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */