//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBAlert, SBFAnimationFactory;

@protocol SBAlertDelegate <NSObject>
- (void)alertIsReadyToBeRemovedFromView:(SBAlert *)arg1;
- (void)alertIsReadyToBeDeactivated:(SBAlert *)arg1;
- (void)alert:(SBAlert *)arg1 requestsBackgroundStyleChangeWithAnimationFactory:(SBFAnimationFactory *)arg2;
@end
