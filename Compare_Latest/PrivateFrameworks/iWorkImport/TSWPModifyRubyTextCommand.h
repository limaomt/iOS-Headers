/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSWPTextBaseCommand.h>

@class NSString, TSWPChangeSession, TSWPRubyField, TSWPStorage;

// Not exported
@interface TSWPModifyRubyTextCommand : TSWPTextBaseCommand
{
    TSWPRubyField *_rubyField;
    NSString *_rubyText;
    NSString *_baseText;
    unsigned long long _uiSessionID;
    TSWPChangeSession *_changeSession;
    NSString *_language;
    struct TSWPStorageTransaction *_undoRedoTransaction;
}

+ (struct _NSRange)p_modifyRubyField:(id)arg1 baseText:(id)arg2 changeSession:(id)arg3 language:(id)arg4 undoTransaction:(struct TSWPStorageTransaction *)arg5;
- (void)coalesceWithCommand:(id)arg1;
- (_Bool)canCoalesceWithCommand:(id)arg1;
- (void)redo;
- (void)undo;
- (void)p_undoRedo;
- (void)commit;
- (_Bool)process;
- (void)p_swapRubyTexts;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ModifyRubyTextCommandArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct ModifyRubyTextCommandArchive *)arg1 archiver:(id)arg2;
- (void)dealloc;
@property(readonly, nonatomic) TSWPStorage *storage;
- (id)initWithRubyField:(id)arg1 baseText:(id)arg2 rubyText:(id)arg3 rubyUISession:(unsigned long long)arg4 language:(id)arg5;
- (id)initWithRubyField:(id)arg1 baseText:(id)arg2 rubyText:(id)arg3 rubyUISession:(unsigned long long)arg4 changeSession:(id)arg5 language:(id)arg6;

@end
