//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCTestObservation.h"

@class NSMutableArray, NSString, XCTestCase, XCTestSuite;

@interface XCTestMisuseObserver : NSObject <XCTestObservation>
{
    CDUnknownBlockType _warningLogHandler;
    NSMutableArray *_testSuiteStack;
    XCTestCase *_currentTestCase;
}

@property(retain) XCTestCase *currentTestCase; // @synthesize currentTestCase=_currentTestCase;
@property(readonly) NSMutableArray *testSuiteStack; // @synthesize testSuiteStack=_testSuiteStack;
@property(readonly, copy) CDUnknownBlockType warningLogHandler; // @synthesize warningLogHandler=_warningLogHandler;
- (void).cxx_destruct;
- (void)testCaseDidFinish:(id)arg1;
- (void)testCase:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testCaseWillStart:(id)arg1;
- (void)testSuiteDidFinish:(id)arg1;
- (void)testSuiteWillStart:(id)arg1;
- (_Bool)testSuiteStackContainsTestSuite:(id)arg1;
- (void)removeTestSuiteFromStack:(id)arg1;
- (void)popCurrentTestSuite;
- (void)pushTestSuite:(id)arg1;
@property(readonly) XCTestSuite *currentTestSuite;
- (void)emitWarningLog:(id)arg1;
- (id)initWithWarningLogHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

