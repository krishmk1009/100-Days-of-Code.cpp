public:
    void sort012(int a[], int n)
    {
        // code here 
        int zero = 0;
        int one= 0;
        int two =0;
        
        for(int i = 0 ; i<n ; i++){
            if(a[i] ==0){
                zero++;
            }
            else if(a[i] ==1){
                one++;
            }
            else{
                two++;
            }
        }
        int i = 0;;
        while(zero!=0){
            a[i++] = 0;
            zero--;
        }
        while(one!=0){
            a[i++] = 1;
            one--;
        }
        while(two!=0){
            a[i++] = 2;
            two--;
        }
        
    }
