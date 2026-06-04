int main(){
    vector <int> arr = {0,0,1,1,1,2,2,3,3,4};
    int n = arr.size();
    int cm = 1;
    int off = 0;
    int count = 1;
    while(cm<n){
        if(arr[cm-1]==arr[cm]){
            cm++;
        }
        else{
            arr[off+1] = arr[cm];
            cm++;
            off++;
            count++;
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    cout << count;
return 0;
}

//Remove bhi hoga or sort bhi ho jayega