package homework4;

public class BasePlusCommissionEmployee extends CommissionEmployee{
	private double baseSalary;		//月基本工资
	public BasePlusCommissionEmployee(String firstName, String lastName, String socialSecurityNumber, double grossSales,
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