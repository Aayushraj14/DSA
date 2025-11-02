class Solution {
public:
    void solve(vector<vector<char>>& view, int i, int j) {
        int row = view.size();
        int col = view[i].size();

        // right
        int right = j + 1;
        while (right < col && view[i][right] != 'W' && view[i][right] != 'G') {
            view[i][right] = 'T';
            right++;
        }

        // left
        int left = j - 1;
        while (left >= 0 && view[i][left] != 'W' && view[i][left] != 'G') {
            view[i][left] = 'T';
            left--;
        }

        // down
        int down = i + 1;
        while (down < row && view[down][j] != 'W' && view[down][j] != 'G') {
            view[down][j] = 'T';
            down++;
        }

        // up
        int up = i - 1;
        while (up >= 0 && view[up][j] != 'W' && view[up][j] != 'G') {
            view[up][j] = 'T';
            up--;
        }
    }
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
      //..guard ko bhejo  
      vector<vector<char>>view(m,vector<char>(n,'F'));
      for(int i=0;i<guards.size();i++){
       view[guards[i][0]][guards[i][1]]='G';
      }

       for(int i=0;i<walls.size();i++){
       view[walls[i][0]][walls[i][1]]='W';
      }

      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) {
            if(view[i][j]=='G'){
                solve(view,i,j);
            }
        }
      }

        int count=0;
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) {
            cout<<view[i][j]<<" ";
            if(view[i][j]=='F'){
               count++;
            }
        }
        cout<<endl;
      }
      return count;

    }
};