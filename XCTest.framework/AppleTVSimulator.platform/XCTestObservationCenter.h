//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface XCTestObservationCenter : NSObject
{
    id _internalImplementation;
}

+ (void)setSharedTestObservationCenter:(id)arg1;
+ (id)sharedTestObservationCenter;
- (void).cxx_destruct;
- (void)_testCase:(id)arg1 didFinishActivity:(id)arg2;
- (void)_testCase:(id)arg1 willStartActivity:(id)arg2;
- (void)_testCaseDidFail:(id)arg1 withDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)_testCase:(id)arg1 didMeasureValues:(id)arg2 forPerformanceMetricID:(id)arg3 name:(id)arg4 unitsOfMeasurement:(id)arg5 baselineName:(id)arg6 baselineAverage:(id)arg7 maxPercentRegression:(id)arg8 maxPercentRelativeStandardDeviation:(id)arg9 maxRegression:(id)arg10 maxStandardDeviation:(id)arg11 file:(id)arg12 line:(unsigned long long)arg13;
- (void)_testCaseDidStop:(id)arg1;
- (void)_testCaseDidStart:(id)arg1;
- (void)_testSuiteDidFail:(id)arg1 withDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)_testSuiteDidStop:(id)arg1;
- (void)_testSuiteDidStart:(id)arg1;
- (void)_suspendObservationForBlock:(CDUnknownBlockType)arg1;
- (void)_suspendObservation;
- (void)_resumeObservation;
- (void)_observeTestExecutionForBlock:(CDUnknownBlockType)arg1;
- (void)removeTestObserver:(id)arg1;
- (void)addTestObserver:(id)arg1;
@property _Bool suspended;
@property(readonly) NSMutableArray *observers;
- (id)description;
- (id)init;
- (id)initBasicCenter;

@end

