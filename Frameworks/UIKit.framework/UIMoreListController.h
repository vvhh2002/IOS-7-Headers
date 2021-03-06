/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, UIBarButtonItem, UIMoreListCellLayoutManager, UITableView;

@interface UIMoreListController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_table;
    BOOL _allowsCustomizing;
    BOOL _disableCustomizing;
    BOOL _hideNavigationBar;
    NSArray *_moreViewControllers;
    UIMoreListCellLayoutManager *_layoutManager;
    UIBarButtonItem *_moreEditButtonItem;
    BOOL _moreViewControllersChanged;
}

- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_targetNavigationController;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)tabBarItem;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
@property(nonatomic) BOOL allowsCustomizing;
@property(nonatomic) BOOL moreViewControllersChanged;
@property(retain, nonatomic) NSArray *moreViewControllers;
- (void)_willChangeToIdiom:(int)arg1 onScreen:(id)arg2;
- (void)_updateEditButton;
- (void)_layoutCells;
- (id)table;
- (void)dealloc;
- (id)init;

@end

