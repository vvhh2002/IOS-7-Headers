/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSMutableArray, NSMutableDictionary, NSString, PLTimeSnapshot;

@interface PLEntry : NSObject
{
    NSMutableDictionary *_dictionary;
    NSMutableArray *_keys;
    NSMutableArray *_values;
    NSMutableArray *_nonPrintingKeys;
    PLTimeSnapshot *_timeSnapshot;
    NSDate *_entryDate;
    NSString *_entryKey;
}

@property(retain, nonatomic) NSString *entryKey; // @synthesize entryKey=_entryKey;
@property(retain, nonatomic) NSDate *entryDate; // @synthesize entryDate=_entryDate;
@property(retain) PLTimeSnapshot *timeSnapshot; // @synthesize timeSnapshot=_timeSnapshot;
@property(retain) NSMutableArray *nonPrintingKeys; // @synthesize nonPrintingKeys=_nonPrintingKeys;
@property(retain, getter=allValues) NSMutableArray *values; // @synthesize values=_values;
@property(retain) NSMutableArray *keys; // @synthesize keys=_keys;
@property(retain) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)description;
- (void)sortByValue:(int)arg1;
- (int)compare:(id)arg1 options:(short)arg2;
- (int)compare:(id)arg1;
- (unsigned int)indexForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1 withKeyOrder:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 atIndex:(unsigned int)arg3;
- (void)setKeysNonPrinting:(id)arg1;
- (void)setKeyNonPrinting:(id)arg1;
- (void)setKeysOrder:(id)arg1;
- (void)dealloc;
- (id)initEntryWithKey:(id)arg1 withDate:(id)arg2;
- (id)initEntryWithKey:(id)arg1;
- (id)init;

@end

