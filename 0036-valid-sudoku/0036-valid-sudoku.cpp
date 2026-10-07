class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> rows(9);
        vector<set<char>> cols(9);
        vector<set<char>> boxes(9);

        for(int i = 0; i < 9; i++) {

            for(int j = 0; j < 9; j++) {

                if(board[i][j] == '.')
                    continue;

                char x = board[i][j];

                // Row check
                if(rows[i].find(x) != rows[i].end())
                    return false;

                rows[i].insert(x);

                // Column check
                if(cols[j].find(x) != cols[j].end())
                    return false;

                cols[j].insert(x);

                // Box check
                int box = (i / 3) * 3 + (j / 3);

                if(boxes[box].find(x) != boxes[box].end())
                    return false;

                boxes[box].insert(x);
            }
        }

        return true;
        
    }
};