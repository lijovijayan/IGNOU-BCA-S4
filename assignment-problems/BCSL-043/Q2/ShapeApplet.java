import java.applet.*;
import java.awt.*;
import java.awt.event.*;

public class ShapeApplet extends Applet implements ActionListener {

  private Button rectButton, circleButton;
  private boolean drawRect = false, drawCircle = false;

  public void init() {
    rectButton = new Button("Draw Rectangle");
    add(rectButton);
    rectButton.addActionListener(this);

    circleButton = new Button("Draw Circle");
    add(circleButton);
    circleButton.addActionListener(this);
  }

  public void actionPerformed(ActionEvent e) {
    if (e.getSource() == rectButton) {
      drawRect = true;
      drawCircle = false;
    } else if (e.getSource() == circleButton) {
      drawRect = false;
      drawCircle = true;
    }
    repaint();
  }

  public void paint(Graphics g) {
    if (drawRect) {
      g.drawRect(50, 50, 100, 100);
    } else if (drawCircle) {
      g.drawOval(50, 50, 100, 100);
    }
  }
}
