//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BYExpressSetupDataSource.h"

@class NSString, SASProximityInformation;

@interface BYExpressSetupProximityDataSource : NSObject <BYExpressSetupDataSource>
{
    SASProximityInformation *_information;	// 8 = 0x8
}

@property(retain, nonatomic) SASProximityInformation *information; // @synthesize information=_information;
- (void).cxx_destruct;	// IMP=0x00000001000c705c
- (id)siriOptIn;	// IMP=0x00000001000c6fe4
- (id)deviceAnalyticsOptIn;	// IMP=0x00000001000c6f90
- (id)appAnalyticsOptIn;	// IMP=0x00000001000c6f3c
- (_Bool)locationServicesOptIn;	// IMP=0x00000001000c6ef0
- (id)findMyPhoneOptIn;	// IMP=0x00000001000c6e9c
- (id)appleID;	// IMP=0x00000001000c6e48
- (id)firstName;	// IMP=0x00000001000c6df4
- (id)sourceDeviceClass;	// IMP=0x00000001000c6da0
- (id)sourceDeviceName;	// IMP=0x00000001000c6d4c
- (_Bool)dataAvailable;	// IMP=0x00000001000c6d10
- (id)initWithInformation:(id)arg1;	// IMP=0x00000001000c6c9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

