package homework7;

import java.util.ArrayList;

public abstract class _14211529_‘¨’Ò”Ó_7_CompositeStrategy implements _14211529_‘¨’Ò”Ó_7_IPricingStrategy {
    private int strategyNumber;
    private int strategyType = 2;
    protected ArrayList<_14211529_‘¨’Ò”Ó_7_IPricingStrategy> strategies;
    
    _14211529_‘¨’Ò”Ó_7_CompositeStrategy(int strategyNumber){
        this.strategyNumber = strategyNumber;
        strategies = new ArrayList<_14211529_‘¨’Ò”Ó_7_IPricingStrategy>();
    }

	public int getStrategyNumber() {
    	return strategyNumber;
    }

    void add(_14211529_‘¨’Ò”Ó_7_IPricingStrategy strategy) {
        strategies.add(strategy);
    }

    void remove(_14211529_‘¨’Ò”Ó_7_IPricingStrategy strategy) {
        if (strategies.contains(strategy)) {
            strategies.remove(strategy);
        }
    }

    public int getStrategyType(){
        return this.strategyType;
    }

    public String toString(){
        String contain = "";
        for (_14211529_‘¨’Ò”Ó_7_IPricingStrategy strategy : strategies) {
            contain+=String.valueOf(strategy.getStrategyNumber())+" ";
        }
        return "∞¸∫¨"+contain+"≤ﬂ¬‘";
    }

    public boolean isEmpty(){
        return strategies.isEmpty();
    }

    boolean hasStrategy(_14211529_‘¨’Ò”Ó_7_IPricingStrategy strategy) {

        return strategies.contains(strategy);

    }
    public abstract double getSubTotal(_14211529_‘¨’Ò”Ó_7_SaleLineItem saleLineItem);
}
