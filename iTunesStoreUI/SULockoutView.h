/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface SULockoutView : UIView
{
    UILabel *_bodyLabel;
    UIImageView *_imageView;
    int _layoutPreset;
    UILabel *_titleLabel;
}

@property(nonatomic) int layoutPreset; // @synthesize layoutPreset=_layoutPreset;
- (id)_titleLabel;
- (id)_imageView;
- (id)_bodyLabel;
- (void)_layoutForSlowNetwork;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) NSString *body;
- (void)layoutSubviews;
- (void)dealloc;

@end
