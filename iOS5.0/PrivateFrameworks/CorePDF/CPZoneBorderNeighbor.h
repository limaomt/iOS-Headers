/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class CPShape;

@interface CPZoneBorderNeighbor : NSObject <NSCopying>
{
    CPShape *neighborShape;
    int shapeSide;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)setNeighborShape:(id)arg1;
- (id)neighborShape;
- (void)setShapeSide:(int)arg1;
- (int)shapeSide;

@end

