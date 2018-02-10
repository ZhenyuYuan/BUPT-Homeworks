package homework5;

public class _14211529_‘¨’Ò”Ó_5_BasePlusCommissionEmployee extends _14211529_‘¨’Ò”Ó_5_CommissionEmployee{
	private double baseSalary;		//‘¬ª˘±æπ§◊ 
	public _14211529_‘¨’Ò”Ó_5_BasePlusCommissionEmployee(String firstName, String lastName, String socialSecurityNumber, double grossSales,
			double commissionRate, double baseSalary) {
		super(firstName, lastName, socialSecurityNumber, grossSales, commissionRate);
		this.baseSalary = baseSalary;
	}
	public double earning(){
		return super.getGrossSales()*super.getCommissionRate()+baseSalary;
	}
	public void setBaseSalary(double baseSalary){
		this.baseSalary = baseSalary;
	}
	public double getBaseSalary(){
		return baseSalary;
	}
	public String toString(){
		return getClass().getName()
				+"[fistname="+getFirstName()
				+", lastName="+getLastName()
				+", socialSecurityNumber="+getSocialSecurityNumber()
				+", baseSalary="+getBaseSalary()
				+", grossSales="+getGrossSales()
				+", commissionRate="+getCommissionRate()
				+", monthlySalary="+earning()
				+"]";
	}
}