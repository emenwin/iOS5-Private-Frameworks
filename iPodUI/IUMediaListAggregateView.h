/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIImageView.h"

@class IUMediaListAggregateViewConfiguration, IUReflectionImageView, NSMutableArray;

@interface IUMediaListAggregateView : UIImageView
{
    id _delegate;
    IUMediaListAggregateViewConfiguration *_configuration;
    IUReflectionImageView *_artworkView;
    NSMutableArray *_configurationSubviews;
    unsigned int _needsViewsLoaded:1;
    unsigned int _drawAsDisabled:1;
}

@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_reloadViews;
- (void)_reloadSubviewsForConfiguration;
- (void)_removeSubviewsForConfiguration:(BOOL)arg1;
- (void)_reloadArtworkView;
@property(retain, nonatomic) IUMediaListAggregateViewConfiguration *configuration;
- (id)initWithConfiguration:(id)arg1;

@end

