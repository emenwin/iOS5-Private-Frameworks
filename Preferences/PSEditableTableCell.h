/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Preferences/PreferencesTextTableCell.h>

@interface PSEditableTableCell : PreferencesTextTableCell
{
    SEL _targetSetter;
    id _realTarget;
    BOOL _valueChanged;
    BOOL _isEditing;
}

- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (BOOL)canReload;
- (void)controlChanged:(id)arg1;
- (void)endEditingAndSave;
- (void)_setValueChanged;
- (void)_saveForExit;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;
- (void)dealloc;

@end

