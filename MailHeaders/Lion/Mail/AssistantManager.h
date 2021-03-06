/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



#import "AssistantDelegate-Protocol.h"

@class Assistant, NSButton, NSView, NSWindow;

@interface AssistantManager : NSObject <AssistantDelegate, NSWindowDelegate>
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

+ (id)openAssistantOfType:(int)arg1 modalForWindow:(id)arg2;
+ (void)openStartupAssistant;
+ (BOOL)isImporting;
- (id)_newAssistantOfType:(int)arg1;
- (id)init;
- (void)_setAssistant:(id)arg1;
- (id)_initWithType:(int)arg1;
- (void)dealloc;
- (id)assistantContainerView;
- (id)backButton;
- (id)forwardButton;
- (id)cancelButton;
- (id)helpButton;
- (void)back:(id)arg1;
- (void)forward:(id)arg1;
- (void)cancel:(id)arg1;
- (void)_start;
- (void)_showInWindow:(id)arg1;
- (void)_windowDidBecomeKey:(id)arg1;
- (void)_sheetWillBegin:(id)arg1;
- (void)_sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_terminate;
- (void)assistantDidFinish:(id)arg1;
- (void)windowWillClose:(id)arg1;
@property(readonly, nonatomic) Assistant *assistant; // @synthesize assistant=_assistant;

@end

