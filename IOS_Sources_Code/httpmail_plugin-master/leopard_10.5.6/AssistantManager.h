/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class Assistant, NSButton, NSView, NSWindow;

@interface AssistantManager : NSObject
{
    NSWindow *_window;
    NSView *_assistantContainerView;
    NSButton *_backButton;
    NSButton *_forwardButton;
    NSButton *_cancelButton;
    NSButton *_helpButton;
    int _type;
    Assistant *_assistant;
}

+ (void)openAssistantOfType:(int)fp8 modalForWindow:(id)fp12;
+ (void)openStartupAssistant;
+ (BOOL)isImporting;
- (id)_createAssistantOfType:(int)fp8;
- (id)init;
- (void)_setAssistant:(id)fp8;
- (id)_initWithType:(int)fp8;
- (void)dealloc;
- (id)assistantContainerView;
- (id)backButton;
- (id)forwardButton;
- (id)cancelButton;
- (id)helpButton;
- (void)back:(id)fp8;
- (void)forward:(id)fp8;
- (void)cancel:(id)fp8;
- (void)_start;
- (void)_showInWindow:(id)fp8;
- (void)_windowDidBecomeKey:(id)fp8;
- (void)_sheetWillBegin:(id)fp8;
- (void)_sheetDidEnd:(id)fp8 returnCode:(int)fp12 contextInfo:(void *)fp16;
- (void)_terminate;
- (void)assistantDidFinish:(id)fp8;
- (void)windowWillClose:(id)fp8;

@end

