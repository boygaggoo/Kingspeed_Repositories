/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import <Message/IMAPCompoundDownload.h>

@class MimePart;

@interface IMAPMessageDownload : IMAPCompoundDownload
{
    // Error parsing type: @"<IMAPObject>", name: _message
    MimePart *_topLevelPart;
    unsigned int _allowsPartialDownloads:1;
    unsigned int _usingPartialDownloads:1;
    unsigned int _startedFetch:1;
    unsigned int _fetchingBodyText:1;
    unsigned int _doneAddingSubdownloads:1;
    unsigned int _writesCacheFile:1;
}

- (void)dealloc;
- (id)initWithMessage:(id)fp8;
- (id)createClone;
- (id)message;
- (void)setMessage:(id)fp8;
- (BOOL)allowsPartialDownloads;
- (void)setAllowsPartialDownloads:(BOOL)fp8;
- (BOOL)writesCacheFile;
- (void)setWritesCacheFile:(BOOL)fp8;
- (id)topLevelPart;
- (void)setTopLevelPart:(id)fp8;
- (id)data;
- (BOOL)isComplete;
- (void)handleFetchResult:(id)fp8;
- (void)processResults;
- (void)addCommandsToPipeline:(id)fp8 withCache:(id)fp12;

@end
