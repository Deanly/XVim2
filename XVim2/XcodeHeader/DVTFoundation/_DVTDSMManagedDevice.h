//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDevice, DVTObservingToken;

@interface _DVTDSMManagedDevice : NSObject
{
    DVTDevice *_device;
    DVTObservingToken *_token;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DVTObservingToken *token; // @synthesize token=_token;
@property(retain, nonatomic) DVTDevice *device; // @synthesize device=_device;

@end

