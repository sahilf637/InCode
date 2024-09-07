#include <editor.h>
#include <gtk/gtk.h>
#include <gui.h>

void activate(GtkApplication *app, gpointer user_data) {
  GtkWidget *window;
  GtkWidget *text_view;
  GtkWidget *scrolled_window;

  window = gtk_application_window_new(app);
  gtk_window_set_title(GTK_WINDOW(window), "InCode");
  gtk_window_set_default_size(GTK_WINDOW(window), 600, 400);

  scrolled_window = gtk_scrolled_window_new(NULL, NULL);
  gtk_container_add(GTK_CONTAINER(window), scrolled_window);

  text_view = gtk_text_view_new();
  gtk_container_add(GTK_CONTAINER(scrolled_window), text_view);

  gtk_widget_show_all(window);
}
