/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface UIKeyboardCandidate : NSObject <NSCopying>
{
    NSString *_alternativeText;
    NSString *_accessibilityLabel;
}

@property(copy, nonatomic) NSString *alternativeText; // @synthesize alternativeText=_alternativeText;
@property(readonly, nonatomic, getter=isExtensionCandidate) BOOL extensionCandidate;
@property(readonly, nonatomic) BOOL isForShortcutConversion;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(readonly, nonatomic) unsigned int deleteCount;
@property(readonly, nonatomic) unsigned int wordOriginFeedbackID;
@property(readonly, nonatomic) NSString *insertion;
@property(readonly, nonatomic) NSString *input;
@property(readonly, nonatomic) NSString *candidate;
- (void)dealloc;

@end
