/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreDAV/CoreDAVPostTask.h>

@class CoreDAVAction;

@interface CoreDAVSyncPostTask : CoreDAVPostTask
{
    CoreDAVAction *_action;
}

@property(readonly) CoreDAVAction *action; // @synthesize action=_action;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)setAction:(id)arg1;

@end
