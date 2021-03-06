/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ChatKit/CKTranscriptMessageCell.h>

@class CKTypingIndicatorLayer;

@interface CKTranscriptTypingIndicatorCell : CKTranscriptMessageCell
{
    CKTypingIndicatorLayer *_typingIndicatorLayer;
}

+ (struct CGSize)indicatorSize;
@property(retain, nonatomic) CKTypingIndicatorLayer *typingIndicatorLayer; // @synthesize typingIndicatorLayer=_typingIndicatorLayer;
- (void)startShrinkAnimation;
- (void)startPulseAnimation;
- (void)startGrowAnimation;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)configureForRowObject:(id)arg1;

@end

