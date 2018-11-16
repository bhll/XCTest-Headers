//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCUIApplicationMonitor.h"
#import "XCUIApplicationProcessTracker.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, XCUIApplicationImplDepot, XCUIApplicationRegistry;

@interface XCUIApplicationMonitor : NSObject <XCUIApplicationMonitor, XCUIApplicationProcessTracker>
{
    XCUIApplicationRegistry *_applicationRegistry;
    NSObject<OS_dispatch_queue> *_queue;
    XCUIApplicationImplDepot *_applicationImplDepot;
    NSMutableSet *_trackedBundleIDs;
    NSMutableDictionary *_applicationProcessesForPID;
    NSMutableDictionary *_applicationProcessesForToken;
    NSMutableSet *_launchedApplications;
}

+ (id)sharedMonitor;
@property(readonly, copy) NSMutableSet *launchedApplications; // @synthesize launchedApplications=_launchedApplications;
@property(readonly, copy) NSMutableDictionary *applicationProcessesForToken; // @synthesize applicationProcessesForToken=_applicationProcessesForToken;
@property(readonly, copy) NSMutableDictionary *applicationProcessesForPID; // @synthesize applicationProcessesForPID=_applicationProcessesForPID;
@property(readonly, copy) NSMutableSet *trackedBundleIDs; // @synthesize trackedBundleIDs=_trackedBundleIDs;
@property(readonly, copy) XCUIApplicationImplDepot *applicationImplDepot; // @synthesize applicationImplDepot=_applicationImplDepot;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) XCUIApplicationRegistry *applicationRegistry; // @synthesize applicationRegistry=_applicationRegistry;
- (void).cxx_destruct;
- (void)acquireBackgroundAssertionForPID:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestAutomationSessionForTestTargetWithPID:(int)arg1 preferredBackendPath:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)updatedApplicationStateSnapshot:(id)arg1;
- (void)_setIsTrackingForBundleID:(id)arg1;
- (BOOL)_isTrackingBundleID:(id)arg1;
- (void)applicationWithBundleID:(id)arg1 didUpdatePID:(int)arg2 state:(unsigned long long)arg3;
- (void)processWithToken:(id)arg1 exitedWithStatus:(int)arg2;
- (void)stopTrackingProcessWithToken:(id)arg1;
- (void)crashInProcessWithBundleID:(id)arg1 path:(id)arg2 pid:(int)arg3 symbol:(id)arg4;
- (void)waitForUnrequestedTerminationOfLaunchedApplicationsWithTimeout:(double)arg1;
- (void)_waitForCrashReportOrCleanExitStatusOfApp:(id)arg1;
- (id)_appFromSet:(id)arg1 thatTransitionedToNotRunningDuringTimeInterval:(double)arg2;
- (void)terminationTrackedForApplicationProcess:(id)arg1;
- (void)launchRequestedForApplicationProcess:(id)arg1;
- (void)_terminateApplicationProcess:(id)arg1;
- (void)terminateApplicationProcess:(id)arg1 withToken:(id)arg2;
- (id)monitoredApplicationWithProcessIdentifier:(int)arg1;
- (void)_beginMonitoringApplication:(id)arg1;
- (void)setApplicationProcess:(id)arg1 forToken:(id)arg2;
- (id)applicationProcessWithToken:(id)arg1;
- (void)setApplicationProcess:(id)arg1 forPID:(int)arg2;
- (id)applicationProcessWithPID:(int)arg1;
- (id)applicationImplementationForApplicationAtPath:(id)arg1 bundleID:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

