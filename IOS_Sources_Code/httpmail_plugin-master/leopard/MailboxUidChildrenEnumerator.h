/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSEnumerator.h"

@interface MailboxUidChildrenEnumerator : NSEnumerator
{
    struct __CFTree *_root;
    struct __CFTree *_currentTree;
    BOOL _includeHidden;
}

- (void)dealloc;
- (id)_initWithTree:(struct __CFTree *)fp8 includeHiddenChildren:(BOOL)fp12;
- (id)nextObject;

@end

