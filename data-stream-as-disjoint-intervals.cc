// Data Stream as Disjoint Intervals
/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class SummaryRanges {
  set<int> s;
public:
  /** Initialize your data structure here. */
  SummaryRanges() {
  }

  void addNum(int val) {
    s.insert(va