--- chrome/browser/safe_browsing/incident_reporting/incident_reporting_service.cc.orig	2019-03-15 06:37:05 UTC
+++ chrome/browser/safe_browsing/incident_reporting/incident_reporting_service.cc
@@ -715,7 +715,7 @@ void IncidentReportingService::OnEnvironmentDataCollec
   environment_collection_pending_ = false;
 
 // CurrentProcessInfo::CreationTime() is missing on some platforms.
-#if defined(OS_MACOSX) || defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_MACOSX) || defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
   base::TimeDelta uptime =
       first_incident_time_ - base::CurrentProcessInfo::CreationTime();
   environment_data->mutable_process()->set_uptime_msec(uptime.InMilliseconds());
