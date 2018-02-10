package homework4;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class MainWindow extends JFrame implements ActionListener{
	//declare and create panel
	private JPanel mainPanel = new JPanel();
	//declare and create the top menu bar
	private JMenuBar bar = new JMenuBar();
	//declare and create two menus
	private JMenu leftStripeMenu = new JMenu("EmployeeInforInput");
	private JMenu rightStripeMenu = new JMenu("Search");
	//declare and create each menu item
	private JMenuItem ComEmpItem = new JMenuItem("CommisionEmployee");
	private JMenuItem BasePlusComEmpItem = new JMenuItem("BasePlusCommisionEmployee");
	private JMenuItem AvreageEarningSearchItem = new JMenuItem("AvreageEarningSearch");
	
	
	
	public MainWindow(){
		setTitle("Employee Manager");
		
		//set each stripe to an innitail colour
		mainPanel.setBackground(Color.LIGHT_GRAY);
		
		//add menu items to the botton stripe menu
		leftStripeMenu.add(ComEmpItem);
		leftStripeMenu.add(BasePlusComEmpItem);
		rightStripeMenu.add(AvreageEarningSearchItem);
		
		//add the menus to the menu bar
		bar.add(leftStripeMenu);
		bar.add(rightStripeMenu);
		
		//add the menu bar to the frame
		setJMenuBar(bar);
		
		//add listerners to each menu item
		ComEmpItem.addActionListener(this);
		BasePlusComEmpItem.addActionListener(this);
		AvreageEarningSearchItem.addActionListener(this);
		
		//select a GridLayout
		setLayout(new GridLayout(1,1));
		
		//add the panels to the frame
		add(mainPanel);
		
		//choose settings for the frame and make it visible
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setSize(600,400);
		setVisible(true);
	}
	
	@Override
	public void actionPerformed(ActionEvent e) {
		EmployeeList empList;
		empList = new EmployeeList();
		
		if(e.getSource()==ComEmpItem){
			//inputComWin inputCom = new inputComWin();
			ComDialog comdialog = new ComDialog(this, true);
			
		}
		else if(e.getSource()==BasePlusComEmpItem){
			
		}
		else if(e.getSource()==AvreageEarningSearchItem){
			
		}
	}
	
	class ComDialog extends Dialog implements ActionListener{
		private static final long serialVersionUID = 1L;
		JLabel firstName = new JLabel("FirstName:");
		JLabel lastName = new JLabel("LastName:");
		JLabel socialSecurityNumber = new JLabel("SocialSecurityNumber:");
		JLabel grossSales = new JLabel("GrossSales:");
		JLabel commissionRate = new JLabel("CommissionRate:");
		JTextField rows = new JTextField(50);
	    JTextField columns = new JTextField(50);
	    JButton ok = new JButton("Save");
        JButton cancel = new JButton("Cancel");
        
		ComDialog(MainWindow parent, boolean modal){
			super(parent, modal);
			setTitle("Create CommissionEmployee");
			setSize(300, 400);
			setResizable(false);
			setLayout(null);
			add(firstName);
			add(lastName);
			add(socialSecurityNumber);
			add(grossSales);
			add(commissionRate);
			
		}
		
		@Override
		public void actionPerformed(ActionEvent e) {
			// TODO Auto-generated method stub
			
		}

		
	}
	

}
