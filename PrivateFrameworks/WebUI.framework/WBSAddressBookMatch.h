/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <WebUI/WBSFormAutoFillItem.h>

@class NSDate, NSString;

@interface WBSAddressBookMatch : WBSFormAutoFillItem
{
    id _value;
    NSString *_property;
    NSString *_key;
    NSString *_identifier;
}

@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *property; // @synthesize property=_property;
- (id)completion;
- (void)dealloc;
- (id)initWithValue:(id)arg1 property:(id)arg2 key:(id)arg3 identifier:(id)arg4;
@property(copy, nonatomic) NSDate *dateValue;
@property(copy, nonatomic) NSString *stringValue;
- (void)_setValue:(id)arg1;

@end

