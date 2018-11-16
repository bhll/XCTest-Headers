//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface XCSymbolicationRecord : NSObject
{
    unsigned long long _lineNumber;
    NSString *_filePath;
    NSString *_symbolName;
    NSString *_symbolOwner;
}

+ (id)symbolicationRecordForAddress:(unsigned long long)arg1;
+ (struct _CSTypeRef)symbolicator;
+ (id)failureRecord;
@property(copy) NSString *symbolOwner; // @synthesize symbolOwner=_symbolOwner;
@property(copy) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(copy) NSString *filePath; // @synthesize filePath=_filePath;
@property unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
- (void).cxx_destruct;
- (id)description;

@end

