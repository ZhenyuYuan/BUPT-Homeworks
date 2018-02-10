package homework4;

import java.awt.BorderLayout;
import javax.swing.JDialog;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JTextArea;

@SuppressWarnings("serial")
public class _14211529_‘¨’Ò”Ó_4_AverageEarningWin extends JDialog {

	private final JPanel contentPanel = new JPanel();
	private int EmployeeNumber;
	private double AverageEarning; 
	
	public _14211529_‘¨’Ò”Ó_4_AverageEarningWin(int empNum, double averageEarning) {
		this.EmployeeNumber = empNum;
		this.AverageEarning = averageEarning;
		
		setBounds(100, 100, 450, 300);
		getContentPane().setLayout(new BorderLayout());
		contentPanel.setBorder(new EmptyBorder(5, 5, 5, 5));
		getContentPane().add(contentPanel, BorderLayout.CENTER);
		contentPanel.setLayout(null);
		
		JPanel panel = new JPanel();
		panel.setBounds(10, 10, 414, 49);
		contentPanel.add(panel);
		
		JPanel panel_1 = new JPanel();
		panel_1.setBounds(10, 69, 414, 57);
		contentPanel.add(panel_1);
		{
			int empnum = EmployeeNumber;
			JTextArea hint1 = new JTextArea("The number of employee£∫" + empnum);
			hint1.setText("The number of employee£∫" + empnum);
			panel_1.add(hint1);
		}
		JPanel panel_2 = new JPanel();
		panel_2.setBounds(10, 128, 414, 57);
		contentPanel.add(panel_2);
		{
			double aveEarning = AverageEarning;
			JTextArea hint2 = new JTextArea("The average earning of all employees£∫" + aveEarning);
			hint2.setText("The average earning of all employees£∫" + aveEarning);
			panel_2.add(hint2);
		}
		
		JPanel panel_3 = new JPanel();
		panel_3.setBounds(10, 195, 414, 56);
		contentPanel.add(panel_3);
		setModal(true);
	}

	public int getEmployeeNumber() {
		return EmployeeNumber;
	}

	public void setEmployeeNumber(int employeeNumber) {
		EmployeeNumber = employeeNumber;
	}

	public double getAverageEarning() {
		return AverageEarning;
	}

	public void setAverageEarning(double averageEarning) {
		AverageEarning = averageEarning;
	}
}
