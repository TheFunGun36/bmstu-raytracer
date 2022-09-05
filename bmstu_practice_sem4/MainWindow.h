#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"
class Scene;

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget* parent = Q_NULLPTR);

private:
    Ui::MainWindowClass _ui;
    std::shared_ptr<Scene> _scene;
    std::shared_ptr<Renderer> _renderer;

private slots:
    void on_manual_render();
    void on_cube_reset(bool checked);
    void on_cube_undo(bool checked);
    void on_scene_load(bool checked);
    void on_camera_reset(bool checked);
    void on_render_failed();
    void on_auto_render_checked(int check_state);
    void on_rotate_reverse(int check_state);
    void on_rotate_f();
    void on_rotate_b();
    void on_rotate_l();
    void on_rotate_r();
    void on_rotate_u();
    void on_rotate_d();
    void on_rotate(char direction);
    void on_resolution_changed(int value);
    void on_render_simple_changed(int value);
};
