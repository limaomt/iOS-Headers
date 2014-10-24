//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PUTiledLayoutGeneratorScanState;

@interface PUTiledLayoutGenerator : NSObject
{
    int _cacheTailLocation;
    int _cacheHeadLocation;
    CDStruct_2e802c68 _cachedTileInfo[20];
    id _cachedBatchID[20];
    BOOL _scannedBatchHasCaption;
    BOOL _shouldStop;
    int _tileCount;
    CDUnknownBlockType _tileImageSizeBlock;
    CDUnknownBlockType _tileMinimumSizeBlock;
    CDUnknownBlockType _tileHasCaptionBlock;
    CDUnknownBlockType _tileCaptionSizeBlock;
    CDUnknownBlockType _tileBatchIDBlock;
    int _numberOfMagneticGuidelines;
    float _roundingScale;
    CDUnknownBlockType _parsedFrameBlock;
    int _scanLocation;
    id _scannedBatchID;
    int _scanSpecialSequenceCount;
    struct CGSize _interTileSpacing;
    struct CGSize _noCaptionSpacing;
    struct UIEdgeInsets _captionPadding;
}

@property(nonatomic) BOOL shouldStop; // @synthesize shouldStop=_shouldStop;
@property(nonatomic) int scanSpecialSequenceCount; // @synthesize scanSpecialSequenceCount=_scanSpecialSequenceCount;
@property(nonatomic) BOOL scannedBatchHasCaption; // @synthesize scannedBatchHasCaption=_scannedBatchHasCaption;
@property(retain, nonatomic) id scannedBatchID; // @synthesize scannedBatchID=_scannedBatchID;
@property(nonatomic) int scanLocation; // @synthesize scanLocation=_scanLocation;
@property(nonatomic) CDUnknownBlockType parsedFrameBlock; // @synthesize parsedFrameBlock=_parsedFrameBlock;
@property(nonatomic) float roundingScale; // @synthesize roundingScale=_roundingScale;
@property(nonatomic) int numberOfMagneticGuidelines; // @synthesize numberOfMagneticGuidelines=_numberOfMagneticGuidelines;
@property(copy, nonatomic) CDUnknownBlockType tileBatchIDBlock; // @synthesize tileBatchIDBlock=_tileBatchIDBlock;
@property(copy, nonatomic) CDUnknownBlockType tileCaptionSizeBlock; // @synthesize tileCaptionSizeBlock=_tileCaptionSizeBlock;
@property(copy, nonatomic) CDUnknownBlockType tileHasCaptionBlock; // @synthesize tileHasCaptionBlock=_tileHasCaptionBlock;
@property(nonatomic) struct CGSize noCaptionSpacing; // @synthesize noCaptionSpacing=_noCaptionSpacing;
@property(nonatomic) struct UIEdgeInsets captionPadding; // @synthesize captionPadding=_captionPadding;
@property(copy, nonatomic) CDUnknownBlockType tileMinimumSizeBlock; // @synthesize tileMinimumSizeBlock=_tileMinimumSizeBlock;
@property(copy, nonatomic) CDUnknownBlockType tileImageSizeBlock; // @synthesize tileImageSizeBlock=_tileImageSizeBlock;
@property(nonatomic) struct CGSize interTileSpacing; // @synthesize interTileSpacing=_interTileSpacing;
@property(nonatomic) int tileCount; // @synthesize tileCount=_tileCount;
- (void).cxx_destruct;
- (float)valueByRounding:(float)arg1 usingMagneticGuidelines:(BOOL)arg2;
- (void)parsedFrame:(struct CGRect)arg1 type:(int)arg2 forTileAtIndex:(int)arg3;
- (struct CGSize)captionSizeForTileAtIndex:(int)arg1 proposedSize:(struct CGSize)arg2;
- (BOOL)scanTile:(CDStruct_2e802c68 *)arg1 ofType:(int)arg2;
- (BOOL)scanTile:(CDStruct_2e802c68 *)arg1 type:(int *)arg2;
- (BOOL)scanTileWithSquareImage:(CDStruct_2e802c68 *)arg1;
- (BOOL)scanTileWithHorizontalPanorama:(CDStruct_2e802c68 *)arg1;
- (BOOL)scanTileWithLandscapeImage:(CDStruct_2e802c68 *)arg1;
- (BOOL)scanTileWithPortraitImage:(CDStruct_2e802c68 *)arg1;
- (BOOL)scanAnyTile:(CDStruct_2e802c68 *)arg1;
- (BOOL)scanTile:(CDStruct_2e802c68 *)arg1 passingTest:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) BOOL isAtEnd;
@property(nonatomic) PUTiledLayoutGeneratorScanState *scanState;
- (void)didParseTiles;
- (BOOL)parseNextTiles;
- (void)willParseTiles;
- (void)parseTiles;
- (void)enumerateFramesWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end
