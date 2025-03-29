#include <QApplication>
#include <QMainWindow>
#include <QToolBar>
#include <QDockWidget>
#include <QListWidget>
#include <QWidget>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  
  // Create main window
  QMainWindow mainWindow;
  mainWindow.setWindowTitle("Qt6 MainWindow Demo");
  mainWindow.resize(800, 600);
  
  // Create toolbar
  QToolBar* toolbar = mainWindow.addToolBar("Main Toolbar");
  toolbar->addAction("New");
  toolbar->addAction("Open");
  toolbar->addSeparator();
  toolbar->addAction("Quit");
  
  // Create sidebar dock
  QDockWidget* sidebarDock = new QDockWidget("Sidebar", &mainWindow);
  QListWidget* sidebarList = new QListWidget();
  sidebarList->addItems({"Item 1", "Item 2", "Item 3"});
  sidebarDock->setWidget(sidebarList);
  mainWindow.addDockWidget(Qt::LeftDockWidgetArea, sidebarDock);
  
  // Create canvas area
  QWidget* canvas = new QWidget();
  canvas->setStyleSheet("background-color: #404040;");
  mainWindow.setCentralWidget(canvas);
  
  mainWindow.show();
  
  return app.exec();
}
