//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBAwayViewPluginController, SBLockOverlayContext, SBLockScreenViewController;

@interface SBLockScreenPluginTransition : NSObject
{
    SBAwayViewPluginController *_fromController;
    SBAwayViewPluginController *_toController;
    SBLockScreenViewController *_lockScreenViewController;
    SBLockOverlayContext *_fromOverlay;
    SBLockOverlayContext *_toOverlay;
}

@property(readonly, retain) SBLockOverlayContext *toOverlay; // @synthesize toOverlay=_toOverlay;
@property(readonly, retain) SBAwayViewPluginController *toController; // @synthesize toController=_toController;
@property(readonly, retain) SBLockOverlayContext *fromOverlay; // @synthesize fromOverlay=_fromOverlay;
@property(readonly, retain) SBAwayViewPluginController *fromController; // @synthesize fromController=_fromController;
@property(readonly, retain) SBLockScreenViewController *lockScreenViewController; // @synthesize lockScreenViewController=_lockScreenViewController;
- (void)_addToView;
- (void)_removeFromView;
- (void)_removeViewFromHierarchy:(id)arg1;
- (void)beginTransition;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

