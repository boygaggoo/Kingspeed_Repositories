/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString, NSURL;

@interface SafariBookmark : NSObject
{
    NSString *_title;
    NSString *_uuid;
    NSString *_comment;
    NSURL *_url;
    NSArray *_children;
}

+ (id)_itemFromDictionary:(id)fp8 withSchemes:(id)fp12;
+ (id)_itemFromBookmark:(id)fp8 withSchemes:(id)fp12;
- (id)initWithTitle:(id)fp8 UUID:(id)fp12 comment:(id)fp16 URL:(id)fp20 children:(id)fp24;
- (void)dealloc;
- (id)title;
- (id)UUID;
- (id)comment;
- (BOOL)isLeaf;
- (id)children;
- (id)URLString;
- (id)URL;
- (void)describeTo:(id)fp8 withIndent:(id)fp12;
- (id)description;
- (BOOL)isEqual:(id)fp8;
- (unsigned int)hash;
- (void)_addUUIDsTo:(id)fp8;
- (void)_addURLsTo:(id)fp8;

@end
