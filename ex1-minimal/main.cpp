#include "AppToolkit.h"

int main() {
  AppToolkit::IApp& app = AppToolkit::GetApp();
  app.Run();
  
  return 0;
}