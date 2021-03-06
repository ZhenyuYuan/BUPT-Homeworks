package homework4;

import java.awt.BorderLayout;
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JDialog;
import javax.swing.JPanel;
import javax.swing.JLabel;
import javax.swing.JTextField;
import java.awt.Font;

@SuppressWarnings({ "serial"})
public class _14211529_Ԭ����_4_InputBaseComInfoWin extends JDialog implements ActionListener{
	private _14211529_Ԭ����_4_BasePlusCommissionEmployee bpcomemp;
	private JTextField txtFirstname;
	private JTextField txtLastname;
	private JTextField txtSocialsecuritynumber;
	private JTextField txtGrosssales;
	private JTextField txtCommissionrate;
	private JTextField txtBaseSalary;
	private JButton okButton = new JButton("OK");
	private JButton cancelButton = new JButton("Cancel");
	

	public _14211529_Ԭ����_4_InputBaseComInfoWin() {
		setTitle("Employee system: Create a BasePlusCommissionEmployee");
		setBounds(100, 100, 450, 300);
		
		JPanel hintPane = new JPanel();
		hintPane.setBounds(1, 0, 432, 29);
		JPanel fnamePane = new JPanel();
		fnamePane.setBounds(1, 30, 432, 29);
		JPanel lnamePane = new JPanel();
		lnamePane.setBounds(1, 58, 432, 29);
		JPanel socialSecNumPane = new JPanel();
		socialSecNumPane.setBounds(1, 86, 432, 40);
		JPanel grossSalePane= new JPanel();
		grossSalePane.setBounds(1, 124, 432, 29);
		JPanel comRatePane = new JPanel();
		comRatePane.setBounds(1, 154, 432, 29);
		JPanel buttonPane = new JPanel();
		buttonPane.setBounds(1, 221, 432, 40);
		getContentPane().setLayout(null);
		getContentPane().add(hintPane);
		hintPane.setLayout(null);
		
		JLabel lblPleaseInputInformation = new JLabel("Please input information of BasePlusCommissionEmployee you want to create:");
		lblPleaseInputInformation.setFont(new Font("SimSun-ExtB", Font.PLAIN, 10));
		lblPleaseInputInformation.setBounds(10, 10, 408, 15);
		hintPane.add(lblPleaseInputInformation);
		getContentPane().add(fnamePane);
		fnamePane.setLayout(null);
		
		JLabel lblFirstname = new JLabel("Firstname:");
		lblFirstname.setBounds(117, 8, 93, 15);
		fnamePane.add(lblFirstname);
		
		txtFirstname = new JTextField();
		txtFirstname.setBounds(188, 5, 93, 21);
		txtFirstname.setText("Firstname");
		fnamePane.add(txtFirstname);
		txtFirstname.setColumns(10);
		getContentPane().add(lnamePane);
		lnamePane.setLayout(null);
		
		JLabel lblLastname = new JLabel("Lastname:");
		lblLastname.setBounds(122, 8, 85, 15);
		lnamePane.add(lblLastname);
		
		txtLastname = new JTextField();
		txtLastname.setBounds(187, 5, 91, 21);
		txtLastname.setText("Lastname");
		lnamePane.add(txtLastname);
		txtLastname.setColumns(10);
		getContentPane().add(socialSecNumPane);
		socialSecNumPane.setLayout(null);
		
		JLabel lblSocialsecutitynumber = new JLabel("SocialSecutityNumber:");
		lblSocialsecutitynumber.setBounds(49, 10, 157, 15);
		socialSecNumPane.add(lblSocialsecutitynumber);
		
		txtSocialsecuritynumber = new JTextField();
		txtSocialsecuritynumber.setBounds(188, 7, 140, 21);
		txtSocialsecuritynumber.setText("SocialSecurityNumber");
		socialSecNumPane.add(txtSocialsecuritynumber);
		txtSocialsecuritynumber.setColumns(10);
		getContentPane().add(grossSalePane);
		grossSalePane.setLayout(null);
		
		JLabel lblGrosssales = new JLabel("GrossSales:");
		lblGrosssales.setBounds(114, 8, 74, 15);
		grossSalePane.add(lblGrosssales);
		
		txtGrosssales = new JTextField();
		txtGrosssales.setBounds(188, 5, 108, 21);
		txtGrosssales.setText("0");
		grossSalePane.add(txtGrosssales);
		txtGrosssales.setColumns(10);
		getContentPane().add(comRatePane);
		comRatePane.setLayout(null);
		
		JLabel lblCommissionrate = new JLabel("CommissionRate:");
		lblCommissionrate.setBounds(77, 8, 110, 15);
		comRatePane.add(lblCommissionrate);
		
		txtCommissionrate = new JTextField();
		txtCommissionrate.setBounds(186, 5, 110, 21);
		txtCommissionrate.setText("0");
		comRatePane.add(txtCommissionrate);
		txtCommissionrate.setColumns(10);
		getContentPane().add(buttonPane);
		buttonPane.setLayout(new FlowLayout(FlowLayout.RIGHT));
		getContentPane().add(buttonPane, BorderLayout.SOUTH);
		{
			
			okButton.addActionListener(this);
			buttonPane.add(okButton);
			getRootPane().setDefaultButton(okButton);
		}
		{
			cancelButton.addActionListener(this);
			buttonPane.add(cancelButton);
		}
		
		JPanel panel = new JPanel();
		panel.setBounds(1, 187, 423, 35);
		getContentPane().add(panel);
		panel.setLayout(null);
		
		JLabel lblBasesalary = new JLabel("BaseSalary:");
		lblBasesalary.setBounds(96, 8, 113, 15);
		panel.add(lblBasesalary);
		
		txtBaseSalary = new JTextField();
		txtBaseSalary.setBounds(186, 5, 113, 21);
		txtBaseSalary.setText("0");
		panel.add(txtBaseSalary);
		txtBaseSalary.setColumns(10);
		setModal(true);
	}
	
	@Override
	public void actionPerformed(ActionEvent e) {
		if(e.getSource()==okButton){
			String firstName = (String)txtFirstname.getText();
			String lastName = (String)txtLastname.getText();
			String socialSecurityNumber = (String)txtSocialsecuritynumber.getText();
			double grossSales = Double.parseDouble(txtGrosssales.getText());
			double commissionRate = Double.parseDouble(txtCommissionrate.getText());
			double basesalary = Double.parseDouble(txtBaseSalary.getText());
			_14211529_Ԭ����_4_BasePlusCommissionEmployee bpcomemp;
			bpcomemp = new _14211529_Ԭ����_4_BasePlusCommissionEmployee(firstName, lastName, socialSecurityNumber, grossSales, commissionRate, basesalary);
			this.bpcomemp = bpcomemp;
		}
		dispose();
	}
	public _14211529_Ԭ����_4_BasePlusCommissionEmployee getComEmp() {
		return this.bpcomemp;
	}
	public void setComEmp(_14211529_Ԭ����_4_BasePlusCommissionEmployee bpcomemp) {
		this.bpcomemp = bpcomemp;
	}
}