/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKEventDetailCell.h>

@class UILabel;

@interface EKEventDetailTwoValueCell : EKEventDetailCell
{
    int _style;
    UILabel *_titleView;
    UILabel *_valueView;
    UILabel *_value2View;
}

- (void).cxx_destruct;
- (void)layoutForWidth:(float)arg1 position:(int)arg2;
- (int)style;
- (id)value2View;
- (id)valueView;
- (id)titleView;
- (BOOL)update;
@property(readonly, nonatomic) unsigned int visibleItems;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2 platformStyle:(int)arg3;

@end
