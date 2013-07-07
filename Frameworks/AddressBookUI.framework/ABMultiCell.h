/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AddressBookUI/ABChameleonCell.h>

@class ABMultiCellContentView;

@interface ABMultiCell : ABChameleonCell
{
    ABMultiCellContentView *_abMultiCellContentView;
    BOOL _editingDisabled;
}

@property(nonatomic, getter=isEditingDisabled) BOOL editingDisabled; // @synthesize editingDisabled=_editingDisabled;
- (void)setAbCellStyle:(int)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)_shouldSwallowTouches:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) ABMultiCellContentView *multiCellContentView;
- (void)_addMultiCellContentViewIfNeeded;
- (void)dealloc;

@end
