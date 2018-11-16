//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, XCAccessibilityElement, XCUIApplicationProcess;

@interface XCUIApplicationImpl : NSObject
{
    _Bool _codeCoverageEnabled;
    _Bool _hasValidAlertCount;
    id <XCUIApplicationMonitor> _applicationMonitor;
    id <XCUIAccessibilityInterface> _axInterface;
    NSString *_path;
    NSString *_bundleID;
    XCUIApplicationProcess *_currentProcess;
    id <XCUIXcodeApplicationManaging> _xcodeApplicationManager;
    id <XCUIApplicationManaging> _platformApplicationManager;
}

+ (_Bool)shouldWaitForAutomationSessionWhenUsingPlatformLauncher:(_Bool)arg1;
+ (id)keyPathsForValuesAffectingActivated;
+ (id)keyPathsForValuesAffectingForeground;
+ (id)keyPathsForValuesAffectingBackground;
+ (id)keyPathsForValuesAffectingSuspended;
+ (id)keyPathsForValuesAffectingRunning;
+ (id)keyPathsForValuesAffectingState;
+ (id)keyPathsForValuesAffectingHasCurrentProcess;
@property _Bool hasValidAlertCount; // @synthesize hasValidAlertCount=_hasValidAlertCount;
@property _Bool codeCoverageEnabled; // @synthesize codeCoverageEnabled=_codeCoverageEnabled;
@property(readonly) id <XCUIApplicationManaging> platformApplicationManager; // @synthesize platformApplicationManager=_platformApplicationManager;
@property(readonly) id <XCUIXcodeApplicationManaging> xcodeApplicationManager; // @synthesize xcodeApplicationManager=_xcodeApplicationManager;
@property(retain, nonatomic) XCUIApplicationProcess *currentProcess; // @synthesize currentProcess=_currentProcess;
@property(readonly, copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, copy) NSString *path; // @synthesize path=_path;
@property(readonly) id <XCUIAccessibilityInterface> axInterface; // @synthesize axInterface=_axInterface;
@property(readonly) id <XCUIApplicationMonitor> applicationMonitor; // @synthesize applicationMonitor=_applicationMonitor;
- (void).cxx_destruct;
- (_Bool)waitForViewControllerViewDidDisappearWithTimeout:(double)arg1 error:(id *)arg2;
- (void)handleCrashUnderSymbol:(id)arg1;
- (void)terminate;
- (void)_waitOnActivationExpectation:(id)arg1;
- (id)_activationExpectation;
- (void)waitForAccessibilityActive;
- (void)_waitForValidPID;
- (void)_launchUsingPlatformWithArguments:(id)arg1 environment:(id)arg2;
- (void)_launchUsingXcodeWithArguments:(id)arg1 environment:(id)arg2;
- (void)_waitForLaunchProgressWithToken:(id)arg1;
- (void)_launchWithRequest:(id)arg1;
- (void)_activateForPlatform;
- (void)_activate;
- (void)serviceOpenRequest:(id)arg1;
@property(readonly) _Bool activated;
@property(readonly) _Bool foreground;
@property(readonly) _Bool background;
@property(readonly) _Bool suspended;
@property(readonly) _Bool running;
- (void)_awaitValidCurrentProcess;
- (void)resetAlertCount;
@property(readonly) unsigned long long alertCount;
- (_Bool)waitForState:(unsigned long long)arg1 timeout:(double)arg2;
@property(nonatomic) unsigned long long state;
@property(nonatomic) int processID;
@property(readonly) int bridgedProcessID;
@property(readonly) XCAccessibilityElement *bridgedProcessAccessibilityElement;
@property(readonly) XCAccessibilityElement *accessibilityElement;
- (_Bool)hasCurrentProcess;
- (id)description;
- (id)initWithPath:(id)arg1 bundleID:(id)arg2;
- (id)initWithPath:(id)arg1 bundleID:(id)arg2 xcodeApplicationManager:(id)arg3 platformApplicationManager:(id)arg4 applicationMonitor:(id)arg5 axInterface:(id)arg6;

@end

