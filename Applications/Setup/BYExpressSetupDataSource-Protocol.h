//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@protocol BYExpressSetupDataSource <NSObject>
- (NSNumber *)siriOptIn;
- (NSNumber *)findMyPhoneOptIn;
- (NSNumber *)appAnalyticsOptIn;
- (NSNumber *)deviceAnalyticsOptIn;
- (_Bool)locationServicesOptIn;
- (NSString *)appleID;
- (NSString *)firstName;
- (NSString *)sourceDeviceClass;
- (NSString *)sourceDeviceName;
- (_Bool)dataAvailable;
@end

