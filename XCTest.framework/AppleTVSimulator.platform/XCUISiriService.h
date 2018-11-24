//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, XCUIApplication;

@interface XCUISiriService : NSObject
{
    XCUIApplication *_siriApplication;
}

+ (id)siriService;
@property(retain) XCUIApplication *siriApplication; // @synthesize siriApplication=_siriApplication;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)_waitForActivation;
- (void)_assertSiriEnabled;
@property(readonly, getter=isEnabled) _Bool enabled;
- (void)injectVoiceRecognitionAudioInputPaths:(id)arg1;
- (void)injectAssistantRecognitionStrings:(id)arg1;
- (void)activateWithVoiceRecognitionText:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
- (id)init;

@end
