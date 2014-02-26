/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import "NSObject.h"

@class Assistant, HelpButton, NSButton, NSView, NSWindow;

@interface AssistantManager : NSObject
{
    NSWindow *_window;
    NSView *_assistantContainerView;
    NSButton *_backButton;
    NSButton *_forwardButton;
    NSButton *_cancelButton;
    HelpButton *_helpButton;
    int _type;
    Assistant *_assistant;
}

+ (void)openAssistantOfType:(int)fp8 modalForWindow:(id)fp12;
+ (void)openStartupAssistant;
- (id)_createAssistantOfType:(int)fp8;
- (id)_initWithType:(int)fp8;
- (void)_setAssistant:(id)fp8;
- (void)_sheetDidEnd:(id)fp8 returnCode:(int)fp12 contextInfo:(void *)fp16;
- (void)_sheetWillBegin:(id)fp8;
- (void)_showInWindow:(id)fp8;
- (void)_start;
- (void)_terminate;
- (void)_windowDidBecomeKey:(id)fp8;
- (id)assistantContainerView;
- (void)assistantDidFinish:(id)fp8;
- (void)back:(id)fp8;
- (id)backButton;
- (void)cancel:(id)fp8;
- (id)cancelButton;
- (void)dealloc;
- (void)forward:(id)fp8;
- (id)forwardButton;
- (id)helpButton;
- (id)init;
- (void)windowWillClose:(id)fp8;

@end

