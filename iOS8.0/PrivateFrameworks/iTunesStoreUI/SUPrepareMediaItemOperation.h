//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

@class SUMediaPlayerItem;

@interface SUPrepareMediaItemOperation : ISOperation
{
    SUMediaPlayerItem *_mediaItem;
}

@property(readonly, copy, nonatomic) SUMediaPlayerItem *mediaPlayerItem; // @synthesize mediaPlayerItem=_mediaItem;
- (BOOL)_runHEADRequest:(id *)arg1;
- (void)run;
- (void)dealloc;
- (id)initWithMediaPlayerItem:(id)arg1;
- (id)init;

@end
