int minSteps(string str)
{
    // Write your code here.
    char last=str[0];
    int count =1 ;
    for(int i = 1 ; i < str.size() ; i++){
        if(str[i] != last){
            last = str[i] ;
            count++;
        }
    }
    return count/2 + 1 ;
}
