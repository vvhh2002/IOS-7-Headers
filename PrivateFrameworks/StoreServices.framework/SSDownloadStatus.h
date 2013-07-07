/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"
#import "SSXPCCoding.h"

@class NSError, SSDownloadPhase;

@interface SSDownloadStatus : NSObject <SSXPCCoding, NSCopying>
{
    SSDownloadPhase *_activePhase;
    BOOL _contentRestricted;
    NSError *_error;
    BOOL _failed;
    BOOL _paused;
}

@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isFailed) BOOL failed; // @synthesize failed=_failed;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic, getter=isContentRestricted) BOOL contentRestricted; // @synthesize contentRestricted=_contentRestricted;
@property(readonly, nonatomic) SSDownloadPhase *activePhase; // @synthesize activePhase=_activePhase;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setPercentComplete:(float)arg1;
@property(nonatomic, getter=isPausable) BOOL pausable;
- (void)setOperationType:(int)arg1;
- (void)setOperationProgress:(id)arg1;
@property(readonly, nonatomic) float percentComplete;
@property(readonly, nonatomic, getter=isFailedTransient) BOOL failedTransient;
- (void)dealloc;

@end
