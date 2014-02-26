/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface IMAPDownloadCache : NSObject
{
    NSMutableArray *_downloads;
}

- (void)addCommandsForDownload:(id)fp8 toPipeline:(id)fp12;
- (void)cleanUpDownloadsForUid:(unsigned long)fp8;
- (void)dealloc;
- (id)downloadForMessage:(id)fp8;
- (id)downloadForUid:(unsigned long)fp8 section:(id)fp12 expectedLength:(unsigned long)fp16;
- (id)downloadForUid:(unsigned long)fp8 section:(id)fp12 length:(unsigned long)fp16;
- (void)handleFetchResponse:(id)fp8 forUid:(unsigned long)fp12;
- (void)handleFetchResponses:(id)fp8;
- (void)processResultsForUid:(unsigned long)fp8;

@end
