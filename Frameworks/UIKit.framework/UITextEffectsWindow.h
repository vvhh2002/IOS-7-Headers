/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIAutoRotatingWindow.h>

#import "_UIScreenBasedObject.h"

@class UIScreen;

@interface UITextEffectsWindow : UIAutoRotatingWindow <_UIScreenBasedObject>
{
    unsigned long _activeEffectsCount;
    BOOL _inDealloc;
    BOOL _nonServiceHosted;
    float _defaultWindowLevel;
    struct CGPoint _hostedWindowOffset;
    unsigned int _activeRemoteViewCount;
    unsigned int _windowLevelCount;
    float _windowLevelStack[5];
}

+ (void)lowerTextEffectsWindowsForHideNotificationCenter;
+ (void)raiseTextEffectsWindowsForShowNotificationCenter;
+ (void)_releaseSharedInstances;
+ (id)sharedTextEffectsWindowAboveStatusBarForScreen:(id)arg1;
+ (id)sharedTextEffectsWindowAboveStatusBar;
+ (id)sharedTextEffectsWindowForScreen:(id)arg1;
+ (id)sharedTextEffectsWindow:(BOOL)arg1;
+ (id)sharedTextEffectsWindow;
+ (id)_sharedTextEffectsWindowforScreen:(id)arg1 aboveStatusBar:(BOOL)arg2 matchesStatusBarOrientationOnAccess:(BOOL)arg3;
+ (id)preferredTextEffectsWindowAboveStatusBar;
+ (id)preferredTextEffectsWindow;
@property(nonatomic) struct CGPoint hostedWindowOffset; // @synthesize hostedWindowOffset=_hostedWindowOffset;
@property(nonatomic) float defaultWindowLevel; // @synthesize defaultWindowLevel=_defaultWindowLevel;
@property(nonatomic) BOOL nonServiceHosted; // @synthesize nonServiceHosted=_nonServiceHosted;
- (BOOL)_isTextEffectsWindow;
- (BOOL)_shouldTintStatusBar;
- (BOOL)_affectsTintView;
- (BOOL)isInternalWindow;
- (id)aboveStatusBar;
- (void)_applicationDidFinishLaunching:(id)arg1;
- (BOOL)_usesWindowServerHitTesting;
- (int)interfaceOrientation;
- (void)matchDeviceOrientation;
- (void)updateSubviewOrdering;
- (void)resetTransform;
- (void)updateForOrientation:(int)arg1;
- (void)updateForOrientation:(int)arg1 forceResetTransform:(BOOL)arg2;
- (void)sortSubviews;
- (void)sendSubviewToBack:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)_didRemoveSubview:(id)arg1;
- (void)delayHideWindow;
- (void)handleStatusBarChangeFromHeight:(float)arg1 toHeight:(float)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromWindow:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toWindow:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromWindow:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toWindow:(id)arg2;
- (struct CGPoint)_adjustPointForHostedDisplay:(struct CGPoint)arg1 hasTarget:(BOOL)arg2 inset:(BOOL)arg3;
- (struct CGPoint)magnifierScreenPointForPoint:(struct CGPoint)arg1 targetWindow:(id)arg2;
- (struct CGPoint)classicWindowPointForPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) struct CGRect hostedFrame;
- (void)_updateTransformLayerForClassicPresentation;
- (BOOL)_disableViewScaling;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)setKeepContextInBackground:(BOOL)arg1;
- (BOOL)_isWindowServerHostingManaged;
- (void)_restoreWindowLevel;
- (void)_setWindowLevel:(float)arg1;
@property(readonly) unsigned int contextID;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly) UIScreen *_intendedScreen;
- (BOOL)_matchingOptions:(id)arg1;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;

@end

