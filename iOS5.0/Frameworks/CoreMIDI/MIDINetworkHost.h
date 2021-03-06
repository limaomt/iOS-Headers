/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MIDINetworkHost : NSObject
{
    struct _MIDINetworkHostImpl *_impl;
}

+ (id)hostWithName:(id)arg1 address:(id)arg2 port:(unsigned int)arg3;
+ (id)hostWithName:(id)arg1 netServiceName:(id)arg2 netServiceDomain:(id)arg3;
+ (id)hostWithName:(id)arg1 netService:(id)arg2;
+ (id)fromAddressAsText:(id)arg1 withName:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)description;
@property(readonly, retain, nonatomic) NSString *name;
@property(readonly, retain, nonatomic) NSString *address;
@property(readonly, nonatomic) unsigned int port;
- (id)host;
@property(readonly, retain, nonatomic) NSString *netServiceName;
@property(readonly, retain, nonatomic) NSString *netServiceDomain;
- (void)setName:(id)arg1;
- (BOOL)hasSameAddressAs:(id)arg1;
- (id)addressAsText;
- (id)displayName;

@end

