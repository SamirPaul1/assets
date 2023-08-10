class StockPrice {
public:
    StockPrice() {
        
    }
    
    void update(int timestamp, int price) {
    if (timestampToPrice.count(timestamp)) {
     const int prevPrice = timestampToPrice[timestamp];
      if (--pricesCount[prevPrice] == 0)
        pricesCount.erase(prevPrice);
    }
    timestampToPrice[timestamp] = price;
    ++pricesCount[price];
    }
    
    int current() {
     return rbegin(timestampToPrice)->second;    
    }
    
    int maximum() {
       return rbegin(pricesCount)->first; 
    }
    
    int minimum() {
       return begin(pricesCount)->first; 
    }
private:
  map<int, int> timestampToPrice;
  map<int, int> pricesCount;
};

/**
 * Your StockPrice object will be instantiated and called as such:
 * StockPrice* obj = new StockPrice();
 * obj->update(timestamp,price);
 * int param_2 = obj->current();
 * int param_3 = obj->maximum();
 * int param_4 = obj->minimum();
 */