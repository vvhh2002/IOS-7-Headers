/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface UIViewAnimationBlockDelegate : NSObject
{
    BOOL _didBeginBlockAnimation;
    BOOL _allowUserInteraction;
    BOOL _deferOnCommonModes;
    BOOL _isZeroDuration;
    id _start;
    id _completion;
}

+ (void)setAnimationBlockDelegateWithDuration:(double)arg1 options:(unsigned int)arg2 start:(id)arg3 completion:(void)arg4;
@property(readonly, nonatomic) BOOL _allowsUserInteraction; // @synthesize _allowsUserInteraction=_allowUserInteraction;
- (void)_sendDeferredCompletion:(id)arg1;
- (void)_didEndBlockAnimation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_willBeginBlockAnimation:(id)arg1 context:(id)arg2;
- (void)dealloc;

@end

