class Solution {
public:
    
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
       int size = students.size();
       queue<int>students_q;
       for(int i =0;i<size ; i++){
           students_q.push(students[i]);
       }

       int rotations = 0;
       int i=0;
       while(students_q.size() && rotations < students_q.size()){
           if(students_q.front() ==sandwiches[i]){
               i++;
               students_q.pop();
               rotations=0;
           }
           
           else{
               int temp = students_q.front();
               students_q.pop();
               students_q.push(temp);
               rotations++;
           }
       }

       return students_q.size();

    }
};
