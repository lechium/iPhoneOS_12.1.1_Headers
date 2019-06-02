/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFSoftwareUpdateObserver.h>
#import <libobjc.A.dylib/HFExecutionEnvironmentObserver.h>

@class NSMapTable, NSString;

@interface HUSoftwareUpdateUIManager : NSObject <HFSoftwareUpdateObserver, HFExecutionEnvironmentObserver> {

	NSMapTable* _homeBackgroundCheckMapTable;

}

@property (nonatomic,readonly) NSMapTable * homeBackgroundCheckMapTable;              //@synthesize homeBackgroundCheckMapTable=_homeBackgroundCheckMapTable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(NSMapTable *)homeBackgroundCheckMapTable;
-(id)fetchAvailableUpdatesForHome:(id)arg1 ;
-(id)fetchAvailableUpdatesForAccessories:(id)arg1 ;
-(id)fetchAvailableUpdatesForAccessory:(id)arg1 ;
-(long long)numberOfAccessoriesWithAvailableUpdates:(id)arg1 ;
-(id)startUpdatesForAccessories:(id)arg1 presentationDelegate:(id)arg2 ;
-(id)presentLicensesIfNeededForSoftwareUpdate:(id)arg1 home:(id)arg2 presentationDelegate:(id)arg3 ;
-(BOOL)_shouldPresentTermsAndConditionsForSoftwareLicenseAgreementVersion:(id)arg1 home:(id)arg2 ;
-(BOOL)isLicensePresentationNecessaryForSoftwareUpdate:(id)arg1 home:(id)arg2 error:(out id*)arg3 ;
-(id)_markTermsAndConditionsAsReadForLicenseAgreementVersion:(id)arg1 inHome:(id)arg2 ;
-(void)executionEnvironmentDidEnterBackground:(id)arg1 ;
-(id)startSilentBackgroundCheckForHome:(id)arg1 ;
-(long long)numberOfAccessoriesWithAvailableUpdatesInHome:(id)arg1 ;
-(id)startUpdatesForAllAccessoriesInHome:(id)arg1 presentationDelegate:(id)arg2 ;
-(id)startUpdateForAccessory:(id)arg1 update:(id)arg2 presentationDelegate:(id)arg3 ;
-(id)init;
@end

