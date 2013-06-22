/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSTimer, UILabel, _UIHighlightView;

@interface UIWebPDFLabelView : UIView
{
    UILabel *_label;
    _UIHighlightView *_highlight;
    NSTimer *_timer;
    unsigned int currentPageIndex;
}

@property(nonatomic) unsigned int currentPageIndex; // @synthesize currentPageIndex;
- (void)fadeOut;
- (void)_fadeOutAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)showNowInSuperView:(id)arg1 atOrigin:(struct CGPoint)arg2 withText:(id)arg3 animated:(BOOL)arg4;
- (double)_fadeOutDuration;
- (double)_fadeOutDelay;
@property(readonly, nonatomic, getter=isTimerInstalled) BOOL timerInstalled;
- (void)setText:(id)arg1;
- (void)sizeToFit;
- (void)dealloc;
- (void)clearTimer;
- (id)initWithFrame:(struct CGRect)arg1;

@end
