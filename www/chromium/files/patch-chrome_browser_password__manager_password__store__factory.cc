--- chrome/browser/password_manager/password_store_factory.cc.orig	2020-07-07 21:58:13 UTC
+++ chrome/browser/password_manager/password_store_factory.cc
@@ -189,7 +189,7 @@ PasswordStoreFactory::BuildServiceInstanceFor(
                         base::TimeDelta::FromSeconds(20));
 
 #if defined(OS_WIN) || defined(OS_MACOSX) || \
-    (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   std::unique_ptr<password_manager::PasswordStoreSigninNotifier> notifier =
       std::make_unique<password_manager::PasswordStoreSigninNotifierImpl>(
           IdentityManagerFactory::GetForProfile(profile));
