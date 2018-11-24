//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface XCUILaunchServicesMonitor : NSObject
{
    // Error parsing type: AQ, name: _nextEventID
    id <XCUIApplicationMonitor> _delegate;
    void *_notificationID;
    id <XCUILaunchServicesFramework> _launchServicesFramework;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) id <XCUILaunchServicesFramework> launchServicesFramework; // @synthesize launchServicesFramework=_launchServicesFramework;
@property void *notificationID; // @synthesize notificationID=_notificationID;
@property id <XCUIApplicationMonitor> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)terminateApplicationWithPID:(int)arg1 error:(id *)arg2;
- (id)applicationInfoForPID:(int)arg1;
- (struct __LSASN *)_ASNForPid:(int)arg1;
- (void)beginMonitoringApplicationWithBundleID:(id)arg1 path:(id)arg2;
- (struct __LSASN *)_ASNForBundleID:(id)arg1 path:(id)arg2;
- (void)_updateApplicationWithASN:(struct __LSASN *)arg1 eventID:(unsigned long long)arg2;
- (BOOL)_frontUIApplicationMatchesASN:(struct __LSASN *)arg1;
- (BOOL)_frontApplicationMatchesASN:(struct __LSASN *)arg1;
- (void)_handleLSNotification:(int)arg1 appInfo:(id)arg2 eventID:(unsigned long long)arg3;
- (unsigned long long)_nextNotificationEventID;
- (id)init;
- (id)initWithLaunchServicesFramework:(id)arg1;
- (void)dealloc;

@end
