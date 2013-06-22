/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

@class AVPlayer, AVSubtitleLayerInternal, CADisplay;

@interface AVSubtitleLayer : CALayer
{
    AVSubtitleLayerInternal *_subtitleLayer;
}

+ (id)subtitleLayerWithPlayer:(id)arg1;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (void)_updateNonForcedSubtitleDisplayEnabled:(BOOL)arg1;
- (void)_setHasPlayerToObserve:(int)arg1 andShouldObserveIt:(int)arg2;
- (void)_invalidateBoundaryTimeObserver;
- (void)finalize;
- (void)dealloc;
@property(retain, nonatomic) AVPlayer *player; // @dynamic player;
- (void)subtitlesDidChange:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic, getter=isOverscanSubtitleSupportEnabled) BOOL overscanSubtitleSupportEnabled;
@property(readonly, nonatomic) CADisplay *subtitleLayerDisplay;

@end
