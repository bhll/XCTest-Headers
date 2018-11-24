//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCTest/XCTestObserver.h>

#import "XCTestObservation.h"
#import "_XCTestObservationPrivate.h"

@class NSFileHandle, NSString;

@interface XCTestLog : XCTestObserver <XCTestObservation, _XCTestObservationPrivate>
{
}

+ (void)_logActivity:(id)arg1 inTestCase:(id)arg2;
+ (id)_messageForTest:(id)arg1 didMeasureValues:(id)arg2 forPerformanceMetricID:(id)arg3 name:(id)arg4 unitsOfMeasurement:(id)arg5 baselineName:(id)arg6 baselineAverage:(id)arg7 maxPercentRegression:(id)arg8 maxPercentRelativeStandardDeviation:(id)arg9 maxRegression:(id)arg10 maxStandardDeviation:(id)arg11 file:(id)arg12 line:(unsigned long long)arg13;
- (void)_testCase:(id)arg1 willStartActivity:(id)arg2;
- (void)testCase:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)_testCase:(id)arg1 didMeasureValues:(id)arg2 forPerformanceMetricID:(id)arg3 name:(id)arg4 unitsOfMeasurement:(id)arg5 baselineName:(id)arg6 baselineAverage:(id)arg7 maxPercentRegression:(id)arg8 maxPercentRelativeStandardDeviation:(id)arg9 maxRegression:(id)arg10 maxStandardDeviation:(id)arg11 file:(id)arg12 line:(unsigned long long)arg13;
- (void)testCaseDidFinish:(id)arg1;
- (void)testCaseWillStart:(id)arg1;
- (void)testSuiteDidFinish:(id)arg1;
- (void)testSuite:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testSuiteWillStart:(id)arg1;
- (void)_testDidFail:(id)arg1 withDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testLogWithFormat:(id)arg1 arguments:(char *)arg2;
- (void)testLogWithFormat:(id)arg1;
@property(readonly) NSFileHandle *logFileHandle;
- (id)dateFormatter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

