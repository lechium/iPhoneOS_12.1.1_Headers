/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDObjectLookup.h>
#import <libobjc.A.dylib/HMDObjectLookupScanProtocol.h>

@class HMDHomeManager, NSString;

@interface HMDHomeManagerObjectLookup : HMDObjectLookup <HMDObjectLookupScanProtocol> {

	HMDHomeManager* _homeManager;

}

@property (nonatomic,__weak,readonly) HMDHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMDHomeManager *)homeManager;
-(id)initWithHomeManager:(id)arg1 ;
-(void)_scanHomes;
-(void)_scanCloudZones;
-(void)_scanAccounts;
-(void)scanObjects;
@end

