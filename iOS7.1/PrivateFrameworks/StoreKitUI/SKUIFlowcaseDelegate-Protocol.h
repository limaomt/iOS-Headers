//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKUIFlowcaseItem, SKUIFlowcaseViewController, UIImage;

@protocol SKUIFlowcaseDelegate <NSObject>

@optional
- (void)flowcaseDidChangeVisibleViews:(SKUIFlowcaseViewController *)arg1;
- (UIImage *)flowcase:(SKUIFlowcaseViewController *)arg1 imageForItem:(SKUIFlowcaseItem *)arg2 index:(int)arg3 orientation:(int)arg4;
- (void)flowcase:(SKUIFlowcaseViewController *)arg1 didSelectItem:(SKUIFlowcaseItem *)arg2 atIndex:(int)arg3;
@end

