/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AppStoreUI/ASStructuredPageViewController.h>

@interface ASUpdatesStructuredPageViewController : ASStructuredPageViewController
{
    BOOL _isUpdatingAll;
}

- (void)_updateTabBarItemsAnimated:(BOOL)arg1;
- (void)_updateNavigationButtons;
- (BOOL)_purchaseItems:(id)arg1;
- (int)_numberOfDisplayedUpdates;
- (void)_updateAll:(id)arg1;
- (void)_tabConfigurationChanged:(id)arg1;
- (void)_purchasesChangedNotification:(id)arg1;
- (float)marginForTableView:(id)arg1;
- (void)storePageCleanupBeforeTearDown;
- (void)reloadForChangedRowCount:(int)arg1;
- (void)reloadData;
- (BOOL)purchaseItemAtIndexPath:(id)arg1;
- (id)newTermsAndConditionsFooter;
- (id)newNoItemsOverlayLabel;
- (id)newDataSource;
- (id)itemAtIndexPath:(id)arg1;
- (BOOL)handleSelectionForIndexPath:(id)arg1 tapCount:(int)arg2;
- (void)dealloc;
- (id)init;

@end

