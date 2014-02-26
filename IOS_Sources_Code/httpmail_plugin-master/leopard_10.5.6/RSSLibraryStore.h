/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Message/LibraryStore.h>

#import "RouterStore-Protocol.h"

@class NSURL;

@interface RSSLibraryStore : LibraryStore <RouterStore>
{
    NSURL *_feedURL;
}

+ (void)tryToRecoverFeedURLsFromFeedInfo:(id)fp8;
+ (void)didFinishFetching:(BOOL)fp8;
+ (void)fetchSynchronously;
+ (id)_messageForEntry:(id)fp8 feed:(id)fp12 store:(id)fp16 isUpdated:(BOOL)fp20;
- (void)dealloc;
- (void)subscribeToFeedWithURL:(id)fp8;
- (void)subscribeToFeedWithTransporter:(id)fp8;
- (void)unsubscribe;
- (void)subscribeToFeedIfNecessary;
- (void)setFeedURL:(id)fp8 needsSave:(BOOL)fp12;
- (id)feedURL;
- (void)addEntries:(id)fp8 fromFeed:(id)fp12;
- (void)routeArticleMessages:(id)fp8 fetchedAt:(id)fp12;
- (void)_waitForRouterToFinishRouting:(id)fp8 articlesFetchedAt:(id)fp12;
- (void)messagesWillBeRouted:(id)fp8;
- (void)messagesWereRouted:(id)fp8;
- (void)cancel;
- (void)fetchSynchronously;
- (id)setFlagsFromDictionary:(id)fp8 forMessages:(id)fp12;
- (id)allMailboxUidRepresentations;

@end

