/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSPropertyMapping.h>

@interface NSPropertyMapping (_NSInternalMethods)
- (id)_initWithDestinationName:(id)arg1 valueExpression:(id)arg2;
- (id)initWithName:(id)arg1 valueExpression:(id)arg2;
- (BOOL)isEditable;
- (void)_createCachesAndOptimizeState;
- (void)_setIsEditable:(BOOL)arg1;
- (void)_throwIfNotEditable;
- (void)_setPropertyTransforms:(id)arg1;
- (id)_propertyTransforms;
@end

