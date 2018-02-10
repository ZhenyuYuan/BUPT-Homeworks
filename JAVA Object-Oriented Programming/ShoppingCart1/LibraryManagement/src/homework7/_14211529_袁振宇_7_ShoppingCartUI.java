package homework7;

import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;
import java.util.Vector;

public class _14211529_‘¨’Ò”Ó_7_ShoppingCartUI extends JFrame implements _14211529_‘¨’Ò”Ó_7_Observer,ActionListener {
    private _14211529_‘¨’Ò”Ó_7_Subject subject;

    class ModelTable extends DefaultTableModel {
        private Vector TableData;
        private Vector TableTitle;

        public ModelTable() {
            TableData = new Vector();
            TableTitle = new Vector();
            setDataVector(TableData, TableTitle);
            TableTitle.add(" È√˚");
            TableTitle.add(" ˝¡ø");
        }

        public void addSaleLineItem(_14211529_‘¨’Ò”Ó_7_SaleLineItem saleLineItem) {
            ArrayList line = new ArrayList();
            line.add(saleLineItem.prodSpec.getTitle());
            line.add(saleLineItem.copies);
            TableData.add(line);
        }

        public void updateUI(_14211529_‘¨’Ò”Ó_7_Sale sale) {
            TableData.clear();
            for (_14211529_‘¨’Ò”Ó_7_SaleLineItem saleLineItem : sale.getItems()) {
                addSaleLineItem(saleLineItem);
            }
            table.repaint();
            table.updateUI();
        }

        public int getColumnCount() {
            return TableTitle.size();
        }

        public Object getValueAt(int rowIndex, int columnIndex) {
            ArrayList list = (ArrayList) this.TableData.get(rowIndex);
            return list.get(columnIndex);
        }

        public boolean isCellEditable(int rowIndex, int columnIndex) {
            return false;
        }
    }

    private JPanel mainPanel = new JPanel();
    private ModelTable modelTable = new ModelTable();
    private JTable table = new JTable(modelTable);
    private JScrollPane scrollPane = new JScrollPane(table);
    private JLabel sumLabel = new JLabel();

    _14211529_‘¨’Ò”Ó_7_ShoppingCartUI(_14211529_‘¨’Ò”Ó_7_Subject subject){
        this.subject=subject;
        this.subject.registerObserver(this);

        mainPanel.add(scrollPane);
        mainPanel.add(sumLabel);
        sumLabel.setText("◊‹º€£∫π≤"+String.valueOf(0)+"‘™");
        add(mainPanel);
        setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        table.setPreferredScrollableViewportSize(new Dimension(350, 300));
        table.setAutoResizeMode(JTable.AUTO_RESIZE_ALL_COLUMNS);
        int screenHeight = java.awt.Toolkit.getDefaultToolkit().getScreenSize().height;
        int screenWidth = java.awt.Toolkit.getDefaultToolkit().getScreenSize().width;
        setTitle("π∫ŒÔ≥µ");
        setResizable(false);
        setSize(400, 390);
        setLocation(100 , (screenHeight - 400) / 2);
        setVisible(true);
    }

    @Override
    public void update(_14211529_‘¨’Ò”Ó_7_Sale sale) {
        modelTable.updateUI(sale);
        sumLabel.setText("◊‹º€£∫π≤"+String.format("%.2f‘™",sale.getTotal()));
    }

    public void actionPerformed(ActionEvent e) {
        return;
    }
}