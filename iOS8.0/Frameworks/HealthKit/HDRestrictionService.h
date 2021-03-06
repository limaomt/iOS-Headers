//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKRestrictionInterface.h"
#import "NSXPCListenerDelegate.h"

@class NSString;

@interface HDRestrictionService : NSObject <NSXPCListenerDelegate, HKRestrictionInterface>
{
}

+ (BOOL)isHealthAllowed;
- (void)isHealthAllowedWithReply:(CDUnknownBlockType)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

