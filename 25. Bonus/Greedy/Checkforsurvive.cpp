class Solution {
  public:
    int minimumDays(int S, int N, int M) {

        // Daily feasibility
        if (M > N) return -1;

        // Weekly feasibility (CRITICAL)
        if (S > 6 && M * 7 > N * 6) return -1;

        int totalFood = S * M;
        return (totalFood + N - 1) / N; // ceil division
    }
};
