//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, NSUUID, XCTSpindumpRequestSpecification;

@protocol XCTestManager_ManagerInterface
- (void)_XCT_requestBackgroundAssertionForPID:(int)arg1 reply:(void (^)(BOOL))arg2;
- (void)_XCT_requestScreenshotOfScreenWithID:(unsigned int)arg1 withRect:(struct CGRect)arg2 uti:(NSString *)arg3 compressionQuality:(double)arg4 withReply:(void (^)(NSData *, NSError *))arg5;
- (void)_XCT_requestScreenshotOfScreenWithID:(unsigned int)arg1 withRect:(struct CGRect)arg2 withReply:(void (^)(NSData *, NSError *))arg3;
- (void)_XCT_requestSpindumpWithSpecification:(XCTSpindumpRequestSpecification *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)_XCT_requestEndpointForTestTargetWithPID:(int)arg1 preferredBackendPath:(NSString *)arg2 reply:(void (^)(NSXPCListenerEndpoint *, NSError *))arg3;
- (void)_XCT_requestSerializedTransportWrapperForIDESessionWithIdentifier:(NSUUID *)arg1 reply:(void (^)(XCTSerializedTransportWrapper *))arg2;
- (void)_XCT_requestSocketForSessionIdentifier:(NSUUID *)arg1 reply:(void (^)(NSFileHandle *))arg2;
- (void)_XCT_exchangeProtocolVersion:(unsigned long long)arg1 reply:(void (^)(unsigned long long))arg2;
@end

