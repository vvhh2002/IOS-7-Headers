/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFMessageBodyConsumableInnerTextNode.h"

@class NSString;

@interface _MFMessageBodyConsumableInnerTextString : NSObject <MFMessageBodyConsumableInnerTextNode>
{
    NSString *_string;
}

@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1;

@end

