/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVMediaSelectionGroup.h>

@class AVAsset, NSArray;

@interface AVMediaSelectionTrackGroup : AVMediaSelectionGroup
{
    AVAsset *_asset;
    NSArray *_trackIDs;
    NSArray *_options;
    BOOL _allowsEmptySelection;
}

- (id)initWithAsset:(id)arg1 alternateTrackIDs:(id)arg2;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)options;
- (id)trackIDs;
- (id)asset;
- (BOOL)allowsEmptySelection;
- (BOOL)_isAlternateTrackGroup;
- (id)_optionForTrackID:(int)arg1 displaysNonForcedSubtitles:(BOOL)arg2;
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;

@end
