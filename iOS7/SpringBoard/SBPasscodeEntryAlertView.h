/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBAlertView.h"

@class UIView<SBUIPasscodeLockView>, _UIBackdropView;

@interface SBPasscodeEntryAlertView : SBAlertView
{
    UIView<SBUIPasscodeLockView> *_passcodeView;
    _UIBackdropView *_blurView;
    double _blurRadius;
    _Bool _dismissing;
    id <SBPasscodeEntryAlertViewDelegate> _delegate;
}

@property(nonatomic) id <SBPasscodeEntryAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView<SBUIPasscodeLockView> *passcodeLockView; // @synthesize passcodeLockView=_passcodeView;
- (void)_animatePasscodeViewsToVisible:(_Bool)arg1;
- (void)_dismissAnimationCompleted;
- (long long)_backdropStyle;
- (id)_buildPasscodeView;
- (void)layoutForInterfaceOrientation:(long long)arg1;
- (void)dismiss;
- (_Bool)isReadyToBeRemovedFromView;
- (void)alertDisplayWillBecomeVisible;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

