//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface XCUIEventGenerator : NSObject
{
    id <XCUIAccessibilityInterface> _accessibilityInterface;
    unsigned long long _generation;
    struct __CFRunLoopObserver *_generationObserver;
    double _implicitConfirmationDelay;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __CGEventSource *_eventSource;
    // Error parsing type: Aq, name: _eventSequenceCounter
    CDUnknownFunctionPointerType _cgEventPostFunc;
}

+ (id)sharedGenerator;
@property CDUnknownFunctionPointerType cgEventPostFunc; // @synthesize cgEventPostFunc=_cgEventPostFunc;
// Error parsing type for property eventSequenceCounter:
// Property attributes: TAq,R,V_eventSequenceCounter

@property(readonly) struct __CGEventSource *eventSource; // @synthesize eventSource=_eventSource;
@property(readonly) NSObject<OS_dispatch_queue> *eventQueue; // @synthesize eventQueue=_eventQueue;
@property double implicitConfirmationDelay; // @synthesize implicitConfirmationDelay=_implicitConfirmationDelay;
@property(readonly) struct __CFRunLoopObserver *generationObserver; // @synthesize generationObserver=_generationObserver;
@property unsigned long long generation; // @synthesize generation=_generation;
- (void).cxx_destruct;
- (void)_issueTouchBarEvent:(unsigned int)arg1 atLocation:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (double)pressTouchBarAtPoint:(struct CGPoint)arg1 forDuration:(double)arg2 liftAtPoint:(struct CGPoint)arg3 velocity:(double)arg4 handler:(CDUnknownBlockType)arg5;
- (void)_pressTouchBarAtPoint:(struct CGPoint)arg1 forDuration:(double)arg2 handleCompletion:(CDUnknownBlockType)arg3;
- (double)pressTouchBarAtPoint:(struct CGPoint)arg1 forDuration:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_tapTouchBarAtPoint:(struct CGPoint)arg1 handleCompletion:(CDUnknownBlockType)arg2;
- (double)doubleTapTouchBarAtPoint:(struct CGPoint)arg1 handler:(CDUnknownBlockType)arg2;
- (double)tapTouchBarAtPoint:(struct CGPoint)arg1 handler:(CDUnknownBlockType)arg2;
- (double)sendKeyboardInputs:(id)arg1 layout:(id)arg2 maximumFrequency:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (double)sendKey:(id)arg1 modifierFlags:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (double)sendString:(id)arg1 maximumFrequency:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (double)setModifiers:(unsigned long long)arg1 merge:(BOOL)arg2 original:(unsigned long long *)arg3 handler:(CDUnknownBlockType)arg4;
- (double)sendKey:(unsigned short)arg1 down:(BOOL)arg2 modifiers:(unsigned long long)arg3 string:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (double)hitKey:(unsigned short)arg1 handler:(CDUnknownBlockType)arg2;
- (double)scrollByX:(double)arg1 y:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (double)scrollByLines:(long long)arg1 atPoint:(struct CGPoint)arg2 handler:(CDUnknownBlockType)arg3;
- (double)clickAtPoint:(struct CGPoint)arg1 forDuration:(double)arg2 releaseAtPoint:(struct CGPoint)arg3 velocity:(double)arg4 handler:(CDUnknownBlockType)arg5;
- (double)clickAndDragFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 handler:(CDUnknownBlockType)arg3;
- (double)rightClickAtPoint:(struct CGPoint)arg1 handler:(CDUnknownBlockType)arg2;
- (double)tripleClickAtPoint:(struct CGPoint)arg1 handler:(CDUnknownBlockType)arg2;
- (double)doubleClickAtPoint:(struct CGPoint)arg1 handler:(CDUnknownBlockType)arg2;
- (double)clickAtPoint:(struct CGPoint)arg1 handler:(CDUnknownBlockType)arg2;
- (double)hoverAtPoint:(struct CGPoint)arg1 handler:(CDUnknownBlockType)arg2;
- (struct CGPoint)_currentMousePosition;
- (void)_clickMouseButton:(unsigned int)arg1 withCount:(unsigned long long)arg2 atPoint:(struct CGPoint)arg3 handleCompletion:(CDUnknownBlockType)arg4;
- (void)_moveMouseToPoint:(struct CGPoint)arg1 handleCompletion:(CDUnknownBlockType)arg2;
- (void)_postCGEvent:(struct __CGEvent *)arg1 handleCompletion:(CDUnknownBlockType)arg2;
@property(readonly) int eventSourceStateID;
- (void)_startEventSequenceWithSteppingCallback:(CDUnknownBlockType)arg1;
- (void)_scheduleCallback:(CDUnknownBlockType)arg1 afterInterval:(double)arg2;
@property(readonly) id <XCUIAccessibilityInterface> accessibilityInterface; // @synthesize accessibilityInterface=_accessibilityInterface;
- (id)initWithAccessibilityInterface:(id)arg1;
- (void)dealloc;

@end
