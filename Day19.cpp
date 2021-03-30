class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        queue<int>que;
        que.push(0);
        vector<bool>visited(rooms.size(), false);
        visited[0]=true;
        while(que.size()!=0){
            int top=que.front();
            que.pop();
            for(int i=0; i<rooms[top].size(); i++){
                if(!visited[rooms[top][i]]){
                    que.push(rooms[top][i]);
                    visited[rooms[top][i]]=true;
                }
            }
        }
        for(int i=0; i<rooms.size(); i++){
            if(!visited[i]) return false;
        }
        return true;
    }
};