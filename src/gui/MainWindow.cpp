#include "MainWindow.h"
#include "TopToolBar.h"
#include "ToolSidebar.h"
#include "CanvasView.h"

MainWindow::MainWindow(QWidget *parent) 
    : QMainWindow(parent) {
    setupUi();
}

MainWindow::~MainWindow() {
}

void MainWindow::setupUi() {
    // Create and add toolbars and views
    addToolBar(new TopToolBar(this));
    addToolBar(Qt::LeftToolBarArea, new ToolSidebar(this));
    
    setCentralWidget(new CanvasView(this));
    resize(1024, 768);
}
