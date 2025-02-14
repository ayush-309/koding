class ProductOfNumbers {
private:
    vector<int> arr;
    map<int, int> mpp;
    int product = 1;
    int index = 1;
    int zeroIndex=INT_MIN;

public:
    ProductOfNumbers() {}

    void add(int num) {
        arr.push_back(num);
        if (product==0) {
            product = 1;
            zeroIndex = index-1;
        }
        product *= num;
        mpp[index++] = product; 
    }

    int getProduct(int k) {
        if (int(arr.size()-k) < zeroIndex) {
            return 0;
        }
        return mpp[arr.size()]/(mpp[arr.size()-k]!=0 ?mpp[arr.size()-k]: 1);
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */