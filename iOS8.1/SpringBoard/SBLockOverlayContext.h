//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBLockOverlayViewController;

@interface SBLockOverlayContext : NSObject
{
    SBLockOverlayViewController *_viewController;
    unsigned long long _priority;
    CDUnknownBlockType _activationBlock;
    CDUnknownBlockType _deactivationBlock;
}

@property(copy, nonatomic) CDUnknownBlockType deactivationBlock; // @synthesize deactivationBlock=_deactivationBlock;
@property(copy, nonatomic) CDUnknownBlockType activationBlock; // @synthesize activationBlock=_activationBlock;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) SBLockOverlayViewController *viewController; // @synthesize viewController=_viewController;
- (void)dealloc;
- (id)initWithOverlayViewController:(id)arg1 priority:(unsigned long long)arg2;

@end
