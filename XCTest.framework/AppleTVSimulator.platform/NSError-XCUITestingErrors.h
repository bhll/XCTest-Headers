//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface NSError (XCUITestingErrors)
+ (id)_xcui_errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 description:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
+ (id)_xcui_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)_xcui_error:(long long)arg1 userInfo:(id)arg2 description:(id)arg3;
+ (id)_xcui_error:(long long)arg1 description:(id)arg2;
- (_Bool)xcui_isUITestingError:(long long)arg1;
@end
