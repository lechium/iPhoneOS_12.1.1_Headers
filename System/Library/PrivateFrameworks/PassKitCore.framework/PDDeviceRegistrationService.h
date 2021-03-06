/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PDXPCService.h>
#import <libobjc.A.dylib/PDDeviceRegistrationServiceExportedInterface.h>

@class PKEntitlementWhitelist, PDDeviceRegistrationServiceCoordinator, NSString;

@interface PDDeviceRegistrationService : PDXPCService <PDDeviceRegistrationServiceExportedInterface> {

	PKEntitlementWhitelist* _whitelist;
	PDDeviceRegistrationServiceCoordinator* _deviceRegistrationServiceCoordinator;

}

@property (nonatomic,retain) PDDeviceRegistrationServiceCoordinator * deviceRegistrationServiceCoordinator;              //@synthesize deviceRegistrationServiceCoordinator=_deviceRegistrationServiceCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performDeviceRegistrationForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(PDDeviceRegistrationServiceCoordinator *)deviceRegistrationServiceCoordinator;
-(void)setDeviceRegistrationServiceCoordinator:(PDDeviceRegistrationServiceCoordinator *)arg1 ;
-(id)initWithConnection:(id)arg1 ;
@end

