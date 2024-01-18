#include <gtkmm.h>

class BlueWifiMonitorApp : public Gtk::ApplicationWindow {
public:
    BlueWifiMonitorApp() {
        set_default_size(800, 600);  // Set the default size of the window
        set_title("BlueWifiMonitor");

        // TODO: Add your widgets and initialization code here
    }
};

int main(int argc, char *argv[]) {
    auto app = Gtk::Application::create(argc, argv, "org.blue_wifi_monitor");

    // Create an instance of your custom window class
    BlueWifiMonitorApp window;

    // Run the GTK main loop
    return app->run(window);
}

