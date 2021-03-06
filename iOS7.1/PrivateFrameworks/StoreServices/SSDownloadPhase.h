//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "SSXPCCoding.h"

@class SSOperationProgress;

@interface SSDownloadPhase : NSObject <SSXPCCoding, NSCopying>
{
    SSOperationProgress *_operationProgress;
}

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) SSOperationProgress *operationProgress;
@property(readonly) long long totalProgressValue;
@property(readonly) long long progressValue;
@property(readonly) float progressChangeRate;
@property(readonly) int progressUnits;
@property(readonly) int phaseType;
@property(readonly) double estimatedSecondsRemaining;
- (void)dealloc;
- (id)initWithOperationProgress:(id)arg1;
- (id)init;

@end

