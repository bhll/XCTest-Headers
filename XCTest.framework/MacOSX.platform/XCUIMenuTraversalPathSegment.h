//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, XCElementSnapshot;

@interface XCUIMenuTraversalPathSegment : NSObject
{
    unsigned int _eventType;
    XCElementSnapshot *_elementSnapshot;
}

@property(readonly) unsigned int eventType; // @synthesize eventType=_eventType;
@property(readonly) XCElementSnapshot *elementSnapshot; // @synthesize elementSnapshot=_elementSnapshot;
- (void).cxx_destruct;
@property(readonly) NSString *eventDescription;
@property(readonly) BOOL opensMenuBarRootMenu;
- (id)debugDescription;
- (id)initWithElementSnapshot:(id)arg1 eventType:(unsigned int)arg2;

@end
