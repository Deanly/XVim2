//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEContainerItem, NSSet;
@protocol IDEStructureEditingItem;

@protocol IDEStructureEditingItem <NSObject>
- (BOOL)hasAncestorInSet:(NSSet *)arg1;
- (id)actualRepresentedObject;
- (id <IDEStructureEditingItem>)parentStructureEditingItem;
- (long long)indexUnderParent;
- (IDEContainerItem *)representedContainerItem;
@end

