//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DVTPopoverContentViewController.h"

#import <DVTKit/DVTObjectLiteralQuickEditor-Protocol.h>
#import <DVTKit/NSTableViewDataSource-Protocol.h>
#import <DVTKit/NSTableViewDelegate-Protocol.h>

@class DVTFilePath, NSArray, NSDictionary, NSPopover, NSString, NSTableView, NSView;
@protocol DVTFileLiteralQuickEditViewControllerDelegate;

@interface DVTFileLiteralQuickEditViewController : DVTPopoverContentViewController <NSTableViewDataSource, NSTableViewDelegate, DVTObjectLiteralQuickEditor>
{
    NSPopover *_presentingPopover;
    id <DVTFileLiteralQuickEditViewControllerDelegate> _delegate;
    DVTFilePath *_selectedFilePath;
    NSDictionary *_playgroundFiles;
    NSArray *_sortedFileNames;
    NSTableView *_tableView;
    NSView *_footerView;
}

+ (struct CGSize)defaultContentSize;
- (void).cxx_destruct;
@property(retain) NSView *footerView; // @synthesize footerView=_footerView;
@property(retain) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *sortedFileNames; // @synthesize sortedFileNames=_sortedFileNames;
@property(retain, nonatomic) NSDictionary *playgroundFiles; // @synthesize playgroundFiles=_playgroundFiles;
@property(retain, nonatomic) DVTFilePath *selectedFilePath; // @synthesize selectedFilePath=_selectedFilePath;
@property(nonatomic) id <DVTFileLiteralQuickEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSPopover *presentingPopover; // @synthesize presentingPopover=_presentingPopover;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)moreButtonClicked:(id)arg1;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (id)initWithSelectedFile:(id)arg1 inPlaygroundFiles:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

