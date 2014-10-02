//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSCHChartInfo;

__attribute__((visibility("hidden")))
@interface TSCH3DAbstractLimitingSeriesUpgrader : NSObject
{
    TSCHChartInfo *mChartInfo;
    CDUnknownBlockType mWillModifyBlock;
}

+ (id)upgraderWithChartInfo:(id)arg1;
+ (float)depthFactorForAdjustingNumberOfSeries:(unsigned int)arg1 chartType:(id)arg2 fromOldLimitingSeries:(unsigned int)arg3 toNewLimitingSeries:(unsigned int)arg4;
+ (BOOL)chartTypeUsesSeriesLimiting:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType willModifyBlock; // @synthesize willModifyBlock=mWillModifyBlock;
- (void)upgrade;
- (void)mutateInfoByAdjustingScaleFromLayoutSettings:(const CDStruct_1f804ca1 *)arg1 toLayoutSettings:(const CDStruct_1f804ca1 *)arg2;
- (id)adjustedScaleFromLayoutSettings:(const CDStruct_1f804ca1 *)arg1 toLayoutSettings:(const CDStruct_1f804ca1 *)arg2;
- (unsigned int)numberOfSeries;
- (void)mutateInfoWithContainingViewport:(id)arg1 scene:(id)arg2;
- (id)constantDepthInfoChartScaleForInfoChartScale:(id)arg1;
- (void)mutateInfoWithMutations:(id)arg1;
- (id)configuredSceneWithLayoutSettings:(CDStruct_1f804ca1)arg1;
- (void)configureScene:(id)arg1;
- (CDStruct_1f804ca1)upgradedLayoutSettings;
- (CDStruct_1f804ca1)oldLayoutSettings;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1;

@end
