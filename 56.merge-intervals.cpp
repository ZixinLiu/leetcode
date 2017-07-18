/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
	// sort interval according their start in increasing order
	struct cmp{

		// if the comparator return true, it means a should go before b, 
		// don't need to do tie break since if the first one is large range, 
		//it will merge the smaller one with the same start
		bool operator()(Interval &a, Interval &b){
			return(a.start < b.start);
		}
    };	
	// check wether 2 intervals can merged, if they can, a is going to modified to the merged interval
	// if they can't return false;
	bool mergehelp(Interval &a, Interval &b) {
		if(b.start <= a.end && b.end <= a.end) {
			return true;
		} else if(b.start <= a.end && b.end > a.end)  {
			a.end = b.end;
			return true;
		} else {
			return false;
		}
	}

    vector<Interval> merge(vector<Interval>& intervals) {
    	if(int(intervals.size()) == 1) return intervals;
    	vector<Interval> res;
       	sort(intervals.begin(), intervals.end(), cmp());
       	int i = 0;
       	for(; i < int(intervals.size()) - 1;) {
       		int j = i + 1;
       		// limit the range of j,  otherwise -- out of bound
       		while(j <= int(intervals.size()) - 1 && mergehelp(intervals[i], intervals[j])) {
       			j++;
       		}
       		res.push_back(intervals[i]);
       		i = j;
       	}
       	if(i == int(intervals.size()) - 1) {
       		res.push_back(intervals[i]);
       	}
       	return res;
    }
    // idea: loop the vector, j = i+1, keep merge until it can't , i = j, j = i+1
    // then move to the next round
};