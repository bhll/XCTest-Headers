//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface XCUIApplicationRegistryRecord : NSObject
{
    BOOL _isTestDependency;
    NSURL *_URL;
    NSString *_bundleIdentifier;
}

@property(readonly) BOOL isTestDependency; // @synthesize isTestDependency=_isTestDependency;
@property(readonly, copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 bundleIdentifier:(id)arg2 isTestDependency:(BOOL)arg3;

@end

