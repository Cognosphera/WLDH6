
// Erect the Fence
class Solution {
  static int cross(Point o, Point a, Point b) {
    return (a.x-o.x)*(b.y-o.y)-(a.y-o.y)*(b.x-o.x);
  }
  static bool cmp(Point a, Point b) {
    return a.x < b.x || a.x == b.x && a.y < b.y;