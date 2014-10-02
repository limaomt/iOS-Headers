//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileAccessNode, NSObject<OS_xpc_object>;

__attribute__((visibility("hidden")))
@interface NSFileReactorProxy : NSObject
{
    NSObject<OS_xpc_object> *_client;
    id _reactorID;
    CDUnknownBlockType _messageSender;
    NSFileAccessNode *_itemLocation;
}

- (id)description;
- (id)descriptionWithIndenting:(id)arg1;
- (void)forwardUsingMessageSender:(CDUnknownBlockType)arg1;
- (id)itemLocation;
- (void)setItemLocation:(id)arg1;
- (CDUnknownBlockType)messageSender;
- (id)reactorID;
- (id)client;
- (void)finalize;
- (void)dealloc;
- (id)initWithClient:(id)arg1 reactorID:(id)arg2 messageSender:(CDUnknownBlockType)arg3;

@end
