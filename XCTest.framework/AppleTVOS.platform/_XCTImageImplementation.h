//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, UIImage;

@interface _XCTImageImplementation : NSObject
{
    UIImage *_platformImage;
    NSData *_originalData;
    NSString *_name;
    double _scale;
}

@property double scale; // @synthesize scale=_scale;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSData *originalData; // @synthesize originalData=_originalData;
@property(copy) UIImage *platformImage; // @synthesize platformImage=_platformImage;
- (void).cxx_destruct;

@end

