//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DMaterial.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSCH3DTexturesMaterial : TSCH3DMaterial
{
    tvec4_ac57c72d mColor;
    NSMutableArray *mTextures;
    NSMutableArray *mTilings;
}

+ (id)instanceWithArchive:(const struct Chart3DTexturesMaterialArchive *)arg1 unarchiver:(id)arg2;
@property(nonatomic) tvec4_ac57c72d color; // @synthesize color=mColor;
- (id).cxx_construct;
- (id)firstTiling;
- (id)firstTexture;
- (void)addTexture:(id)arg1 tiling:(id)arg2;
- (id)textureEnumerator;
- (unsigned int)textureCount;
- (id)tilings;
- (id)textures;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (void)saveToArchive:(struct Chart3DTexturesMaterialArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct Chart3DTexturesMaterialArchive *)arg1 unarchiver:(id)arg2;

@end

