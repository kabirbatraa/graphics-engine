// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "gui.h"

void GUI::cb_DBG_i(Fl_Button*, void*) {
  DBG_cb();
}
void GUI::cb_DBG(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_DBG_i(o,v);
}

void GUI::cb_Change_i(Fl_Button*, void*) {
  RM_cb();
}
void GUI::cb_Change(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_Change_i(o,v);
}
#include "scene.h"

GUI::GUI() {
  { uiw = new Fl_Double_Window(199, 249, "GUI");
    uiw->user_data((void*)(this));
    { Fl_Button* o = new Fl_Button(15, 15, 95, 40, "DBG");
      o->selection_color(FL_DARK_RED);
      o->callback((Fl_Callback*)cb_DBG);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(15, 75, 160, 40, "Change Render Mode");
      o->selection_color(FL_DARK_RED);
      o->callback((Fl_Callback*)cb_Change);
    } // Fl_Button* o
    uiw->end();
  } // Fl_Double_Window* uiw
}

int main(int argc, char **argv) {
  scene = new Scene;
  return Fl::run();
}

void GUI::show() {
  uiw->show();
}

void GUI::DBG_cb() {
  scene->DBG();
}

void GUI::NewButton_cb() {
  scene->NewButton();
}

void GUI::ToggleBilinear_cb() {
  scene->ToggleBilinear();
}

void GUI::Pause_cb() {
  scene->Pause();
}

void GUI::RM_cb() {
  scene->idk();
}