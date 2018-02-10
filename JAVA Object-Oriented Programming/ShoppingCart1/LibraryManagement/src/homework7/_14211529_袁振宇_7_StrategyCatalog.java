package homework7;

import java.util.ArrayList;
import java.util.HashMap;

public class _14211529_‘¨’Ò”Ó_7_StrategyCatalog {
    private HashMap<_14211529_‘¨’Ò”Ó_7_BookType, _14211529_‘¨’Ò”Ó_7_IPricingStrategy> strategies;
    _14211529_‘¨’Ò”Ó_7_StrategyCatalog(){
        strategies = new HashMap<_14211529_‘¨’Ò”Ó_7_BookType,_14211529_‘¨’Ò”Ó_7_IPricingStrategy>();
    }

    boolean hasStrategy(int strategyNumber){
        if(getKeyFromNumber(strategyNumber)== _14211529_‘¨’Ò”Ó_7_BookType.NOTEXIST){
            return false;
        }
        else return true;
    }

    int size(){
        return strategies.size();
    }

    int getStrategyTypeFromNumber(int strategyNumber){
        _14211529_‘¨’Ò”Ó_7_BookType bookType = getKeyFromNumber(strategyNumber);
        return strategies.get(bookType).getStrategyType();
    }

    _14211529_‘¨’Ò”Ó_7_BookType getKeyFromNumber(int strategyNumber){
        for(HashMap.Entry<_14211529_‘¨’Ò”Ó_7_BookType, _14211529_‘¨’Ò”Ó_7_IPricingStrategy> entry: strategies.entrySet()){
            if(entry.getValue().getStrategyNumber() == strategyNumber){
                return entry.getKey();
            }
        }
        return _14211529_‘¨’Ò”Ó_7_BookType.NOTEXIST;
    }

    ArrayList<_14211529_‘¨’Ò”Ó_7_IPricingStrategy> findCompsiteContainSimple(int strategyNumber){
        _14211529_‘¨’Ò”Ó_7_IPricingStrategy simpleStrategy = strategies.get(getKeyFromNumber(strategyNumber));
        ArrayList<_14211529_‘¨’Ò”Ó_7_IPricingStrategy> list = new ArrayList<_14211529_‘¨’Ò”Ó_7_IPricingStrategy>();
        for(HashMap.Entry<_14211529_‘¨’Ò”Ó_7_BookType, _14211529_‘¨’Ò”Ó_7_IPricingStrategy> entry: strategies.entrySet()){
            _14211529_‘¨’Ò”Ó_7_IPricingStrategy strategy = entry.getValue();
            if(strategy.getStrategyType() == 2){
                _14211529_‘¨’Ò”Ó_7_CompositeStrategy compositeStrategy = (_14211529_‘¨’Ò”Ó_7_CompositeStrategy)strategy;
                if(compositeStrategy.strategies.contains(simpleStrategy)){
                    list.add(compositeStrategy);
                }
            }
        }
        return list;
    }

    /*HashMap<BookType, IPricingStrategy> getStrategies(){
        return strategies;
    }*/

	public HashMap<_14211529_‘¨’Ò”Ó_7_BookType, _14211529_‘¨’Ò”Ó_7_IPricingStrategy> getStrategies() {
		return strategies;
	}

}
