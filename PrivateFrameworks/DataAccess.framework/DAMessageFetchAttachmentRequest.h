/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface DAMessageFetchAttachmentRequest : NSObject
{
    NSString *_messageID;
    NSString *_attachmentName;
}

- (id)attachmentName;
- (id)messageID;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithAttachmentName:(id)arg1 andMessageServerID:(id)arg2;

@end

