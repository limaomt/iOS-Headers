//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSCH3DChartBoundsLayout, TSCH3DChartType, TSCH3DScene;

__attribute__((visibility("hidden")))
@interface TSCH3DChartResizer : NSObject
{
    TSCH3DChartBoundsLayout *mLayout;
    TSCH3DChartType *mChartType;
    TSCH3DScene *mScene;
    struct ChartScenePropertyAccessor *mAccessor;
    float mMinStep;
    float mPrecision;
    struct ResizeData mPrevious;
    struct ResizeData mCurrent;
    tvec2_84d5962d mTarget;
    unsigned int mIndex;
    CDStruct_1f804ca1 mLayoutSettings;
}

+ (id)resizerWithLayout:(id)arg1 chartType:(id)arg2;
+ (float)perspectiveness;
+ (float)minimumSize;
+ (tvec2_84d5962d)adjustLabelWrapSize:(const tvec2_84d5962d *)arg1;
+ (tvec2_84d5962d)adjustLabelWrapSize:(const tvec2_84d5962d *)arg1 forScene:(id)arg2;
@property(nonatomic) float precision; // @synthesize precision=mPrecision;
@property(nonatomic) float minStep; // @synthesize minStep=mMinStep;
- (id).cxx_construct;
- (tvec2_84d5962d)resize:(const tvec2_84d5962d *)arg1 startingSize:(tvec2_84d5962d *)arg2;
- (tvec2_84d5962d)updateResizerFromRequestedSize:(const tvec2_84d5962d *)arg1 startingSize:(tvec2_84d5962d *)arg2;
- (float)containingViewportThreshold;
- (void)readjustContainingViewport;
- (void)adjustContainingViewport;
- (tvec2_3b141483)containingViewportFromCurrentSize;
- (void)initializeResizing:(tvec2_84d5962d *)arg1;
- (void)setContainingViewport:(tvec2_3b141483 *)arg1;
- (tvec2_3b141483)containingViewportFromSize:(tvec2_84d5962d *)arg1;
- (float)perspectiveness;
- (void)loop;
- (BOOL)resize1;
- (void)setScale:(tvec3_17f03ce0 *)arg1;
- (BOOL)currentCanImprove;
- (tvec2_01ee4891)canImprove;
- (void)seedResizeCondition;
- (void)updateResizeData;
- (BOOL)checkImprovement;
- (void)updateSteps;
- (tvec3_17f03ce0)adjustedScale;
- (tvec3_17f03ce0)clampDepthRatio:(tvec3_17f03ce0 *)arg1;
- (tvec3_17f03ce0)clamp:(tvec3_17f03ce0 *)arg1;
- (tvec3_17f03ce0)adjust:(tvec3_17f03ce0 *)arg1;
- (tvec3_17f03ce0)adjust:(tvec3_17f03ce0 *)arg1 by:(float)arg2;
- (void)gingerClamp;
- (BOOL)allConverges;
- (tvec2_01ee4891)converges;
- (void)setStep:(float)arg1;
- (float)step;
- (float)maxDepthRatio;
- (float)minScale;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 chartType:(id)arg2;

@end
