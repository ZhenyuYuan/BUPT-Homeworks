package homework6;

import java.util.ArrayList;
import java.util.HashMap;

public class StrategyCatalog {
	private HashMap<BookType, IPricingStrategy> strategies;
	
	public StrategyCatalog(){
		strategies = new HashMap<BookType, IPricingStrategy>();
	}
	
	boolean hasStrategy(int strategyNumber){
		if(getKeyFromNumber(strategyNumber) == BookType.NOTEXIST){
			return false;
		}
		else return true;
	}
	
	int size(){
		return strategies.size();
	}
	
	int getStrategyTypeFromNumber(int strategyNumber){
		BookType booktype = getKeyFromNumber(strategyNumber);
		return strategies.get(booktype).getStrategyType();
	}
	BookType getKeyFromNumber(int strategyNumber){
		for(HashMap.Entry<BookType, IPricingStrategy> entry: strategies.entrySet()){
			
		}
	}
}
