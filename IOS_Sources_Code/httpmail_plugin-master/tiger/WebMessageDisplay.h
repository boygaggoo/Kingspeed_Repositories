/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import "WebMessageController.h"

#import "MessageContentDisplayProtocol.h"

@class NSMutableSet;

@interface WebMessageDisplay : WebMessageController <MessageContentDisplay>
{
    NSMutableSet *_gatekeeperApprovedAttachments;
}

+ (id)copyDocumentForMessage:(id)fp8 viewingState:(id)fp12;
+ (void)initialize;
- (void)adjustFontSizeBy:(int)fp8 viewingState:(id)fp12;
- (id)attachmentsInSelection;
- (void)cacheGatekeeperApprovalStatus:(BOOL)fp8 forAttachment:(id)fp12;
- (BOOL)cachedGatekeeperApprovalStatusForAttachment:(id)fp8;
- (id)contentView;
- (void)dealloc;
- (void)display:(id)fp8 inContainerView:(id)fp12 replacingView:(id)fp16;
- (void)documentResized;
- (id)findTarget;
- (void)highlightSearchText:(id)fp8;
- (void)prepareToRemoveView;
- (BOOL)scrollVerticallyBy:(float)fp8;
- (id)selectedText;
- (id)selectedWebArchive;
- (id)textView;
- (void)updateURLMatches:(id)fp8 viewingState:(id)fp12;
- (float)verticalPageScrollDistance;
- (id)webArchive;

@end

