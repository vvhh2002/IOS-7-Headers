/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol RCTrimControllerDelegate <NSObject>

@optional
- (void)trimController:(id)arg1 didFinishTrimmingToFile:(id)arg2 trimDuration:(double)arg3;
- (void)trimControllerDidCancel:(id)arg1;
- (void)trimControllerDidConfirm:(id)arg1;
@end
