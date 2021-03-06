/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class OADFill, OADStroke;

__attribute__((visibility("hidden")))
@interface OADUnderline : NSObject
{
    OADStroke *mStroke;
    OADFill *mFill;
    unsigned char mType;
    unsigned int mIsUsingTextFill:1;
    unsigned int mIsUsingTextStroke:1;
}

- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)setIsUsingTextStroke:(BOOL)arg1;
- (BOOL)isUsingTextStroke;
- (void)setIsUsingTextFill:(BOOL)arg1;
- (BOOL)isUsingTextFill;
- (void)setType:(int)arg1;
- (int)type;
- (void)setFill:(id)arg1;
- (id)fill;
- (void)setStroke:(id)arg1;
- (id)stroke;
- (void)dealloc;
- (id)initWithStroke:(id)arg1 fill:(id)arg2 type:(int)arg3;

@end

