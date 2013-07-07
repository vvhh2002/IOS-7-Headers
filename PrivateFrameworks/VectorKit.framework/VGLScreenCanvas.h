/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "CAEAGLLayer.h"

#import "VGLCanvas.h"

@class VGLContext, VGLFramebuffer;

__attribute__((visibility("hidden")))
@interface VGLScreenCanvas : CAEAGLLayer <VGLCanvas>
{
    VGLContext *_targetContext;
    int _canvasWidth;
    int _canvasHeight;
    BOOL _useDepthBuffer;
    BOOL _useStencilBuffer;
    BOOL _useMultisampling;
    BOOL _requiresMultisampling;
    struct _VGLColor _glClearColor;
    struct CGContext *_snapshotContext;
    BOOL _forceRecreateFramebuffer;
    BOOL _forceRecreateFramebufferAndKeepMultisampleFramebuffer;
    VGLFramebuffer *_targetBuffer;
    float _contentScale;
}

+ (Class)contextClass;
@property(nonatomic) float contentScale; // @synthesize contentScale=_contentScale;
@property(nonatomic) struct _VGLColor glClearColor; // @synthesize glClearColor=_glClearColor;
@property(nonatomic) BOOL useStencilBuffer; // @synthesize useStencilBuffer=_useStencilBuffer;
@property(nonatomic) BOOL useDepthBuffer; // @synthesize useDepthBuffer=_useDepthBuffer;
@property(readonly, nonatomic) VGLContext *vglContext; // @synthesize vglContext=_targetContext;
- (id).cxx_construct;
- (void)_destroyFramebufferAndKeepMultisampleFramebuffer;
- (void)_destroyFramebuffer;
- (void)_createFramebuffer;
- (void)_destroyAndCreateFramebufferAndKeepMultisampleFramebuffer;
- (void)_destroyAndCreateFramebuffer;
- (void)frameBufferDestroyed;
- (BOOL)isEffectivelyHidden;
@property(readonly, nonatomic) BOOL currentSceneRequiresMSAA;
@property(nonatomic) BOOL useMultisampling;
- (void)preloadResources;
@property(readonly, nonatomic) struct CGSize sizeInPixels;
@property(readonly, nonatomic) struct CGSize size;
- (void)didEnterBackground;
- (void)didReceiveMemoryWarning;
- (void)didPresent;
- (void)present;
- (void)didDrawView;
- (void)drawWithTimestamp:(double)arg1;
- (void)willDrawView;
- (void)setContentsScale:(float)arg1;
- (void)layoutSublayers;
- (void)_updateForceRecreateFramebuffer;
- (void)setNeedsDisplay;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
@property(readonly, nonatomic, getter=isDrawable) BOOL drawable;

@end
