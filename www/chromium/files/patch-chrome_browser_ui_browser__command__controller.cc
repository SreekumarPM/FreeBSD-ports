--- chrome/browser/ui/browser_command_controller.cc.orig	2020-07-07 21:58:14 UTC
+++ chrome/browser/ui/browser_command_controller.cc
@@ -83,7 +83,7 @@
 #include "components/session_manager/core/session_manager.h"
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
 #include "ui/base/ime/linux/text_edit_key_bindings_delegate_auralinux.h"
 #endif
 
@@ -253,7 +253,7 @@ bool BrowserCommandController::IsReservedCommandOrKey(
 #endif
   }
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
   // If this key was registered by the user as a content editing hotkey, then
   // it is not reserved.
   ui::TextEditKeyBindingsDelegateAuraLinux* delegate =
@@ -479,7 +479,7 @@ bool BrowserCommandController::ExecuteCommandWithDispo
       break;
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
     case IDC_MINIMIZE_WINDOW:
       browser_->window()->Minimize();
       break;
@@ -981,7 +981,7 @@ void BrowserCommandController::InitCommandState() {
   command_updater_.UpdateCommandEnabled(IDC_VISIT_DESKTOP_OF_LRU_USER_4, true);
   command_updater_.UpdateCommandEnabled(IDC_VISIT_DESKTOP_OF_LRU_USER_5, true);
 #endif
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
   command_updater_.UpdateCommandEnabled(IDC_MINIMIZE_WINDOW, true);
   command_updater_.UpdateCommandEnabled(IDC_MAXIMIZE_WINDOW, true);
   command_updater_.UpdateCommandEnabled(IDC_RESTORE_WINDOW, true);
