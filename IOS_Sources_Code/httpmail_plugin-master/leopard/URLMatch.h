/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface URLMatch : NSObject
{
    struct _NSRange _range;
    NSString *_url;
}

- (id)initWithRange:(struct _NSRange)fp8 url:(id)fp16;
- (void)dealloc;
- (void)finalize;
- (struct _NSRange)range;
- (id)url;
- (id)description;

@end
