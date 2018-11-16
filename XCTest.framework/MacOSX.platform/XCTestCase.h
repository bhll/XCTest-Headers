//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCTest/XCTest.h>

#import "XCTActivity.h"
#import "XCTMemoryCheckerDelegate.h"
#import "XCTWaiterDelegate.h"

@class NSDictionary, NSInvocation, NSString, XCTMemoryChecker, XCTestCaseRun, XCUITestContext, _XCTestCaseImplementation;

@interface XCTestCase : XCTest <XCTWaiterDelegate, XCTMemoryCheckerDelegate, XCTActivity>
{
    id _internalImplementation;
    XCTMemoryChecker *_defaultMemoryChecker;
}

+ (id)_baselineDictionary;
+ (BOOL)_treatMissingBaselinesAsTestFailures;
+ (id)knownMemoryMetrics;
+ (id)measurementFormatter;
+ (id)defaultPerformanceMetrics;
+ (BOOL)_meetsMinimumOperatingSystemVersion;
+ (CDStruct_2ec95fd7)minimumOperatingSystemVersion;
+ (BOOL)_reportPerformanceFailuresForLargeImprovements;
+ (BOOL)_enableSymbolication;
+ (id)testInvocations;
+ (BOOL)isInheritingTestCases;
+ (id)_testStartActvityDateFormatter;
+ (id)bundle;
+ (id)testCaseWithSelector:(SEL)arg1;
+ (id)testCaseWithInvocation:(id)arg1;
+ (void)tearDown;
+ (void)setUp;
+ (id)defaultTestSuite;
+ (id)allTestMethodInvocations;
+ (void)_allTestMethodInvocations:(id)arg1;
+ (id)testMethodInvocations;
+ (id)allSubclassesOutsideXCTest;
+ (id)allSubclasses;
+ (id)_allSubclasses;
@property(retain, nonatomic) XCTMemoryChecker *defaultMemoryChecker; // @synthesize defaultMemoryChecker=_defaultMemoryChecker;
@property(retain) _XCTestCaseImplementation *internalImplementation; // @synthesize internalImplementation=_internalImplementation;
- (void).cxx_destruct;
- (void)memoryChecker:(id)arg1 didFailWithMessages:(id)arg2 serializedMemoryGraph:(id)arg3;
- (void)assertObjectsOfType:(id)arg1 inApplication:(id)arg2 invalidAfterScope:(CDUnknownBlockType)arg3;
- (void)assertNoLeaksInApplication:(id)arg1 inScope:(CDUnknownBlockType)arg2;
- (void)assertNoLeaksInScope:(CDUnknownBlockType)arg1;
- (void)markInvalid:(id)arg1;
- (void)assertObjectsOfType:(id)arg1 invalidAfterScope:(CDUnknownBlockType)arg2;
- (void)assertInvalidObjectsDeallocatedAfterScope:(CDUnknownBlockType)arg1;
- (void)removeUIInterruptionMonitor:(id)arg1;
- (id)addUIInterruptionMonitorWithDescription:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(readonly) XCUITestContext *testContext;
- (void)_dequeueAndReportBackgroundAttachments;
- (void)addAttachment:(id)arg1;
@property(readonly) NSDictionary *activityAggregateStatistics;
@property(readonly) unsigned long long activityRecordStackDepth;
- (void)runActivityNamed:(id)arg1 inScope:(CDUnknownBlockType)arg2;
- (void)recordActivityWithFormat:(id)arg1;
- (void)startActivityWithTitle:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)startActivityWithTitle:(id)arg1 type:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)measureMetrics:(id)arg1 automaticallyStartMeasuring:(BOOL)arg2 forBlock:(CDUnknownBlockType)arg3;
- (void)registerDefaultMetrics;
- (id)baselinesDictionaryForTest;
- (void)_logAndReportPerformanceMetrics:(id)arg1 perfMetricResultsForIDs:(id)arg2 withBaselinesForTest:(id)arg3;
- (void)_logAndReportPerformanceMetrics:(id)arg1 perfMetricResultsForIDs:(id)arg2 withBaselinesForTest:(id)arg3 defaultBaselinesForPerfMetricID:(id)arg4;
- (void)registerMetricID:(id)arg1 name:(id)arg2 unitString:(id)arg3;
- (void)registerMetricID:(id)arg1 name:(id)arg2 unit:(id)arg3;
- (void)reportMetric:(id)arg1 reportFailures:(BOOL)arg2;
- (void)reportMeasurements:(id)arg1 forMetricID:(id)arg2 reportFailures:(BOOL)arg3;
- (void)_recordValues:(id)arg1 forPerformanceMetricID:(id)arg2 name:(id)arg3 unitsOfMeasurement:(id)arg4 baselineName:(id)arg5 baselineAverage:(id)arg6 maxPercentRegression:(id)arg7 maxPercentRelativeStandardDeviation:(id)arg8 maxRegression:(id)arg9 maxStandardDeviation:(id)arg10 file:(id)arg11 line:(unsigned long long)arg12;
- (id)_symbolicationRecordForTestCodeInAddressStack:(id)arg1;
- (void)measureBlock:(CDUnknownBlockType)arg1;
- (void)stopMeasuring;
- (void)startMeasuring;
- (BOOL)_isMeasuringMetrics;
- (BOOL)_didStopMeasuring;
- (BOOL)_didStartMeasuring;
- (BOOL)_didMeasureMetrics;
- (id)_perfMetricsForID;
- (void)_logMemoryGraphDataFromFilePath:(id)arg1 withTitle:(id)arg2;
- (void)_logMemoryGraphData:(id)arg1 withTitle:(id)arg2;
- (unsigned long long)numberOfTestIterationsForTestWithSelector:(SEL)arg1;
- (void)afterTestIteration:(unsigned long long)arg1 selector:(SEL)arg2;
- (void)beforeTestIteration:(unsigned long long)arg1 selector:(SEL)arg2;
- (void)tearDownTestWithSelector:(SEL)arg1;
- (void)setUpTestWithSelector:(SEL)arg1;
- (void)_addTeardownBlock:(CDUnknownBlockType)arg1;
- (void)addTeardownBlock:(CDUnknownBlockType)arg1;
- (void)_purgeTeardownBlocks;
- (void)_runTeardownBlocks;
- (id)_dequeueTeardownBlocks;
- (void)_performTearDownSequenceWithSelector:(SEL)arg1;
- (void)performTest:(id)arg1;
- (void)_reportFailuresForUnwaitedExpectations;
- (void)_reportFailuresAtFile:(id)arg1 line:(unsigned long long)arg2 forTestAssertionsInScope:(CDUnknownBlockType)arg3;
- (void)invokeTest;
- (void)testContextPerformInScope:(CDUnknownBlockType)arg1;
- (Class)testRunClass;
- (Class)_requiredTestRunBaseClass;
- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(BOOL)arg4;
- (void)_interruptTest;
@property(nonatomic) BOOL shouldSetShouldHaltWhenReceivesControl;
@property(nonatomic) BOOL shouldHaltWhenReceivesControl;
@property BOOL continueAfterFailure;
@property(retain) XCTestCaseRun *testCaseRun;
@property(retain) NSInvocation *invocation;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (long long)defaultExecutionOrderCompare:(id)arg1;
- (id)nameForLegacyLogging;
@property(readonly, copy) NSString *name;
- (id)languageAgnosticTestMethodName;
- (unsigned long long)testCaseCount;
- (id)bundle;
- (id)initWithSelector:(SEL)arg1;
- (id)initWithInvocation:(id)arg1;
- (id)init;
- (void)nestedWaiter:(id)arg1 wasInterruptedByTimedOutWaiter:(id)arg2;
- (void)waiter:(id)arg1 didFulfillInvertedExpectation:(id)arg2;
- (void)waiter:(id)arg1 fulfillmentDidViolateOrderingConstraintsForExpectation:(id)arg2 requiredExpectation:(id)arg3;
- (void)waiter:(id)arg1 didTimeoutWithUnfulfilledExpectations:(id)arg2;
- (id)expectationForPredicate:(id)arg1 evaluatedWithObject:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)expectationForNotification:(id)arg1 object:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)keyValueObservingExpectationForObject:(id)arg1 keyPath:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)keyValueObservingExpectationForObject:(id)arg1 keyPath:(id)arg2 expectedValue:(id)arg3;
- (id)expectationWithDescription:(id)arg1;
- (void)_addExpectation:(id)arg1;
- (void)waitForExpectations:(id)arg1 timeout:(double)arg2 enforceOrder:(BOOL)arg3;
- (void)waitForExpectations:(id)arg1 timeout:(double)arg2;
- (void)waitForExpectationsWithTimeout:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_expectationForDistributedNotification:(id)arg1 object:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_expectationForDarwinNotification:(id)arg1;
- (id)performFailableBlock:(CDUnknownBlockType)arg1 testCaseRun:(id)arg2 shouldInterruptTest:(char *)arg3;
- (void)_performTurningExceptionsIntoFailuresInterruptAfterHandling:(BOOL)arg1 block:(CDUnknownBlockType)arg2;
- (void)_recordActivityWithFailure:(id)arg1;
- (void)_recordFailure:(id)arg1;
- (void)_recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(BOOL)arg4;
- (void)_enqueueFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(BOOL)arg4 breakWhenDequeued:(BOOL)arg5;
- (void)_dequeueFailures;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

