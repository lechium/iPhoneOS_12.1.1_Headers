//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, WDClinicalSampleAccountProviderGateway;

@interface WDClinicalSampleAccountProvider : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSDictionary *_properties;	// 24 = 0x18
    WDClinicalSampleAccountProviderGateway *_gateway;	// 32 = 0x20
}

@property(retain, nonatomic) WDClinicalSampleAccountProviderGateway *gateway; // @synthesize gateway=_gateway;
@property(copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;	// IMP=0x00000001000c7214

@end
