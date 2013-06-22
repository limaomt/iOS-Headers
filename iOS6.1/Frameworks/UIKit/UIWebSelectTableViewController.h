/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UITableViewController.h>

#import "UIKeyInput-Protocol.h"

@class DOMHTMLSelectElement, NSArray, UIWebSelectPopover;

@interface UIWebSelectTableViewController : UITableViewController <UIKeyInput>
{
    DOMHTMLSelectElement *_selectionNode;
    NSArray *_cachedItems;
    NSArray *_groupsAndOptions;
    unsigned int _singleSelectionIndex;
    unsigned int _singleSelectionSection;
    BOOL _allowsMultipleSelection;
    float _fontSize;
    float _maximumTextWidth;
    int _textAlignment;
    UIWebSelectPopover *_popover;
}

@property(nonatomic) UIWebSelectPopover *_popover; // @synthesize _popover;
@property(retain, nonatomic) NSArray *_cachedItems; // @synthesize _cachedItems;
@property(retain, nonatomic) NSArray *_groupsAndOptions; // @synthesize _groupsAndOptions;
@property(retain, nonatomic) DOMHTMLSelectElement *_selectionNode; // @synthesize _selectionNode;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (BOOL)hasText;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_optionsForSection:(int)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)heightForItems;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (id)initWithDOMHTMLSelectNode:(id)arg1 cachedItems:(id)arg2 singleSelectionIndex:(unsigned int)arg3 multipleSelection:(BOOL)arg4;
- (void)_setupGroupsAndOptions;
- (BOOL)_isEmpty;

// Remaining properties
@property(nonatomic) int autocapitalizationType;
@property(nonatomic) int autocorrectionType;
@property(nonatomic) BOOL enablesReturnKeyAutomatically;
@property(nonatomic) int keyboardAppearance;
@property(nonatomic) int keyboardType;
@property(nonatomic) int returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(nonatomic) int spellCheckingType;

@end
